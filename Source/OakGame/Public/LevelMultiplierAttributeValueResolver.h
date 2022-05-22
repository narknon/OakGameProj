#pragma once
#include "CoreMinimal.h"
#include "LevelMultiplierDefinedValueRow.h"
#include "AttributeValueResolver.h"
#include "LevelMultiplierAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ULevelMultiplierAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLevelMultiplierDefinedValueRow Value;
    
public:
    ULevelMultiplierAttributeValueResolver();
};

