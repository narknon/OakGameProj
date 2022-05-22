#pragma once
#include "CoreMinimal.h"
#include "WwiseAmbSoundCheckpointRecord.generated.h"

USTRUCT()
struct FWwiseAmbSoundCheckpointRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCurrentlyPlaying;
    
    WWISEAUDIO_API FWwiseAmbSoundCheckpointRecord();
};

