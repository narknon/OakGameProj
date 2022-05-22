#include "CameraBehavior_AdjustForFocusObject.h"

UCameraBehavior_AdjustForFocusObject::UCameraBehavior_AdjustForFocusObject() {
    this->CamReturnTime = 1.00f;
    this->CamMovementThreshold = 2.00f;
    this->CamMovementSpeed_Fast = 6.00f;
    this->CamMovementSpeed_Slow = 0.50f;
    this->LastFocusObject = NULL;
}

