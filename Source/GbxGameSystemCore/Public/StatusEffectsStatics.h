#pragma once
#include "CoreMinimal.h"
#include "StatusEffectQuery.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StatusEffectInstanceReference.h"
#include "StatusEffectRemoveSpec.h"
#include "StatusEffectSpec.h"
#include "StatusEffectQueryResult.h"
#include "StatusEffectsStatics.generated.h"

class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UStatusEffectsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatusEffectsStatics();
    UFUNCTION(BlueprintCallable)
    static bool RemoveStatusEffectInstance(AActor* Target, UPARAM(Ref) FStatusEffectInstanceReference& Reference);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveStatusEffect(AActor* Target, const FStatusEffectRemoveSpec& RemoveSpec);
    
    UFUNCTION(BlueprintCallable)
    static FStatusEffectQueryResult QueryStatusEffect(AActor* Target, const FStatusEffectQuery& Query);
    
    UFUNCTION(BlueprintCallable)
    static FStatusEffectInstanceReference AddStatusEffect(AActor* Target, const FStatusEffectSpec& Spec);
    
};

