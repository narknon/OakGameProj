#include "GFxEchologWidgetBase.h"

class UCharacterEchoData;
class UPerformanceEchoData;

void UGFxEchologWidgetBase::OnMediaMovieStopped() {
}

void UGFxEchologWidgetBase::OnMediaMovieStarted() {
}

void UGFxEchologWidgetBase::OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEchoLog) {
}

void UGFxEchologWidgetBase::OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) {
}

UGFxEchologWidgetBase::UGFxEchologWidgetBase() {
    this->GFxKEY_SpeakerImage = TEXT("speakerImage.speakerImageContainer");
    this->SkinWrapper = NULL;
    this->SpeakerImage = NULL;
    this->GFxKEY_PassiveAnimation = TEXT("passiveAnim");
    this->GFxKEY_SpeakerName = TEXT("speakerText");
    this->AssociatedPerformanceMode = EEchoPerformanceMode::EchoCommunication;
    this->CurrentlyDisplayedMovie = NULL;
    this->bEchoIsPlaying = false;
    this->CurrentState = EECHOLOGWidgetState::Inactive;
    this->CachedSpeakerImage = NULL;
    this->MediaPlayer = NULL;
    this->bMediaIsPlaying = false;
    this->bCloseMediaWhenEchoEnds = false;
    this->bEchoIsShown = false;
}

