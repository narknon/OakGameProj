#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "AttributeEffect.generated.h"

class UGbxAttributeData;
class UAttributeEffectMutatorData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAttributeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* AttributeData;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData BaseModifierValue;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAttributeEffectMutatorData* Mutator;
    
    FAttributeEffect();
};

