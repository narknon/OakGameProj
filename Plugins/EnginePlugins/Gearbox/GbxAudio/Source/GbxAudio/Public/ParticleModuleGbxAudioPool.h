#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleGbxAudioBase.h"
#include "Distributions/DistributionFloat.h"
#include "ParticleModuleGbxAudioPool.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleGbxAudioPool : public UParticleModuleGbxAudioBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* AudioEvent;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfAudioComponents;
    
    UPROPERTY(EditAnywhere)
    bool bStealComponents;
    
    UPROPERTY(EditAnywhere)
    float AudioComponentRadius;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat GainOverLifetime;
    
    UParticleModuleGbxAudioPool();
};

