#pragma once
#include "CoreMinimal.h"
#include "LightAudioComponent.h"
#include "WindDirectionalSensitivity.h"
#include "WindAudioLoopComponent.generated.h"

class UWwiseRtpc;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API UWindAudioLoopComponent : public ULightAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* WindSpeedAudioParameter;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* WindAccelerationAudioParameter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FWindDirectionalSensitivity WindSensitivity;
    
    UWindAudioLoopComponent();
};

