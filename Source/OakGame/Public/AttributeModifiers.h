#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "AttributeModifiers.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct FAttributeModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* AttributeToModify;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> StackValues;
    
    OAKGAME_API FAttributeModifiers();
};

