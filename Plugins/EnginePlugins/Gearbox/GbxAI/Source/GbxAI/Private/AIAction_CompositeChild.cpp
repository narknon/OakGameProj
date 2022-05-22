#include "AIAction_CompositeChild.h"

class UAIAction;

UAIAction* UAIAction_CompositeChild::CreateAction(UClass* ActionClass) {
    return NULL;
}

UAIAction_CompositeChild::UAIAction_CompositeChild() {
    this->Action = NULL;
    this->bCanCauseParentToStop = true;
}

