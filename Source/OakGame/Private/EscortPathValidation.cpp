#include "EscortPathValidation.h"

FEscortPathValidation::FEscortPathValidation() {
    this->RotateAngleToSearchPath = 0.00f;
    this->ValidatePathAnticipationTime = 0.00f;
    this->ValidatePathFowardDistance = 0.00f;
    this->ValidatePathIteration = 0;
    this->bCanGoIfValidationFailed = false;
}

