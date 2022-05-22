#include "AIAspectSettings_Leap.h"

FAIAspectSettings_Leap::FAIAspectSettings_Leap() {
    this->Action = NULL;
    this->Speed = 0.00f;
    this->AnglePercent = 0.00f;
    this->MaxPrediction = 0.00f;
    this->bDoNavigationTest = false;
    this->bDoCollisionTest = false;
    this->bAddTargetRadius = false;
    this->UseExactLocationDistance = 0.00f;
    this->TestPeriod = 0.00f;
    this->bCanStartWhileFalling = false;
}

