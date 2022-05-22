#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightBeamParticlePoolData.h"
#include "LightBeamManager.generated.h"

class ULightBeam;
class UParticleSystemComponent;

UCLASS(NotPlaceable)
class GBXWEAPON_API ALightBeamManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ULightBeam*> ActiveBeams;
    
    UPROPERTY(Transient)
    TArray<ULightBeam*> BeamPool;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> ActiveParticles;
    
    UPROPERTY(Transient)
    TArray<FLightBeamParticlePoolData> ParticlesPool;
    
public:
    ALightBeamManager();
private:
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
};

