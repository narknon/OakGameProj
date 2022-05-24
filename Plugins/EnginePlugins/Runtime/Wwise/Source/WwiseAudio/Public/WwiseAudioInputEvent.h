#pragma once
#include "CoreMinimal.h"
#include "WwiseEvent.h"
#include "WwisePlaybackInstance.h"
#include "WwiseAudioInputEvent.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseAudioInputEvent : public UWwiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* BaseWwiseEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverflowProtectionLimitInFrames;
    
private:
    UPROPERTY(Transient)
    uint64 ConnectedSourceID;
    
    UPROPERTY(Transient)
    TArray<FWwisePlaybackInstance> PlayingInstances;
    
public:
    UWwiseAudioInputEvent();
};

