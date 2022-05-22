#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser_RandomWithinActor.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationChooser_RandomWithTrace.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_RandomWithTrace : public UActiveAmbientLocationChooser_RandomWithinActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector TraceVector;
    
    UActiveAmbientLocationChooser_RandomWithTrace();
};

