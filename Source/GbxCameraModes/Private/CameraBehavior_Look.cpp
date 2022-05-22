#include "CameraBehavior_Look.h"

UCameraBehavior_Look::UCameraBehavior_Look() {
    this->UpAxis = ECameraLookSpaces::World;
    this->YawSpeedScale = 1.00f;
    this->PitchSpeedScale = 1.00f;
    this->RollSpeedScale = 1.00f;
    this->bSnapOnStart = false;
}

