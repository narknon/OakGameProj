#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "AttributeEffectData.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAttributeEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeToModify;
    
    UPROPERTY(EditAnywhere)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ModifierValue;
    
    FAttributeEffectData();
};

