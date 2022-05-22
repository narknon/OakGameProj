#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser_RandomWithTrace.h"
#include "ActiveAmbientLocationChooser_RandomOnCeiling.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_RandomOnCeiling : public UActiveAmbientLocationChooser_RandomWithTrace {
    GENERATED_BODY()
public:
    UActiveAmbientLocationChooser_RandomOnCeiling();
};

