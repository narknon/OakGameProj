#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "ConstantAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UConstantAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Value;
    
public:
    UConstantAttributeValueResolver();
};

