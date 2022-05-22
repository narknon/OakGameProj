#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActiveAmbientLocationChooser.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser : public UObject {
    GENERATED_BODY()
public:
    UActiveAmbientLocationChooser();
};

