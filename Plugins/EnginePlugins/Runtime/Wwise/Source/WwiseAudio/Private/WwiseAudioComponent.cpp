#include "WwiseAudioComponent.h"

class UWwiseEvent;
class UWwiseSwitch;
class UWwiseRtpc;
class UWwiseTrigger;

void UWwiseAudioComponent::StopManagedLoop(UWwiseEvent* OptionalStopEvent) {
}

void UWwiseAudioComponent::StopAll() {
}

void UWwiseAudioComponent::StartManagedLoop(UWwiseEvent* NewLoopEvent) {
}

void UWwiseAudioComponent::SetSwitch(UWwiseSwitch* WwiseSwitch) {
}

void UWwiseAudioComponent::SetRTPCValue(UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve) {
}

void UWwiseAudioComponent::SetEmitterLocations(const TArray<FWwiseLocationOverride>& NewLocations, EWwiseMultiPositionType NewMultiPositionType, bool bLocationsAreRelative) {
}

void UWwiseAudioComponent::ScaleToRadius(float Radius) {
}

void UWwiseAudioComponent::ScaleAttenuation(float ScalingFactor) {
}

void UWwiseAudioComponent::RegisterRtpcValueCallback(TArray<UWwiseRtpc*> CallbackRtpcs) {
}

FWwisePlaybackInstance UWwiseAudioComponent::PostWwiseEvent(UWwiseEvent* WwiseEvent, int32 Flags) {
    return FWwisePlaybackInstance{};
}

void UWwiseAudioComponent::PostTrigger(UWwiseTrigger* Trigger) {
}

void UWwiseAudioComponent::MakeMidiNote(int32 NoteNum, int32 Velocity, int32 Channel, float Duration, float StartTime, UWwiseEvent* AssociatedEvent) {
}

void UWwiseAudioComponent::Jettison() {
}

bool UWwiseAudioComponent::IsPossiblyAudible(UWwiseEvent* WwiseEvent, float EventAttenuationScale) {
    return false;
}

bool UWwiseAudioComponent::IsPlaying() const {
    return false;
}

float UWwiseAudioComponent::GetRtpcValue(UWwiseRtpc* RTPC) {
    return 0.0f;
}

float UWwiseAudioComponent::GetRadius() const {
    return 0.0f;
}

TArray<FWwisePlaybackInstance> UWwiseAudioComponent::GetPlayingInstances() {
    return TArray<FWwisePlaybackInstance>();
}

float UWwiseAudioComponent::GetMaxAttenuationRadius() const {
    return 0.0f;
}

UWwiseAudioComponent::UWwiseAudioComponent() {
    this->OnAttachEvent = NULL;
    this->OptionalBodySwitchStopEvent = NULL;
    this->WwiseComponentType = EWwiseAudioComponentType::Standard;
    this->EmitterGain = 1.00f;
    this->bOverrideLocationsAreRelative = true;
    this->WwiseMixBehavior = EWwiseAudioComponentMixBehavior::Standard;
    this->AcousticsMode = EAcousticsMode::Enabled;
    this->ReverbBoost = 0.00f;
    this->MultiPositionType = EWwiseMultiPositionType::MultiDirections;
}

