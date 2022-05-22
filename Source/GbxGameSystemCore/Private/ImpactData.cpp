#include "ImpactData.h"

UImpactData::UImpactData() {
    this->ParentImpact = NULL;
    this->Usage = EImpactUsage::Default;
    this->bOverrideParentUnconditionalResponse = true;
    this->bOverrideParentDefaultResponse = true;
    this->DefaultImpactWwiseEvent = NULL;
    this->LayeredPhysicalResponseQuality = 0;
    this->LayeredParentPhysicalResponseQuality = 0;
    this->bOverrideParentProximityThrottling = false;
    this->bEnableProximityThrottling = false;
    this->FrameLimit = 0;
    this->bUseMassWwiseParameter = false;
}

