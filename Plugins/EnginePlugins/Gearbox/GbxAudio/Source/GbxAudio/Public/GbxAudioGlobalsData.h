#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxDataAsset.h"
#include "GbxAudioGlobalsData.generated.h"

class UWwiseRtpc;
class UWwiseEvent;
class UWwiseSwitch;
class UCharacterSoundTag;
class UWwiseBank;
class UCurveFloat;

UCLASS()
class GBXAUDIO_API UGbxAudioGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PauseGameAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* UnpauseGameAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PreLevelTransitionEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PostLevelTransitionEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* MasterVolumeParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeMusicParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeSfxParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeVOParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeHdrSfxParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeHdrVOParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserVolumeHdrMixRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* UserPS4ControllerRtpc;
    
    UPROPERTY(EditAnywhere)
    TArray<UWwiseBank*> AlwaysLoadedBanks;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAcoustics;
    
    UPROPERTY(EditAnywhere)
    float OcclusionStrength;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval RedirectionVolumeInterval;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* EarlyReflectionsVolumeCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LateReverbVolumeCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ReverbBoostOutdoornessModifierCurve;
    
    UPROPERTY(EditAnywhere)
    float ReverbBoostDryGainFraction;
    
    UPROPERTY(EditAnywhere)
    float EarlyReflectionsReverbBoostStrength;
    
    UPROPERTY(EditAnywhere)
    float LateReverbReverbBoostStrength;
    
    UPROPERTY(EditAnywhere)
    float WeaponFireReverbBoost;
    
    UPROPERTY(EditAnywhere)
    float ExplosionReverbBoost;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* MusicVolumeSliderPreviewSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* MusicVolumeSliderPreviewSoundStop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* SFXVolumeSliderPreviewSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VOVolumeSliderPreviewSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VoiceCommVolumeSliderPreviewSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartStandardCinematicModeEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* EndStandardCinematicModeEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartExclusiveCinematicModeEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* EndExclusiveCinematicModeEvent;
    
    UPROPERTY(EditAnywhere)
    UCharacterSoundTag* JumpedVocalizationTag;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FootstepVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FoleyMainVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FoleyAccessoryVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FootstepPitchRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FoleyMainPitchRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FoleyAccessoryPitchRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FoleyPerspectiveRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* SurfaceModifierVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* HighDetailFoleySwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* LowDetailFoleySwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* FootstepAction;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* HandPlantAction;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonFootstepsForwardOffset;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* CharacterRelativeSpeedRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* CharacterRelativeVerticalAirSpeedRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WalkingSlopeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WaterDepthRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* RelativeWaterDepthRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* RandomVariationRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PerspectiveRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ExplosionSizeRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PlayerLocationOutdoornessRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* OutdoornessRTPC;
    
    UGbxAudioGlobalsData();
};

