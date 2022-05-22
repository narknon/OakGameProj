#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioPositioningProviderInterface.h"
#include "UObject/NoExportTypes.h"
#include "WwiseAmbientSound.generated.h"

class UWwiseAudioComponent;
class UWwiseRtpc;
class UWwiseEvent;
class AWwiseAmbientSound;

UCLASS()
class WWISEAUDIO_API AWwiseAmbientSound : public AActor, public IAudioPositioningProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UWwiseAudioComponent* AkComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartAutomatically;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AWwiseAmbientSound*> ChildEmitters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AWwiseAmbientSound*> SuppressEmitters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyEmitWhenContainingListener;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOrientToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricEmitterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricEmitterGain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseRtpc* VolumetricAttenuationRTPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumetricAttenuationMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AWwiseAmbientSound*> ExternalActiveRTPCAttenuationPortals;
    
    UPROPERTY(Transient)
    TArray<AWwiseAmbientSound*> ActiveSuppressors;
    
    UPROPERTY(Transient)
    TSet<AWwiseAmbientSound*> SuppressorPortals;
    
    AWwiseAmbientSound();
    UFUNCTION(BlueprintCallable)
    void ToggleAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void StartAmbientSound();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetAudioEmitterLocation(const FVector& ListenerLocation);
    
    
    // Fix for true pure virtual functions not being implemented
};

