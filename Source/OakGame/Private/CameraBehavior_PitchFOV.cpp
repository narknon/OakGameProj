#include "CameraBehavior_PitchFOV.h"

UCameraBehavior_PitchFOV::UCameraBehavior_PitchFOV() {
    this->PitchFOVCurve = NULL;
    this->PitchFOVScaleCurve = NULL;
    this->MinPitch = 0.00f;
    this->MaxPitch = 90.00f;
}

