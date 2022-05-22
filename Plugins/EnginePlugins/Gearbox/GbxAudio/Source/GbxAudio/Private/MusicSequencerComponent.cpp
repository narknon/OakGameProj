#include "MusicSequencerComponent.h"

class UWwiseAudioComponent;
class UWwiseEvent;

void UMusicSequencerComponent::StopSequence() {
}

void UMusicSequencerComponent::PostSequenceEvent(UWwiseAudioComponent* WwiseComponent, UWwiseEvent* WwiseEvent, int32 Note, int32 Velocity, int32 Channel, float StartBeat, float Duration) {
}

void UMusicSequencerComponent::PlaySequence() {
}

void UMusicSequencerComponent::PauseSequence() {
}

bool UMusicSequencerComponent::IsPlaying() {
    return false;
}

float UMusicSequencerComponent::GetRealTimeUntilBeat(float Beat) {
    return 0.0f;
}

float UMusicSequencerComponent::GetCurrentBeat() {
    return 0.0f;
}

UMusicSequencerComponent::UMusicSequencerComponent() {
    this->BPM = 60.00f;
    this->SequencerLatencyInSeconds = 0.05f;
    this->bKillLateEvents = true;
    this->bRegisteredWithAudioDevice = false;
}

