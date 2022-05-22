#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EPlayThroughType.h"
#include "PlayThroughAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UPlayThroughAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EPlayThroughType PlayThroughToResolve;
    
public:
    UPlayThroughAttributeValueResolver();
};

