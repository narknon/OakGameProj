#pragma once
#include "CoreMinimal.h"
#include "WwiseLocationOverride.h"
#include "Components/SceneComponent.h"
#include "AudioDistanceThresholdSubscriberInterface.h"
#include "EWwiseCurveInterpolation.h"
#include "WwisePlaybackInstance.h"
#include "LightAudioComponent.generated.h"

class UWwiseRtpc;
class UAudioDistanceThresholdManager;
class UWwiseEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API ULightAudioComponent : public USceneComponent, public IAudioDistanceThresholdSubscriberInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UWwiseRtpc*, float> PersistentRTPCValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UWwiseEvent*> Loops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWwiseLocationOverride> RelativeDetailedLocations;
    
    UPROPERTY(EditAnywhere)
    bool bDynamicPosition;
    
    UPROPERTY(Transient)
    UAudioDistanceThresholdManager* SubscribedToManager;
    
    ULightAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    FWwisePlaybackInstance PostWwiseEvent(UWwiseEvent* WwiseEvent);
    
    
    // Fix for true pure virtual functions not being implemented
};

