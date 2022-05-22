#include "OakWorldAudioProvider.h"

class UWwiseAuxBus;

void AOakWorldAudioProvider::PushEffect(UWwiseAuxBus* Efx) {
}

void AOakWorldAudioProvider::PopEffect(UWwiseAuxBus* Efx) {
}

AOakWorldAudioProvider::AOakWorldAudioProvider() {
    this->GlobalEfx = NULL;
    this->WetPercent = 0.50f;
    this->WetPercentMin = 0.10f;
    this->ReverbScaleDistance = 5000.00f;
    this->ReverbTransitionTime = 1.00f;
    this->OutdoornessOcclusionStrengthCurve = NULL;
    this->OutdoornessDistanceReverbFactorCurve = NULL;
    this->ReverbOverDistanceShapeCurve = NULL;
    this->ReverbOverDistanceMaxRange = 5000.00f;
    this->GlobalWetnessScaleDB = -15.00f;
    this->InteriorShort = NULL;
    this->InteriorShortDuration = 1.00f;
    this->InteriorShortWetnessScaleDB = 0.00f;
    this->InteriorLong = NULL;
    this->InteriorLongDuration = 3.00f;
    this->InteriorLongWetnessScaleDB = 0.00f;
    this->OutdoorShort = NULL;
    this->OutdoorShortDuration = 1.00f;
    this->OutdoorShortWetnessScaleDB = 0.00f;
    this->OutdoorLong = NULL;
    this->OutdoorLongDuration = 3.00f;
    this->OutdoorLongWetnessScaleDB = 0.00f;
    this->CachedAudioGlobals = NULL;
}

