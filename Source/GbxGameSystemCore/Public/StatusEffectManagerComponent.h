#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectQuery.h"
#include "StatusEffectInstanceStack.h"
#include "InspectionInfoProvider.h"
#include "StatusEffectRemoveSpec.h"
#include "StatusEffectInstanceReference.h"
#include "StatusEffectSpec.h"
#include "StatusEffectQueryResult.h"
#include "StatusEffectManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UStatusEffectManagerComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FStatusEffectInstanceStack> InstanceStacks;
    
public:
    UStatusEffectManagerComponent();
    UFUNCTION(BlueprintCallable)
    bool RemoveStatusEffectInstance(UPARAM(Ref) FStatusEffectInstanceReference& Reference);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveStatusEffect(const FStatusEffectRemoveSpec& Spec);
    
    UFUNCTION(BlueprintPure)
    FStatusEffectQueryResult QueryStatusEffect(const FStatusEffectQuery& Query) const;
    
    UFUNCTION(BlueprintCallable)
    FStatusEffectInstanceReference AddStatusEffect(const FStatusEffectSpec& Spec);
    
    
    // Fix for true pure virtual functions not being implemented
};

