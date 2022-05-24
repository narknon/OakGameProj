#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioPositioningProviderInterface.h"
#include "EDistributedSoundMode.h"
#include "AudioPrepLocationConsumer.h"
#include "EWwiseMultiPositionType.h"
#include "UObject/NoExportTypes.h"
#include "DistributedAmbientSound.generated.h"

class UWwiseAudioComponent;
class UWwiseEvent;
class UAudioPrepLocationFinder;

UCLASS()
class GBXAUDIO_API ADistributedAmbientSound : public AActor, public IAudioPositioningProviderInterface, public IAudioPrepLocationConsumer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UWwiseEvent*> SoundVariants;
    
    UPROPERTY(EditAnywhere)
    EDistributedSoundMode SoundMode;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAudioPrepLocationFinder* LocationFinder;
    
    UPROPERTY()
    bool bTreatLocationsAsOneSource;
    
    UPROPERTY(EditAnywhere)
    EWwiseMultiPositionType MultiPositionType;
    
    UPROPERTY(EditAnywhere)
    float DOffset;
    
    UPROPERTY(EditAnywhere)
    float DScale;
    
    UPROPERTY(EditAnywhere)
    float MaxEmitterSize;
    
    UPROPERTY(EditAnywhere)
    float CombinedSourceVolumeRatio;
    
    UPROPERTY(EditAnywhere)
    bool bUseUnconditionalSampleModeForAcoustics;
    
    UPROPERTY(Export, Transient)
    TArray<UWwiseAudioComponent*> AudioComponents;
    
    UPROPERTY()
    TArray<uint8> PackedTreeData;
    
    UPROPERTY()
    FBox Bounds;
    
    ADistributedAmbientSound();
    UFUNCTION()
    void DoUpdateTree();
    
    UFUNCTION()
    void DoFindNewLocationsAndRebuild();
    
    
    // Fix for true pure virtual functions not being implemented
};

