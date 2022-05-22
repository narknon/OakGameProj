#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActiveAmbientLocationValidator.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UActiveAmbientLocationValidator : public UObject {
    GENERATED_BODY()
public:
    UActiveAmbientLocationValidator();
};

