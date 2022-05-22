#include "WeaponSimpleMotionBoneControl.h"

UWeaponSimpleMotionBoneControl::UWeaponSimpleMotionBoneControl() {
    this->TranslationMode = BMM_Ignore;
    this->TranslationSpace = BCS_BoneSpace;
    this->RotationMode = BMM_Ignore;
    this->RotationSpace = BCS_BoneSpace;
    this->ScaleMode = BMM_Ignore;
    this->ScaleSpace = BCS_BoneSpace;
}

