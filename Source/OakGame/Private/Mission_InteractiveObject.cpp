#include "Mission_InteractiveObject.h"

AMission_InteractiveObject::AMission_InteractiveObject() {
    this->bAutomaticallyControlWaypoint = true;
    this->bUseComplexConditions = false;
    this->ObserverComponent = NULL;
    this->IconComponent = NULL;
}

