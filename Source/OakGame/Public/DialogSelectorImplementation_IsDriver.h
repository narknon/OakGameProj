#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_IsDriver.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_IsDriver : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* CandidateParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* VehicleParam;
    
    UDialogSelectorImplementation_IsDriver();
};

