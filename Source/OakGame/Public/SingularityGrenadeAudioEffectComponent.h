#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "SingularityGrenadeAudioEffectComponent.generated.h"

class UWwiseRtpc;
class UWwiseAuxBus;
class UWwiseEvent;
class UWwiseAudioEffect;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USingularityGrenadeAudioEffectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UWwiseAuxBus* AuxBus;
    
    UPROPERTY(Transient)
    UWwiseAudioEffect* AudioEffect;
    
    UPROPERTY(Transient)
    UWwiseRtpc* EffectFadeRtpc;
    
    UPROPERTY(Transient)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(Transient)
    UWwiseEvent* StopEvent;
    
    UPROPERTY(Transient)
    float EffectSize;
    
    UPROPERTY(Transient)
    float EffectFadeDistance;
    
    UPROPERTY(Transient)
    float EffectDuration;
    
    USingularityGrenadeAudioEffectComponent();
    UFUNCTION()
    void StopActiveEffect();
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSingularityAudioEffectAtLocation(UObject* WorldContextObject, UWwiseAuxBus* EffectAuxBus, FVector EffectLocation, float Size, float FadeDistance, float Duration, UWwiseRtpc* FadeDistanceRtpc, UWwiseEvent* AdditionalStartEvent, UWwiseEvent* AdditionalStopEvent);
    
};

