#include "CameraBehaviorLookAxis.h"

FCameraBehaviorLookAxis::FCameraBehaviorLookAxis() {
    this->InputScale = 0.00f;
    this->bLimit = false;
    this->MinAngle = 0.00f;
    this->MaxAngle = 0.00f;
    this->FeatheringAngle = 0.00f;
    this->FeatheringInputScale = 0.00f;
}

