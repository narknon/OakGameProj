#include "OakVoiceOfGodComponent.h"

class UCharacterEchoData;
class UPerformanceEchoData;

void UOakVoiceOfGodComponent::OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho) {
}

void UOakVoiceOfGodComponent::OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) {
}

UOakVoiceOfGodComponent::UOakVoiceOfGodComponent() {
    this->VoGTextureParamName = TEXT("Texture");
    this->VoGSpeakerParamName = TEXT("VoGSpeaker");
    this->VoGFadeName = TEXT("Mask Density");
    this->VoGMaterialName = TEXT("Material");
    this->MaxFadeTime = 2.00f;
    this->ParticleDepth = 105.00f;
    this->LilithMaterial = NULL;
    this->TannisMaterial = NULL;
    this->ScreenParticle = NULL;
    this->MediaData = NULL;
    this->MediaPlayer = NULL;
    this->ScreenParticleManagerComponent = NULL;
    this->LilithMaterialInstanceDynamic = NULL;
    this->TannisMaterialInstanceDynamic = NULL;
}

