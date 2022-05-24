#pragma once
#include "CoreMinimal.h"
#include "WwiseEffectInfo.h"
#include "Components/ActorComponent.h"
#include "WwiseEffectProviderInterface.h"
#include "WwiseListenerEffectComponent.generated.h"

class UWwiseAuxBus;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API UWwiseListenerEffectComponent : public UActorComponent, public IWwiseEffectProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bRegisteredWithAudioDevice;
    
    UPROPERTY(Transient)
    TArray<FWwiseEffectInfo> WwiseEffects;
    
public:
    UWwiseListenerEffectComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveAudioEffect(UWwiseAuxBus* Efx);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAudioEffects();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAudioEffect(UWwiseAuxBus* Efx, float WetPercent, float DryPercent);
    
    
    // Fix for true pure virtual functions not being implemented
};

