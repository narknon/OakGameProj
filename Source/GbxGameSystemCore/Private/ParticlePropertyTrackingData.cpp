#include "ParticlePropertyTrackingData.h"

UParticlePropertyTrackingData::UParticlePropertyTrackingData() {
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->bStopTrackingWhenMinReached = false;
    this->bStopTrackingWhenMaxReached = false;
    this->bStopTrackingWhenPrimaryCharacterIsDeadOrNone = false;
    this->bDestroyParticleWhenTrackingStopped = false;
    this->bChangeValueOverTime = false;
    this->ValueChangePerSecond = 0.00f;
    this->bPauseChangeOnUpdate = false;
    this->PauseDuration = 0.00f;
}

