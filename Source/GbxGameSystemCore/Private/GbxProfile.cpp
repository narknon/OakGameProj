#include "GbxProfile.h"

UGbxProfile::UGbxProfile() {
    this->bDisplayVehicleSpeedAsMPH = true;
    this->bEnableAimAssist = true;
    this->bGamepadInvertLook = false;
    this->bGamepadInvertTurn = false;
    this->bGamepadInvertMove = false;
    this->bGamepadInvertStrafe = false;
    this->bEnableMouseAcceleration = false;
    this->bEnableGamepadInput = true;
    this->bUseClassicGamepadInput = false;
    this->bEnableVibration = true;
    this->bEnableTriggerFeedback = true;
    this->GlyphMode = EGbxGlyphSetOption::AutoDetect;
    this->bInvertMousePitch = false;
    this->bEnableMouseSmoothing = true;
    this->MouseScale = 4.00f;
    this->bShowDamageNumbers = true;
    this->bShowDamageNumberIcons = false;
    this->bEnableTrainingMessages = true;
    this->bCenterCrosshair = false;
    this->bToggleSprint = true;
    this->bToggleCrouch = true;
    this->bCensorContent = false;
    this->MasterVolume = 100.00f;
    this->MusicVolume = 100.00f;
    this->SoundEffectsVolume = 100.00f;
    this->VOVolume = 100.00f;
    this->VoiceVolume = 29.00f;
    this->bEnableOptionalVO = true;
    this->bPushToTalk = true;
    this->bEnableControllerAudio = true;
    this->SpeakerAngleFront = 30.00f;
    this->SpeakerAngleSide = 110.00f;
    this->SpeakerAngleBack = 135.00f;
    this->SpeakerSetup = ESpeakerSetup::SmallSpeaker;
    this->bMuteAudioOnFocusLoss = true;
    this->bEnableWindowsSpatialAudio = true;
    this->GraphicsMode = EGraphicsMode::Resolution;
    this->BaseFOV = 90.00f;
    this->BaseVehicleFOV = 90.00f;
    this->bHideStrictNATHelpDialog = false;
    this->HudScaleMultiplier = 1.00f;
    this->bShowTextChat = true;
    this->LastUsedSavegameId = 1;
}

