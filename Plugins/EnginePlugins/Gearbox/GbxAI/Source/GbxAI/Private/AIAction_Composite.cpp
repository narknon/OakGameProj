#include "AIAction_Composite.h"

class UAIAction_CompositeChild;

UAIAction_CompositeChild* UAIAction_Composite::CreateChild(FName ChildName) {
    return NULL;
}

UAIAction_Composite::UAIAction_Composite() {
    this->CompositeVersion = 3;
}

