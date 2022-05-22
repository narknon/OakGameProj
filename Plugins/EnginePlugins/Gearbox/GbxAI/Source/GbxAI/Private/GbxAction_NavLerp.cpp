#include "GbxAction_NavLerp.h"


UGbxAction_NavLerp::UGbxAction_NavLerp() {
    this->bWaitForDistance = true;
    this->MaxHorizontalDistance = 512.00f;
    this->MaxVerticalDistance = 100.00f;
    this->bWaitForVelocity = true;
    this->MaxVelocity = 10.00f;
    this->bCallAlmostDone = false;
    this->AlmostedDoneTime = 0.00f;
    this->bSpecifyLerpTime = false;
    this->LerpTime = 0.00f;
    this->bVisible = true;
}

