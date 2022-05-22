#include "CameraBehavior_SprintFOV.h"

UCameraBehavior_SprintFOV::UCameraBehavior_SprintFOV() {
    this->CurrentDelay = 0.00f;
    this->BlendPct = 0.00f;
    this->bTransitioningToSprintFoV = false;
}

