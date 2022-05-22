#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "StatusEffectModifiers.generated.h"

class UStatusEffectData;

USTRUCT(BlueprintType)
struct FStatusEffectModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat EffectChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat EffectDurationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat EffectDamageModifier;
    
    GBXGAMESYSTEMCORE_API FStatusEffectModifiers();
};

