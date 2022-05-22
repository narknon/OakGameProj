#include "WeaponSimpleMotionControlBase.h"

UWeaponSimpleMotionControlBase::UWeaponSimpleMotionControlBase() {
    this->bStartActive = true;
    this->bAutoActivate = false;
    this->InputHandler = ESimpleMotionInputHandler::None;
    this->bLimitMinControlValue = false;
    this->bLimitMaxControlValue = false;
    this->MinControlValue = 0.00f;
    this->MaxControlValue = 0.00f;
    this->ControlImpulseSpeed = 0.00f;
    this->ControlImpulseMaxValue = 0.00f;
    this->ControlImpulseDecayDelay = 0.00f;
    this->ControlImpulseDecaySpeed = 1.00f;
}

