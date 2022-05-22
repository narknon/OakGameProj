#include "CameraBehavior_ViewWeaponOffset.h"

UCameraBehavior_ViewWeaponOffset::UCameraBehavior_ViewWeaponOffset() {
    this->bSetFOV = true;
    this->SplitScreenFOVScale = 0.50f;
    this->VerticalSplitScreenFOVScale = 1.00f;
    this->QuadSplitScreenFOVScale = 1.00f;
}

