#include "AIAction_GoToPoint.h"

UAIAction_GoToPoint::UAIAction_GoToPoint() {
    this->bUseNavSettings = true;
    this->MoveTicket = NULL;
    this->bUseMoveFailTimeLimit = false;
    this->bUseQuery = false;
    this->MinOffsetInFrontOfTarget = 0.00f;
    this->MaxOffsetInFrontOfTarget = 0.00f;
    this->OffsetAngle = 0.00f;
    this->bUseOffsetInFrontOfTarget = false;
    this->CirclingDistance = 0.00f;
    this->Direction = ECircleDirection::Left;
    this->bRotateAroundTarget = false;
    this->bUseCustomRotationTarget = false;
    this->bUseRotation = false;
    this->bTestDirectPath = false;
    this->bDebugTestDirectPath = false;
    this->GoToPointVersion = 7;
}

