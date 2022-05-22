#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_IsPassenger.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_IsPassenger : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* CandidateParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* VehicleParam;
    
    UDialogSelectorImplementation_IsPassenger();
};

