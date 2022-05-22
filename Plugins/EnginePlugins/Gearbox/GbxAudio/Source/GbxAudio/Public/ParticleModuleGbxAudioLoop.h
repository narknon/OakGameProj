#pragma once
#include "CoreMinimal.h"
#include "EWwiseMultiPositionType.h"
#include "ParticleModuleGbxAudioBase.h"
#include "Distributions/DistributionFloat.h"
#include "ParticleModuleGbxAudioLoop.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleGbxAudioLoop : public UParticleModuleGbxAudioBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* LoopStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* LoopStopEvent;
    
    UPROPERTY(EditAnywhere)
    EWwiseMultiPositionType MultiPositionType;
    
    UPROPERTY(EditAnywhere)
    float AudioComponentRadius;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat GainOverLifetime;
    
    UParticleModuleGbxAudioLoop();
};

