#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_DeliveryBlueprint.h"
#include "DamageTypeParticleProperty.h"
#include "GrenadeBehavior_DeliveryRubberized.generated.h"

class UParticleSystem;
class UExplosionData;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_DeliveryRubberized : public UGrenadeBehavior_DeliveryBlueprint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 RubberizedBounceCount;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionData* RubberizedExplosionData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* RubberizedGrenadeEmitterTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float RubberizedForwardBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float RubberizedUpdwardBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* RubberizedBounceEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FDamageTypeParticleProperty DamageTypeParticleProperty;
    
    UPROPERTY(EditDefaultsOnly)
    float RubberizedDamageScalePerBounce;
    
    UPROPERTY(EditDefaultsOnly)
    float RubberizedRadiusScalePerBounce;
    
public:
    UGrenadeBehavior_DeliveryRubberized();
};

