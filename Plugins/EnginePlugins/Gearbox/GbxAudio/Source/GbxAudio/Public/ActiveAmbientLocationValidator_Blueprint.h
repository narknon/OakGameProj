#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationValidator.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationValidator_Blueprint.generated.h"

class UActiveAmbientSoundComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UActiveAmbientLocationValidator_Blueprint : public UActiveAmbientLocationValidator {
    GENERATED_BODY()
public:
    UActiveAmbientLocationValidator_Blueprint();
    UFUNCTION(BlueprintImplementableEvent)
    bool IsProposedLocationValid(const UActiveAmbientSoundComponent* ActiveAmbientComponent, const FVector& Location) const;
    
};

