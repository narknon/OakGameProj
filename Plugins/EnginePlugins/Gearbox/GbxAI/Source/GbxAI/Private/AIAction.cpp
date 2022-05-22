#include "AIAction.h"

class UAIAction;

UAIAction* UAIAction::CreateSubAction(UClass* ActionClass, FName Name) {
    return NULL;
}

UAIAction::UAIAction() {
    this->Blackboard = NULL;
    this->bWaitForAllAspects = false;
    this->bIsChildAction = false;
    this->ActionVersion = 4;
}

