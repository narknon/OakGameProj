#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "ImpactAudioParam.h"
#include "ImpactResponseParams.generated.h"

class UWwiseSwitch;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FImpactResponseParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FParticleSysParam> ParticleParameters;
    
    UPROPERTY()
    TArray<FImpactAudioParam> AudioParameters;
    
    UPROPERTY()
    UWwiseSwitch* AudioSurfaceSwitch;
    
    UPROPERTY()
    UMaterialInterface* DecalOverride;
    
    FImpactResponseParams();
};

