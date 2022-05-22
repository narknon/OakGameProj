#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwisePlaybackInstance.h"
#include "CharacterSoundLoopDetails.h"
#include "CurrentVocalLoopInfo.generated.h"

USTRUCT(BlueprintType)
struct FCurrentVocalLoopInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid LoopID;
    
    UPROPERTY()
    FWwisePlaybackInstance PlayingInstance;
    
    UPROPERTY()
    FCharacterSoundLoopDetails Details;
    
    GBXAUDIO_API FCurrentVocalLoopInfo();
};

