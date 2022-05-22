#include "OakCinematicBrain.h"
#include "Net/UnrealNetwork.h"

class UOakCinematicTag;
class UMediaSource;

void AOakCinematicBrain::PlayCinematic(UOakCinematicTag* CinematicTag) {
}

void AOakCinematicBrain::OnSequenceStop() {
}

void AOakCinematicBrain::OnRep_CinematicState() {
}

void AOakCinematicBrain::OnMovieMediaOpenFailed(const FString& DeviceUrl) {
}

void AOakCinematicBrain::OnMovieMediaOpened(const FString& DeviceUrl) {
}

void AOakCinematicBrain::OnMovieMediaClosed() {
}

void AOakCinematicBrain::OnMovieEndReached() {
}

void AOakCinematicBrain::OnMovieEndDelayed() {
}

void AOakCinematicBrain::OnMediaAssetLoaded(UMediaSource* MovieSource) {
}

void AOakCinematicBrain::OnIntroComplete() {
}

void AOakCinematicBrain::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakCinematicBrain, CinematicData);
    DOREPLIFETIME(AOakCinematicBrain, CinematicState);
}

AOakCinematicBrain::AOakCinematicBrain() {
    this->CinematicData = NULL;
    this->SequencePlayer = NULL;
    this->MovieTexture = NULL;
    this->MovieAudioSinkProvider = NULL;
    this->MoviePlayer = NULL;
}

