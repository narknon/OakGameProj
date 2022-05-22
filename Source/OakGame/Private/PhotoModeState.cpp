#include "PhotoModeState.h"

FPhotoModeState::FPhotoModeState() {
    this->bPhotoModeUIVisible = false;
    this->bHUDVisible = false;
    this->bGamePausedState = false;
    this->bAutoFocusState = false;
    this->Contrast = 0.00f;
    this->DOFIntensity = 0.00f;
    this->FOV = 0.00f;
    this->bFilmToneMapperState = false;
    this->FilterIndex = 0;
    this->FilterIntensity = 0.00f;
    this->FocalDistance = 0.00f;
    this->FocalRegion = 0.00f;
    this->FringeIntensity = 0.00f;
    this->Gain = 0.00f;
    this->Gamma = 0.00f;
    this->GrainIntensity = 0.00f;
    this->bHidePlayerState = false;
    this->Quality = 0.00f;
    this->Saturation = 0.00f;
    this->Shoulder = 0.00f;
    this->Slope = 0.00f;
    this->bSuperSharpModeState = false;
    this->Toe = 0.00f;
    this->ViewRoll = 0.00f;
    this->VignetteIntensity = 0.00f;
    this->VignetteFeathering = 0.00f;
    this->TimeOfDay = 0.00f;
    this->bPausable = false;
    this->bHideDamageNumbersState = false;
    this->bOverrideFocusState = false;
    this->bMatchGameState = false;
}

