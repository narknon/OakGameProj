#pragma once
#include "CoreMinimal.h"
#include "AIAction_CompositeChild.h"
#include "AIAction_StateMachineChild.generated.h"

class UAIAction_StateMachineChild;

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, Within=AIAction_StateMachine)
class GBXAI_API UAIAction_StateMachineChild : public UAIAction_CompositeChild {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAIAction_StateMachineChild* OnSuccess;
    
    UPROPERTY(EditAnywhere)
    UAIAction_StateMachineChild* OnFailure;
    
    UAIAction_StateMachineChild();
    UFUNCTION()
    void GetAvailableStates(TArray<UAIAction_StateMachineChild*>& Array) const;
    
};

