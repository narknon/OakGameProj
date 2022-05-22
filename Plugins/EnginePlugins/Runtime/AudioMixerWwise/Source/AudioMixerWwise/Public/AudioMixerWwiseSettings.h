#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AudioMixerWwiseSettings.generated.h"

UCLASS(DefaultConfig)
class UAudioMixerWwiseSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath PassthroughEvent;
    
    UAudioMixerWwiseSettings();
};

