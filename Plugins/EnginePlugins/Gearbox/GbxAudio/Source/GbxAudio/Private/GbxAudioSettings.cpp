#include "GbxAudioSettings.h"

UGbxAudioSettings::UGbxAudioSettings() {
    this->FoleyCullingDistanceFraction = 0.80f;
    this->FoleyCullingDistanceMinVolumeForReduction = -12.00f;
    this->FoleyCullingDistanceReductionFractionPerDBOverMin = 0.90f;
    this->SkipCinematicEvents.AddDefaulted(1);
}

