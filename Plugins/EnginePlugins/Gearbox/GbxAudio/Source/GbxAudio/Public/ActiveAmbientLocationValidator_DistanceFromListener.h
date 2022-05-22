#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationValidator.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationValidator_DistanceFromListener.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationValidator_DistanceFromListener : public UActiveAmbientLocationValidator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval Range;
    
    UActiveAmbientLocationValidator_DistanceFromListener();
};

