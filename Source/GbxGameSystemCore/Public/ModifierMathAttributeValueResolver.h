#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "ModifierMathAttributeValueResolverStackEntry.h"
#include "ModifierMathAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UModifierMathAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FModifierMathAttributeValueResolverStackEntry> ModifierStack;
    
public:
    UModifierMathAttributeValueResolver();
};

