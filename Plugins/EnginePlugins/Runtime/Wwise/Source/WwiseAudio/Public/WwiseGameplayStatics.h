#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwisePlaybackInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EWwiseCurveInterpolation.h"
#include "WwiseLocationOverride.h"
#include "UObject/NoExportTypes.h"
#include "EWwiseMultiPositionType.h"
#include "WwiseBankEfficiencyReportDatum.h"
#include "EWwiseEventAction.h"
#include "EWwiseEffectType.h"
#include "WwiseGameplayStatics.generated.h"

class UWwiseListenerEnvironmentalEffect;
class USceneComponent;
class UObject;
class AActor;
class UWwiseAudioComponent;
class UWwiseBank;
class UWwiseAudioInputEvent;
class UWwiseState;
class UWwiseRtpc;
class UWwiseEvent;
class UWwiseAuxBus;
class UWwiseZoneAudioEffect;
class UWwiseAudioEffect;

UCLASS(BlueprintType)
class WWISEAUDIO_API UWwiseGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void WaitForAudioPlayback(FWwisePlaybackInstance PlaybackInstance, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitForAudioInputConnection(UObject* WorldContextObject, UWwiseAudioInputEvent* AudioInputEvent, FLatentActionInfo LatentInfo, float MaxWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBank(UWwiseBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable)
    static void StopAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseAudioComponent* SpawnWwiseComponentAtLocation(const UObject* WorldContextObject, FVector Location, float EmitterRadius, FRotator Orientation, bool IsTemporaryComponent);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseAudioComponent* SpawnAttachedWwiseComponent(AActor* Actor, FName SocketName, bool IsTemporaryComponent, USceneComponent* AttachmentComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalState(UWwiseState* State);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalRTPCValue(UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioPlaybackPosition(FWwisePlaybackInstance PlaybackInstance, float PlaybackPosition);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static FWwisePlaybackInstance PostEventAtMultipleLocations(UObject* WorldContextObject, UWwiseEvent* WwiseEvent, const TArray<FWwiseLocationOverride>& NewLocations, EWwiseMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static FWwisePlaybackInstance PostEventAtLocation(UObject* WorldContextObject, UWwiseEvent* WwiseEvent, FVector Location, float EmitterRadius, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable)
    static FWwisePlaybackInstance PostAttachedEvent(UWwiseEvent* WwiseEvent, AActor* AttachToActor, USceneComponent* AttachToComponent, FName SocketName, float EmitterRadius);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBank(UWwiseBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPossiblyAudible(UObject* WorldContextObject, UWwiseEvent* inWwiseEvent, FVector Location, float AttenuationScale, float EmitterRadius);
    
    UFUNCTION(BlueprintPure)
    static bool IsAudioPlaying(const FWwisePlaybackInstance& PlaybackInstance);
    
    UFUNCTION(BlueprintPure)
    static bool IsAudioPaused(const FWwisePlaybackInstance& PlaybackInstance);
    
    UFUNCTION(BlueprintCallable)
    static void GetWwiseBankEfficiencyReport(TArray<FWwiseBankEfficiencyReportDatum>& ReportData);
    
    UFUNCTION(BlueprintPure)
    static UWwiseEvent* GetPlayingEvent(const FWwisePlaybackInstance& PlaybackInstance);
    
    UFUNCTION(BlueprintPure)
    static float GetEstimatedAudioDuration(const FWwisePlaybackInstance& PlaybackInstance);
    
    UFUNCTION(BlueprintPure)
    static UWwiseAudioComponent* GetDefaultWwiseComponent(AActor* Actor, bool bCreateIfNotFound);
    
    UFUNCTION(BlueprintPure)
    static void GetClosestListenerLocation(UObject* WorldContextObject, FVector TestPosition, FVector& ClosestLocation, bool& bSuccess);
    
    UFUNCTION(BlueprintPure)
    static float GetAudioPlaybackPosition(const FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime);
    
    UFUNCTION(BlueprintPure)
    static UWwiseAudioComponent* GetAudioComponentFromPlaybackInstance(const FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteActionOnAudioInstance(FWwisePlaybackInstance PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseZoneAudioEffect* CreateZoneAudioEffect(UObject* WorldContextObject, UWwiseAuxBus* AuxBus, FVector EffectLocation, float EffectSize, float EffectAttenuationDistance);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseListenerEnvironmentalEffect* CreateListenerAudioEffect(UWwiseAuxBus* AuxBus, AActor* TargetActor, float WetAmount);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseAudioEffect* CreateAudioEffect(UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FWwiseLocationOverride> ConvertLocationsToWwiseLocationOverrides(const TArray<FVector>& Locations, FRotator Orientation, float Gain, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
};

