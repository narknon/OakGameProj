#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioPrepComponentFilter.h"
#include "Engine/EngineTypes.h"
#include "AudioPrepHitResultFilter.h"
#include "GbxAudioBlueprintLibrary.generated.h"

class UWwiseAuxBus;
class UCharacterSoundTag;
class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class GBXAUDIO_API UGbxAudioBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxAudioBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void TriggerCharacterSound(AActor* Character, const UCharacterSoundTag* SoundTag);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveListenerAudioEffect(AActor* Character, UWwiseAuxBus* Efx);
    
    UFUNCTION(BlueprintPure)
    static bool PassesAudioPreparationHitFilter(const FHitResult Hit, const FAudioPrepHitResultFilter& Filter);
    
    UFUNCTION(BlueprintPure)
    static bool PassesAudioPreparationComponentFilter(UPrimitiveComponent* Component, const FAudioPrepComponentFilter& Filter);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyListenerAudioEffect(AActor* Character, UWwiseAuxBus* Efx, float WetVolume, float DryVolume);
    
};

