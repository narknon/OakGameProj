#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioEffect.h"
#include "WwiseEnvironmentalEffectProvider.h"
#include "UObject/NoExportTypes.h"
#include "WwiseZoneAudioEffect.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseZoneAudioEffect : public UWwiseAudioEffect, public IWwiseEnvironmentalEffectProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectFadeDistance;
    
    UWwiseZoneAudioEffect();
    
    // Fix for true pure virtual functions not being implemented
};

