#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioEffect.h"
#include "WwiseEnvironmentalEffectProvider.h"
#include "WwiseListenerEnvironmentalEffect.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseListenerEnvironmentalEffect : public UWwiseAudioEffect, public IWwiseEnvironmentalEffectProvider {
    GENERATED_BODY()
public:
    UWwiseListenerEnvironmentalEffect();
    
    // Fix for true pure virtual functions not being implemented
};

