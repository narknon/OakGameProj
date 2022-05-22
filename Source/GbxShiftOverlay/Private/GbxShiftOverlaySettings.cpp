#include "GbxShiftOverlaySettings.h"

UGbxShiftOverlaySettings::UGbxShiftOverlaySettings() {
    this->ZOrder = 5000;
    this->bAutoBlockOnMapLoad = true;
    this->bAutoBlockOnMovie = true;
    this->bAutoBlockOnCinematic = false;
    this->bAutoBlockOnAppFocus = false;
    this->NotificationPadding = 99;
    this->NotificationSizeX = 502.00f;
    this->NotificationSizeY = 247.00f;
    this->OverlayVirtualResX = 1920;
    this->OverlayVirtualResY = 1080;
    this->InputModeThreshold_Cursor = 1.00f;
    this->InputModeThreshold_Analog = 0.10f;
}

