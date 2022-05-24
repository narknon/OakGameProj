#include "GbxAudioBlueprintLibrary.h"

class AActor;
class UCharacterSoundTag;
class UPrimitiveComponent;
class UWwiseAuxBus;

void UGbxAudioBlueprintLibrary::TriggerCharacterSound(AActor* Character, const UCharacterSoundTag* SoundTag) {
}

void UGbxAudioBlueprintLibrary::RemoveListenerAudioEffect(AActor* Character, UWwiseAuxBus* Efx) {
}

bool UGbxAudioBlueprintLibrary::PassesAudioPreparationHitFilter(const FHitResult Hit, const FAudioPrepHitResultFilter& Filter) {
    return false;
}

bool UGbxAudioBlueprintLibrary::PassesAudioPreparationComponentFilter(UPrimitiveComponent* Component, const FAudioPrepComponentFilter& Filter) {
    return false;
}

void UGbxAudioBlueprintLibrary::ApplyListenerAudioEffect(AActor* Character, UWwiseAuxBus* Efx, float WetVolume, float DryVolume) {
}

UGbxAudioBlueprintLibrary::UGbxAudioBlueprintLibrary() {
}

