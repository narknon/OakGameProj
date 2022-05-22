#include "OakFirstPersonData.h"

UOakFirstPersonData::UOakFirstPersonData() {
    this->MinSpeed2DWhenTryingToMove = 100.00f;
    this->WeaponAngleAlphaExp = 0.00f;
    this->RAddAlphaInterpSpeed = 5.00f;
    this->PistolStockAddAlphaInterpSpeed = 10.00f;
    this->MantleReachInterpInSpeed = 15.00f;
    this->MantleReachInterpOutSpeed = 10.00f;
    this->MantleReachOutMaximumUpwardVelocity = 250.00f;
    this->MantleReachOutMinimumHeightOffGround = 100.00f;
    this->BringHandsDownReturnRate = 2.00f;
    this->BringHandsDownCurveExponent = 3.00f;
}

