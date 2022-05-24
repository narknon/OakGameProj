#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "AttributeInitializationData.h"
#include "ModifierMathAttributeValueResolverStackEntry.generated.h"

USTRUCT(BlueprintType)
struct FModifierMathAttributeValueResolverStackEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ModifierValue;
    
    GBXGAMESYSTEMCORE_API FModifierMathAttributeValueResolverStackEntry();
};

