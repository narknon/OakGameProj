#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_OnMissionInRange.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_OnMissionInRange : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* RangeStartParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* RangeEndParam;
    
    UDialogSelectorImplementation_OnMissionInRange();
};

