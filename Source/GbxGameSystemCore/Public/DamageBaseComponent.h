#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RegisteredConditionalDamageValueModifier.h"
#include "RegisteredConditionalDamageCriticalModifier.h"
#include "DamageBaseComponent.generated.h"

class UConditionalDamageHitRegionModifier;
class UTargetableComponent;
class UTeamComponent;
class UConditionalDamageTypeModifier;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDamageBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UTeamComponent* CachedTeamComponent;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* CachedTargetableComponent;
    
    UPROPERTY(Transient)
    TArray<FRegisteredConditionalDamageValueModifier> ConditionalValueModifiers;
    
    UPROPERTY(Transient)
    TArray<FRegisteredConditionalDamageCriticalModifier> ConditionalCritModifiers;
    
    UPROPERTY(Transient)
    TArray<UConditionalDamageTypeModifier*> ConditionalTypeModifiers;
    
    UPROPERTY(Transient)
    TArray<UConditionalDamageHitRegionModifier*> ConditionalHitRegionModifiers;
    
public:
    UDamageBaseComponent();
};

