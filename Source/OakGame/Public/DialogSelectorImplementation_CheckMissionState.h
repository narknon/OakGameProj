#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "EMissionStatus.h"
#include "DialogSelectorImplementation_CheckMissionState.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckMissionState : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* MissionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMissionStatus> DesiredMissionStatus;
    
    UDialogSelectorImplementation_CheckMissionState();
};

