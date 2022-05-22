#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADMSubscriberData.h"
#include "AudioDistanceThresholdManager.generated.h"

class UWorld;

UCLASS()
class GBXAUDIO_API UAudioDistanceThresholdManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(Transient)
    TArray<FADMSubscriberData> SubscriberData;
    
    UAudioDistanceThresholdManager();
};

