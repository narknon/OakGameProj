#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser_RandomWithTrace.h"
#include "ActiveAmbientLocationChooser_RandomOnFloor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_RandomOnFloor : public UActiveAmbientLocationChooser_RandomWithTrace {
    GENERATED_BODY()
public:
    UActiveAmbientLocationChooser_RandomOnFloor();
};

