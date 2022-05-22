#include "CameraBehavior_LimitPitch.h"

UCameraBehavior_LimitPitch::UCameraBehavior_LimitPitch() {
    this->MinPitch = -80.00f;
    this->MaxPitch = 80.00f;
    this->bUseInitialPitch = false;
    this->InitialPitch = 0.00f;
}

