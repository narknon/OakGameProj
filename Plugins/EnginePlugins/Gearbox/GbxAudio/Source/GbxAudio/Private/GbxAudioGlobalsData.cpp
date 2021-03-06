#include "GbxAudioGlobalsData.h"

UGbxAudioGlobalsData::UGbxAudioGlobalsData() {
    this->PauseGameAudioEvent = NULL;
    this->UnpauseGameAudioEvent = NULL;
    this->PreLevelTransitionEvent = NULL;
    this->PostLevelTransitionEvent = NULL;
    this->MasterVolumeParameter = NULL;
    this->UserVolumeMusicParameter = NULL;
    this->UserVolumeSfxParameter = NULL;
    this->UserVolumeVOParameter = NULL;
    this->UserVolumeHdrSfxParameter = NULL;
    this->UserVolumeHdrVOParameter = NULL;
    this->UserVolumeHdrMixRtpc = NULL;
    this->UserPS4ControllerRtpc = NULL;
    this->bEnableAcoustics = true;
    this->OcclusionStrength = 1.00f;
    this->EarlyReflectionsVolumeCurve = NULL;
    this->LateReverbVolumeCurve = NULL;
    this->ReverbBoostOutdoornessModifierCurve = NULL;
    this->ReverbBoostDryGainFraction = 0.75f;
    this->EarlyReflectionsReverbBoostStrength = 0.50f;
    this->LateReverbReverbBoostStrength = 1.00f;
    this->WeaponFireReverbBoost = 6.00f;
    this->ExplosionReverbBoost = 10.00f;
    this->MusicVolumeSliderPreviewSound = NULL;
    this->MusicVolumeSliderPreviewSoundStop = NULL;
    this->SFXVolumeSliderPreviewSound = NULL;
    this->VOVolumeSliderPreviewSound = NULL;
    this->VoiceCommVolumeSliderPreviewSound = NULL;
    this->StartStandardCinematicModeEvent = NULL;
    this->EndStandardCinematicModeEvent = NULL;
    this->StartExclusiveCinematicModeEvent = NULL;
    this->EndExclusiveCinematicModeEvent = NULL;
    this->JumpedVocalizationTag = NULL;
    this->FootstepVolumeRtpc = NULL;
    this->FoleyMainVolumeRtpc = NULL;
    this->FoleyAccessoryVolumeRtpc = NULL;
    this->FootstepPitchRtpc = NULL;
    this->FoleyMainPitchRtpc = NULL;
    this->FoleyAccessoryPitchRtpc = NULL;
    this->FoleyPerspectiveRtpc = NULL;
    this->SurfaceModifierVolumeRtpc = NULL;
    this->HighDetailFoleySwitch = NULL;
    this->LowDetailFoleySwitch = NULL;
    this->FootstepAction = NULL;
    this->HandPlantAction = NULL;
    this->FirstPersonFootstepsForwardOffset = 0.00f;
    this->CharacterRelativeSpeedRtpc = NULL;
    this->CharacterRelativeVerticalAirSpeedRtpc = NULL;
    this->WalkingSlopeRtpc = NULL;
    this->WaterDepthRtpc = NULL;
    this->RelativeWaterDepthRtpc = NULL;
    this->RandomVariationRtpc = NULL;
    this->PerspectiveRtpc = NULL;
    this->ExplosionSizeRtpc = NULL;
    this->PlayerLocationOutdoornessRTPC = NULL;
    this->OutdoornessRTPC = NULL;
}

