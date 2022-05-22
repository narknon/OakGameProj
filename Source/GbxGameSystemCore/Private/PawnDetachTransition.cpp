#include "PawnDetachTransition.h"

FPawnDetachTransition::FPawnDetachTransition() {
    this->bValidateDetachLocation = false;
    this->ValidationMaxOffset = 0.00f;
    this->ValidationToleranceSize = 0.00f;
    this->bComputeDetachLocationFromAction = false;
    this->bAbsoluteDetachLocation = false;
}

