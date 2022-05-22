#include "RubberbandSpeedData.h"

FRubberbandSpeedData::FRubberbandSpeedData() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->MinDistanceSpeed = 0.00f;
    this->MaxDistanceSpeed = 0.00f;
    this->bBehindOnly = false;
    this->SplineReference = NULL;
    this->SplineDistanceOffset = 0.00f;
    this->bUseSpline = false;
    this->CachedSplineComponent = NULL;
}

