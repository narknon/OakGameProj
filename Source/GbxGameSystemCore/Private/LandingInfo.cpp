#include "LandingInfo.h"

FLandingInfo::FLandingInfo() {
    this->bNoMinVelIfJumped = false;
    this->LandedMinVel = 0.00f;
    this->LandedImpact = NULL;
    this->bPlayLandedImpactAtSpecificFeet = false;
    this->LandedAction = NULL;
    this->VocalizationTag = NULL;
}

