#include "AIActionBlueprint.h"

class UProperty;

bool UAIActionBlueprint::ShouldSkipBlackboardProperty(UProperty* Property) {
    return false;
}

UAIActionBlueprint::UAIActionBlueprint() {
    this->ParentBlueprint = NULL;
    this->Blackboard = NULL;
}

