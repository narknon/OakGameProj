#pragma once
#include "CoreMinimal.h"
#include "WwiseGameObjectComponent.h"
#include "EWwiseAudioComponentType.h"
#include "OnNewAudioInstanceStartedDelegate.h"
#include "WwiseLocationOverride.h"
#include "EWwiseAudioComponentMixBehavior.h"
#include "EWwiseCurveInterpolation.h"
#include "EAcousticsMode.h"
#include "OnMusicSyncPointDelegate.h"
#include "OnMusicPlayStartedDelegate.h"
#include "OnMusicBeatDelegate.h"
#include "OnPlaybackEndDelegate.h"
#include "OnRtpcSyncDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EWwiseMultiPositionType.h"
#include "WwisePlaybackInstance.h"
#include "WwiseAudioComponent.generated.h"

class UAudioParametersProviderInterface;
class IAudioParametersProviderInterface;
class UWwiseEvent;
class UAudioPositioningProviderInterface;
class IAudioPositioningProviderInterface;
class UWwiseSwitch;
class UWwiseRtpc;
class UWwiseTrigger;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEAUDIO_API UWwiseAudioComponent : public UWwiseGameObjectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* OnAttachEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* OptionalBodySwitchStopEvent;
    
    UPROPERTY(EditAnywhere)
    EWwiseAudioComponentType WwiseComponentType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float EmitterGain;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TArray<FWwiseLocationOverride> OverrideLocations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bOverrideLocationsAreRelative;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TScriptInterface<IAudioParametersProviderInterface> AudioParametersProvider;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EWwiseAudioComponentMixBehavior WwiseMixBehavior;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAcousticsMode AcousticsMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReverbBoost;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnNewAudioInstanceStarted OnStartedNewAudio;
    
    UPROPERTY(BlueprintAssignable)
    FOnMusicPlayStarted OnMusicPlayStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMusicBeat OnMusicBeat;
    
    UPROPERTY(BlueprintAssignable)
    FOnMusicSyncPoint OnMusicSyncPoint;
    
    UPROPERTY(BlueprintAssignable)
    FOnRtpcSync OnRtpcSync;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlaybackEnd OnPlaybackEnded;
    
    UPROPERTY(Transient)
    TScriptInterface<IAudioPositioningProviderInterface> PositioningProvider;
    
    UPROPERTY(Transient)
    FVector PreviousRotationVector;
    
    UPROPERTY(Transient)
    TMap<uint32, float> RtpcCallbackValues;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EWwiseMultiPositionType MultiPositionType;
    
    UWwiseAudioComponent();
    UFUNCTION(BlueprintCallable)
    void StopManagedLoop(UWwiseEvent* OptionalStopEvent);
    
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    void StartManagedLoop(UWwiseEvent* NewLoopEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(UWwiseSwitch* WwiseSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitterLocations(const TArray<FWwiseLocationOverride>& NewLocations, EWwiseMultiPositionType NewMultiPositionType, bool bLocationsAreRelative);
    
    UFUNCTION(BlueprintCallable)
    void ScaleToRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void ScaleAttenuation(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRtpcValueCallback(TArray<UWwiseRtpc*> CallbackRtpcs);
    
    UFUNCTION(BlueprintCallable)
    FWwisePlaybackInstance PostWwiseEvent(UWwiseEvent* WwiseEvent, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    void PostTrigger(UWwiseTrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void MakeMidiNote(int32 NoteNum, int32 Velocity, int32 Channel, float Duration, float StartTime, UWwiseEvent* AssociatedEvent);
    
    UFUNCTION(BlueprintCallable)
    void Jettison();
    
    UFUNCTION(BlueprintCallable)
    bool IsPossiblyAudible(UWwiseEvent* WwiseEvent, float EventAttenuationScale);
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRtpcValue(UWwiseRtpc* RTPC);
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FWwisePlaybackInstance> GetPlayingInstances();
    
    UFUNCTION(BlueprintPure)
    float GetMaxAttenuationRadius() const;
    
};

