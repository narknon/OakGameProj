#include "OakMusicProvider.h"
#include "WwiseAudioComponent.h"

class UObject;
class UOakMusicData;
class AOakInventoryItemPickup;
class AOakMusicProvider;

void AOakMusicProvider::StopMusic() {
}

void AOakMusicProvider::SetInterestLevel(float NewInterestLevel) {
}

void AOakMusicProvider::SetCombatLevel(float NewCombatLevel) {
}

void AOakMusicProvider::PlayMusic(UOakMusicData* MusicData) {
}

void AOakMusicProvider::OnMusicBeat(FWwiseMusicTiming& MusicTiming) {
}

void AOakMusicProvider::NotifyMapAreaDiscovered() {
}

void AOakMusicProvider::NotifyItemSpotted(AOakInventoryItemPickup* InventoryItemPickup) {
}

void AOakMusicProvider::NotifyCombatIntensifies() {
}

FString AOakMusicProvider::GetSectionName() {
    return TEXT("");
}

FString AOakMusicProvider::GetPartName() {
    return TEXT("");
}

AOakMusicProvider* AOakMusicProvider::GetOakMusicProvider(UObject* WorldContextObject) {
    return NULL;
}

FString AOakMusicProvider::GetLayerList() {
    return TEXT("");
}

float AOakMusicProvider::GetInterestLevel() const {
    return 0.0f;
}

float AOakMusicProvider::GetCurrentBeatDurationInSeconds() {
    return 0.0f;
}

float AOakMusicProvider::GetCombatLevel() const {
    return 0.0f;
}

float AOakMusicProvider::GetAudioTimeOfNextBeat() {
    return 0.0f;
}

float AOakMusicProvider::GetAudioTimeOfNextBar() {
    return 0.0f;
}

void AOakMusicProvider::ApplyInterestModifier(float ModifierAmount, float ModifierDuration) {
}

AOakMusicProvider::AOakMusicProvider() {
    this->MusicAudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("MusicWwiseComponent"));
    this->CurrentThreatLevel = 0.00f;
    this->CurrentInterestLevel = 0.00f;
    this->AssociatedMusicData = NULL;
    this->AmbientMusicPerformer = NULL;
    this->bManualMode = false;
    this->bForceLegacyCompatibility = false;
    this->ArtificialMinimumThreat = 0.00f;
}

