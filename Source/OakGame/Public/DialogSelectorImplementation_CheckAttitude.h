#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckAttitude.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_CheckAttitude : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ObserverParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* TargetParam;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETeamAttitude::Type> DesiredAttitude;
    
    UDialogSelectorImplementation_CheckAttitude();
};

