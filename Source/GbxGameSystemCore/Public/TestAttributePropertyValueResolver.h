#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "TestAttributePropertyValueResolver.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class UTestAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
    UTestAttributePropertyValueResolver();
};

