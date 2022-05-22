#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "PlaythroughDefinedValueRow.h"
#include "PlayThroughDefinedAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UPlayThroughDefinedAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPlaythroughDefinedValueRow Value;
    
public:
    UPlayThroughDefinedAttributeValueResolver();
};

