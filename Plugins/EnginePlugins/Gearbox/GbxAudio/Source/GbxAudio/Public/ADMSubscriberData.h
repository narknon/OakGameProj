#pragma once
#include "CoreMinimal.h"
#include "ADMSubscriberData.generated.h"

class UAudioDistanceThresholdSubscriberInterface;
class IAudioDistanceThresholdSubscriberInterface;

USTRUCT(BlueprintType)
struct FADMSubscriberData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IAudioDistanceThresholdSubscriberInterface> Subscriber;
    
    GBXAUDIO_API FADMSubscriberData();
};

