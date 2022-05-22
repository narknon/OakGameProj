#include "GbxAnimNode_SimpleMotionBoneControl.h"

FGbxAnimNode_SimpleMotionBoneControl::FGbxAnimNode_SimpleMotionBoneControl() {
    this->ControlValue = 0.00f;
    this->bIsActive = false;
    this->bAutoActivate = false;
    this->bPaused = false;
    this->bActivateAfterRecovery = false;
    this->IdleSpeedControlValue = 0.00f;
    this->ActiveSpeedControlValue = 0.00f;
    this->RecoverySpeedControlValue = 0.00f;
    this->TranslationMode = BMM_Ignore;
    this->TranslationSpace = BCS_WorldSpace;
    this->RotationMode = BMM_Ignore;
    this->RotationSpace = BCS_WorldSpace;
    this->ScaleMode = BMM_Ignore;
    this->ScaleSpace = BCS_WorldSpace;
    this->ControlImpulseSpeed = 0.00f;
    this->ControlImpulseMaxValue = 0.00f;
    this->ControlImpulseDecayDelay = 0.00f;
    this->ControlImpulseDecaySpeed = 0.00f;
}

