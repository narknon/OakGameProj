#include "WwiseGameplayStatics.h"

class UWwiseListenerEnvironmentalEffect;
class USceneComponent;
class UObject;
class UWwiseBank;
class UWwiseAudioInputEvent;
class AActor;
class UWwiseAudioComponent;
class UWwiseState;
class UWwiseRtpc;
class UWwiseEvent;
class UWwiseAuxBus;
class UWwiseZoneAudioEffect;
class UWwiseAudioEffect;

void UWwiseGameplayStatics::WaitForAudioPlayback(FWwisePlaybackInstance PlaybackInstance, FLatentActionInfo LatentInfo) {
}

void UWwiseGameplayStatics::WaitForAudioInputConnection(UObject* WorldContextObject, UWwiseAudioInputEvent* AudioInputEvent, FLatentActionInfo LatentInfo, float MaxWaitTime) {
}

void UWwiseGameplayStatics::UnloadBank(UWwiseBank* Bank) {
}

void UWwiseGameplayStatics::StopProfilerCapture() {
}

void UWwiseGameplayStatics::StopOutputCapture() {
}

void UWwiseGameplayStatics::StopAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve) {
}

void UWwiseGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UWwiseGameplayStatics::StartOutputCapture(const FString& Filename) {
}

UWwiseAudioComponent* UWwiseGameplayStatics::SpawnWwiseComponentAtLocation(const UObject* WorldContextObject, FVector Location, float EmitterRadius, FRotator Orientation, bool IsTemporaryComponent) {
    return NULL;
}

UWwiseAudioComponent* UWwiseGameplayStatics::SpawnAttachedWwiseComponent(AActor* Actor, FName SocketName, bool IsTemporaryComponent, USceneComponent* AttachmentComponent) {
    return NULL;
}

void UWwiseGameplayStatics::SetGlobalState(UWwiseState* State) {
}

void UWwiseGameplayStatics::SetGlobalRTPCValue(UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve) {
}

void UWwiseGameplayStatics::SetAudioPlaybackPosition(FWwisePlaybackInstance PlaybackInstance, float PlaybackPosition) {
}

void UWwiseGameplayStatics::ResumeAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve) {
}

FWwisePlaybackInstance UWwiseGameplayStatics::PostEventAtMultipleLocations(UObject* WorldContextObject, UWwiseEvent* WwiseEvent, const TArray<FWwiseLocationOverride>& NewLocations, EWwiseMultiPositionType MultiPositionType) {
    return FWwisePlaybackInstance{};
}

FWwisePlaybackInstance UWwiseGameplayStatics::PostEventAtLocation(UObject* WorldContextObject, UWwiseEvent* WwiseEvent, FVector Location, float EmitterRadius, FRotator Orientation) {
    return FWwisePlaybackInstance{};
}

FWwisePlaybackInstance UWwiseGameplayStatics::PostAttachedEvent(UWwiseEvent* WwiseEvent, AActor* AttachToActor, USceneComponent* AttachToComponent, FName SocketName, float EmitterRadius) {
    return FWwisePlaybackInstance{};
}

void UWwiseGameplayStatics::PauseAudio(FWwisePlaybackInstance PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve) {
}

void UWwiseGameplayStatics::LoadBank(UWwiseBank* Bank) {
}

bool UWwiseGameplayStatics::IsPossiblyAudible(UObject* WorldContextObject, UWwiseEvent* inWwiseEvent, FVector Location, float AttenuationScale, float EmitterRadius) {
    return false;
}

bool UWwiseGameplayStatics::IsAudioPlaying(const FWwisePlaybackInstance& PlaybackInstance) {
    return false;
}

bool UWwiseGameplayStatics::IsAudioPaused(const FWwisePlaybackInstance& PlaybackInstance) {
    return false;
}

void UWwiseGameplayStatics::GetWwiseBankEfficiencyReport(TArray<FWwiseBankEfficiencyReportDatum>& ReportData) {
}

UWwiseEvent* UWwiseGameplayStatics::GetPlayingEvent(const FWwisePlaybackInstance& PlaybackInstance) {
    return NULL;
}

float UWwiseGameplayStatics::GetEstimatedAudioDuration(const FWwisePlaybackInstance& PlaybackInstance) {
    return 0.0f;
}

UWwiseAudioComponent* UWwiseGameplayStatics::GetDefaultWwiseComponent(AActor* Actor, bool bCreateIfNotFound) {
    return NULL;
}

void UWwiseGameplayStatics::GetClosestListenerLocation(UObject* WorldContextObject, FVector TestPosition, FVector& ClosestLocation, bool& bSuccess) {
}

float UWwiseGameplayStatics::GetAudioPlaybackPosition(const FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime) {
    return 0.0f;
}

UWwiseAudioComponent* UWwiseGameplayStatics::GetAudioComponentFromPlaybackInstance(const FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound) {
    return NULL;
}

void UWwiseGameplayStatics::ExecuteActionOnAudioInstance(FWwisePlaybackInstance PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve) {
}

UWwiseZoneAudioEffect* UWwiseGameplayStatics::CreateZoneAudioEffect(UObject* WorldContextObject, UWwiseAuxBus* AuxBus, FVector EffectLocation, float EffectSize, float EffectAttenuationDistance) {
    return NULL;
}

UWwiseListenerEnvironmentalEffect* UWwiseGameplayStatics::CreateListenerAudioEffect(UWwiseAuxBus* AuxBus, AActor* TargetActor, float WetAmount) {
    return NULL;
}

UWwiseAudioEffect* UWwiseGameplayStatics::CreateAudioEffect(UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, AActor* TargetActor) {
    return NULL;
}

TArray<FWwiseLocationOverride> UWwiseGameplayStatics::ConvertLocationsToWwiseLocationOverrides(const TArray<FVector>& Locations, FRotator Orientation, float Gain, float Radius) {
    return TArray<FWwiseLocationOverride>();
}

void UWwiseGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

UWwiseGameplayStatics::UWwiseGameplayStatics() {
}

