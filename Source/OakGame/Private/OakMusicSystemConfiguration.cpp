#include "OakMusicSystemConfiguration.h"

UOakMusicSystemConfiguration::UOakMusicSystemConfiguration() {
    this->ThreatLevelRtpc = NULL;
    this->InterestLevelRtpc = NULL;
    this->ParamSmoothingAttackCoeff = 0.80f;
    this->ParamSmoothingDecayCoeff = 0.80f;
    this->ThreatSummingDistance = 6000.00f;
    this->StaleThreatDuration = 20.00f;
    this->MaxInactiveDuration = 120.00f;
    this->InterestLevelLFODurationInSeconds = 30.00f;
    this->InterestLevelLFOAmplitude = 0.50f;
}

