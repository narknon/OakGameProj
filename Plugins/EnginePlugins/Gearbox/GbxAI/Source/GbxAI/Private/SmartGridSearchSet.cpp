#include "SmartGridSearchSet.h"

FSmartGridSearchSet::FSmartGridSearchSet() {
    this->MaxPoints = 0;
    this->Center = NULL;
    this->bOnlyGenerateDensePoints = false;
    this->bDefineArc = false;
    this->PointSeparationDistanceNormal = 0.00f;
    this->PointSeparationDistanceDenseSpots = 0.00f;
    this->RadiusApplyDenserSeparation = 0.00f;
    this->DenseSpotProvider = NULL;
}

