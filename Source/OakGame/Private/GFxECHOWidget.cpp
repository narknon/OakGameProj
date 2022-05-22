#include "GFxECHOWidget.h"

class UCharacterEchoData;
class UPerformanceEchoData;

void UGFxECHOWidget::OnMediaMovieStopped() const {
}

void UGFxECHOWidget::OnMediaMovieStarted() const {
}

void UGFxECHOWidget::OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho) const {
}

void UGFxECHOWidget::OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) const {
}

UGFxECHOWidget::UGFxECHOWidget() {
    this->GFxKEY_SpeakerImage = TEXT("speakerImageContainer");
    this->SpeakerImage = NULL;
    this->GFxKEY_PassiveAnimation = TEXT("passiveAnim");
    this->GFxKEY_SpeakerName = TEXT("speakerText");
    this->AssociatedPerformanceMode = EEchoPerformanceMode::EchoCommunication;
    this->CurrentlyDisplayedMovie = NULL;
    this->CurrentState = EECHOWidgetState::Inactive;
    this->CachedSpeakerImage = NULL;
    this->MediaPlayer = NULL;
    this->bEchoIsPlaying = false;
    this->bMediaIsPlaying = false;
    this->bCloseMediaWhenEchoEnds = false;
    this->EchoWidgetBase = NULL;
    this->EchoStringID = TEXT("echoContainer");
}

