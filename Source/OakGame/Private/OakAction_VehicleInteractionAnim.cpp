#include "OakAction_VehicleInteractionAnim.h"

UOakAction_VehicleInteractionAnim::UOakAction_VehicleInteractionAnim() {
    this->bDetachPawnOnBringUpWeapon = false;
    this->bResetCameraModeOnStart = false;
    this->bInterpolateRotationToZero = false;
    this->InterpolateRotationToZeroDuration = 0.20f;
}

