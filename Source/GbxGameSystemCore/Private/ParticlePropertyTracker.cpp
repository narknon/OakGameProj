#include "ParticlePropertyTracker.h"

FParticlePropertyTracker::FParticlePropertyTracker() {
    this->TrackingData = NULL;
    this->Template = NULL;
    this->FloatParamValue = 0.00f;
    this->LastUpdateTime = 0.00f;
    this->Material = NULL;
}

