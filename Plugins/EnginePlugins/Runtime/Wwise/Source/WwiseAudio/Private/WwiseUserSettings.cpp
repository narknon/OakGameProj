#include "WwiseUserSettings.h"

UWwiseUserSettings::UWwiseUserSettings() {
    this->SpriteSize = EWwiseAudioComponentSpriteSize::Small;
    this->bShowWwiseAudioComponents = false;
    this->WwiseDebugFlags = 0;
    this->SelectionLineThickness = 5.00f;
    this->bDrawAudioThresholdManagerDebug = false;
}

