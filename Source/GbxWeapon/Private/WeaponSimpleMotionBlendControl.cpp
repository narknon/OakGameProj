#include "WeaponSimpleMotionBlendControl.h"

UWeaponSimpleMotionBlendControl::UWeaponSimpleMotionBlendControl() {
    this->bUseExistingNode = false;
    this->bMeshSpaceBlend = false;
    this->Animation = NULL;
    this->ActiveBlendTarget = 0.00f;
}

