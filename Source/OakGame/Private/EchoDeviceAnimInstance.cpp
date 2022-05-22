#include "EchoDeviceAnimInstance.h"

UEchoDeviceAnimInstance::UEchoDeviceAnimInstance() {
    this->EchoDeviceOwner = NULL;
    this->bOutsideOfMenuMode = false;
    this->bButton1Pressed = false;
    this->bButton2Pressed = false;
    this->bButton3Pressed = false;
    this->DPadXAxis = 0.00f;
    this->DPadYAxis = 0.00f;
}

