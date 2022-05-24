#pragma once
#include "CoreMinimal.h"
#include "GbxAudioGlobalsData.h"
#include "UObject/NoExportTypes.h"
#include "OakAudioGlobalsData.generated.h"

class UWwiseSwitch;
class UOakElementalEffectData;
class UWwiseEvent;
class UGbxCondition;
class UWwiseRtpc;
class UOakStatusEffectPresentationData;

UCLASS()
class OAKGAME_API UOakAudioGlobalsData : public UGbxAudioGlobalsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* FakePauseGameAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopAllOnQuitEvent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* TiredCondition;
    
protected:
    UPROPERTY(EditAnywhere)
    UOakElementalEffectData* FireElementalEffect;
    
    UPROPERTY(EditAnywhere)
    UOakElementalEffectData* CorrosiveElementalEffect;
    
    UPROPERTY(EditAnywhere)
    UOakElementalEffectData* ShockElementalEffect;
    
    UPROPERTY(EditAnywhere)
    UOakElementalEffectData* RadiationElementalEffect;
    
    UPROPERTY(EditAnywhere)
    UOakStatusEffectPresentationData* CryoPresentation;
    
public:
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* IncendiarySwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* CorrosiveSwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* ShockSwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* RadiationSwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* CryoSwitch;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PlayerLocationWindRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FireRateInSeconds;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* FireRateRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponChargeRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponHeatRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponJankinessRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponIsFiring;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponAmmoCount;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponAccuracySpreadInDegrees;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponZoom;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponRandomVariation;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponTargetLocked;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponConditionRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WeaponItemScore;
    
    UPROPERTY(EditAnywhere)
    float HighResolutionFireRate;
    
    UPROPERTY(EditAnywhere)
    TArray<UWwiseSwitch*> SwitchesToAlwaysPrepare;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* GoreAudioScaleRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PuddleTransitionRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PuddleScaleRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* PuddleOpacityRTPC;
    
    UPROPERTY(EditAnywhere)
    FName VehicleEngineAudioComponentTag;
    
    UPROPERTY(EditAnywhere)
    float MinDelayBetweenJumpAudioEvents;
    
    UPROPERTY(EditAnywhere)
    float EngineAttenuationScalingMinValue;
    
    UPROPERTY(EditAnywhere)
    float EngineAttenuationScalingRefRPMRatio;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* VehicleHealthRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* VehicleIsLocallyControlledRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* EngineRpmRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ThrottleRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* MovementDirectionRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HandbrakeRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* CameraRotationRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* VehicleApproachSpeedRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* TimeSpentInAirRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ForwardSpeedRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HoveringInputRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* SuspensionCompressionRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WheelSuspensionCompressionSpeedRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* EngineGearRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* EngineGearIsShifingUpRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WheelIsAirborneRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WheelSkidAmountRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* BoostPoolRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* OverspinRTPC;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WheelSpinRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VehicleAirborneStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VehicleAirborneStopEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VehicleHoverStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* VehicleHoverStopEvent;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerPrimaryTextColor;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerErrorTextColor;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerInfoTextColor;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerActiveThreatTextColor;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerStaleThreatTextColor;
    
    UPROPERTY(EditAnywhere)
    FColor MusicDebuggerInterestModifierTextColor;
    
    UPROPERTY(EditAnywhere)
    float MinimumLootBeamSoundInterval;
    
    UOakAudioGlobalsData();
};

