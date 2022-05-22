#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GbxAudioSettings.generated.h"

class UGbxAudioGlobalsData;

UCLASS(DefaultConfig, Config=Game)
class GBXAUDIO_API UGbxAudioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxAudioGlobalsData* AudioGlobalsData;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultAudioGlobalsData;
    
    UPROPERTY(Config, EditAnywhere)
    float FoleyCullingDistanceFraction;
    
    UPROPERTY(Config, EditAnywhere)
    float FoleyCullingDistanceMinVolumeForReduction;
    
    UPROPERTY(Config, EditAnywhere)
    float FoleyCullingDistanceReductionFractionPerDBOverMin;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> SkipCinematicEvents;
    
    UGbxAudioSettings();
};

