#pragma once
#include "CoreMinimal.h"
#include "WwisePlaybackInstance.h"
#include "CurrentVocalization.generated.h"

class UCharacterSoundTag;

USTRUCT(BlueprintType)
struct FCurrentVocalization {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCharacterSoundTag* Tag;
    
    UPROPERTY()
    FWwisePlaybackInstance PlayingInstance;
    
    GBXAUDIO_API FCurrentVocalization();
};

