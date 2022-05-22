#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioEventTrackKey.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FWwiseAudioEventTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UWwiseEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString EventName;
    
    WWISEAUDIO_API FWwiseAudioEventTrackKey();
};

