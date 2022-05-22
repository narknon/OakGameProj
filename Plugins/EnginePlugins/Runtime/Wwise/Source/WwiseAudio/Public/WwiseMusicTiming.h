#pragma once
#include "CoreMinimal.h"
#include "WwiseMusicTiming.generated.h"

USTRUCT(BlueprintType)
struct FWwiseMusicTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentPositionInBeats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeatDurationInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarLengthInBeats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SegementLengthInBeats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GridLengthInBeats;
    
    WWISEAUDIO_API FWwiseMusicTiming();
};

