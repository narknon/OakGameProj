#include "AIAction_StateMachineChild.h"

class UAIAction_StateMachineChild;

void UAIAction_StateMachineChild::GetAvailableStates(TArray<UAIAction_StateMachineChild*>& Array) const {
}

UAIAction_StateMachineChild::UAIAction_StateMachineChild() {
    this->OnSuccess = NULL;
    this->OnFailure = NULL;
}

