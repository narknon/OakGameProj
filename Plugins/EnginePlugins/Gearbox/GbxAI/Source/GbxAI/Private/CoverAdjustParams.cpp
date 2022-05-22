#include "CoverAdjustParams.h"

FCoverAdjustParams::FCoverAdjustParams() {
    this->AdjustDistanceDown = 0.00f;
    this->bDoDownAdjustment = false;
    this->AdjustDistanceUp = 0.00f;
    this->bDoUpAdjustment = false;
    this->AdjustDistanceForward = 0.00f;
    this->bDoForwardAdjustment = false;
    this->bEdgeTestLeft = false;
    this->bEdgeTestRight = false;
    this->EdgeTestSections = 0;
    this->EdgeTestHeightPct = 0.00f;
    this->EdgeTestDistancePct = 0.00f;
    this->EdgeTestWalkBackDistance = 0.00f;
    this->EdgeTestAngleThreshold = 0;
    this->BlockTestHitPct = 0.00f;
    this->BlockTestDistancePct = 0.00f;
    this->BlockTestHorizontalSections = 0;
    this->BlockTestVerticalSections = 0;
    this->BlockTestAngleThreshold = 0;
}

