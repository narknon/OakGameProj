#include "AIAction_ActionAtPoint.h"

UAIAction_ActionAtPoint::UAIAction_ActionAtPoint() {
    this->bCheckLocationDuringAction = false;
    this->bUseRotationDuringAction = true;
    this->bUseRotationTargetDuringAction = true;
    this->bUseActionRotation = false;
    this->ActionAtPointVersion = 2;
}

