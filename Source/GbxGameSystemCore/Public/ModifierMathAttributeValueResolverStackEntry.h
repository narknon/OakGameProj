#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
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

