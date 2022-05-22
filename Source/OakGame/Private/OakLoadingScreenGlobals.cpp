#include "OakLoadingScreenGlobals.h"

UOakLoadingScreenGlobals::UOakLoadingScreenGlobals() {
    this->CameraDistance = 1000.00f;
    this->FOVAngle = 23.00f;
    this->BackgroundDistance = 1000.00f;
    this->TooltipSize = 24;
    this->TooltipDistanceFromEdge = 0.10f;
    this->TooltipDuration = 5.00f;
    this->bAppendGearUpModeTooltipsInsteadOfReplacing = false;
    this->GearUpModeTooltipWeight = 100.00f;
    this->VoiceTextSize = 24;
    this->VoiceWidthMarginPercentage = 0.04f;
    this->VoiceHeightPositionPercentage = 0.60f;
    this->SubtitlesSize = 24;
    this->SubtitlesDistanceFromEdge = 0.10f;
    this->HideLoadingScreenDelay = 0.50f;
}

