#include "GFxCSWhatsThisMenu.h"

void UGFxCSWhatsThisMenu::OnMovieMediaOpenFailed(const FString& FailedUrl) const {
}

void UGFxCSWhatsThisMenu::OnMovieMediaOpened() const {
}

void UGFxCSWhatsThisMenu::OnMovieEndReached() const {
}

UGFxCSWhatsThisMenu::UGFxCSWhatsThisMenu() {
    this->MovieSequencer = NULL;
    this->MediaMaterial = NULL;
    this->MaterialName = TEXT("Material");
    this->FadeName = TEXT("MaskDensity");
    this->ParticleSystemName = TEXT("CS");
    this->ScreenParticle = NULL;
    this->ParticleDepth = 50.00f;
    this->FadeTime = 3.00f;
    this->StartAudioSetupForMovieEvent = NULL;
    this->StopAudioSetupForMovieEvent = NULL;
    this->ScreenParticleManagerComponent = NULL;
    this->MovieSequencePlayer = NULL;
    this->MovieSequenceActor = NULL;
}

