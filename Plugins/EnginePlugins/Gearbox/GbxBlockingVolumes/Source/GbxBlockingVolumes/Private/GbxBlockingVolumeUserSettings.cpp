#include "GbxBlockingVolumeUserSettings.h"

UGbxBlockingVolumeUserSettings::UGbxBlockingVolumeUserSettings() {
    this->bAlwaysRenderVolumes = false;
    this->bNeverRenderVolumes = false;
    this->BlockingVolumeOpacity = 0.40f;
    this->bInvertColors = false;
}

