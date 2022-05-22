#pragma once
#include "CoreMinimal.h"
#include "DamageOverTimeContribution.h"
#include "AppliedAttributeEffect.h"
#include "StatusEffectInstance.h"
#include "StatusEffectInstanceStack.generated.h"

class UStatusEffectManagerComponent;
class UStatusEffectData;
class UDamageComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStatusEffectInstanceStack {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UStatusEffectManagerComponent* Owner;
    
    UPROPERTY()
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(Export)
    UDamageComponent* DoTDamageComponent;
    
    UPROPERTY()
    TArray<FAppliedAttributeEffect> AttributeEffects;
    
    UPROPERTY()
    TArray<FDamageOverTimeContribution> DPSContributions;
    
    UPROPERTY()
    TArray<FStatusEffectInstance> Instances;
    
    FStatusEffectInstanceStack();
};

