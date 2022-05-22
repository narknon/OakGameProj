#pragma once
#include "CoreMinimal.h"
#include "ImpactResponseEffect.h"
#include "OakElementalGibData.generated.h"

class UParticleSystem;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FOakElementalGibData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultEffects: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultParticleSystem: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultSound: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultDecal: 1;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect Effect;
    
    UPROPERTY()
    UParticleSystem* Particle;
    
    UPROPERTY()
    UWwiseEvent* Sound;
    
    OAKGAME_API FOakElementalGibData();
};

