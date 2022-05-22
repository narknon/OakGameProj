#include "DistributedAmbientSound.h"

void ADistributedAmbientSound::DoUpdateTree() {
}

void ADistributedAmbientSound::DoFindNewLocationsAndRebuild() {
}

ADistributedAmbientSound::ADistributedAmbientSound() {
    this->SoundMode = EDistributedSoundMode::Point;
    this->LocationFinder = NULL;
    this->bTreatLocationsAsOneSource = false;
    this->MultiPositionType = EWwiseMultiPositionType::MultiDirections;
    this->DOffset = 0.00f;
    this->DScale = 1.00f;
    this->MaxEmitterSize = 100.00f;
    this->CombinedSourceVolumeRatio = 0.10f;
    this->bUseUnconditionalSampleModeForAcoustics = true;
}

