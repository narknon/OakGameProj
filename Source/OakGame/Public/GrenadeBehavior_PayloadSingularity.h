#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "SingularityInitializationInfo.h"
#include "GrenadeBehavior_PayloadSingularity.generated.h"

class UParticleSystem;
class UExplosionData;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadSingularity : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float SingularityRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MinSingularityRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSingularityRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float SingularityRisingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FSingularityInitializationInfo SingularityInfo;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionData* SingularityExplosionData;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* FinalExplosionAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* RainSingularityEndEffect;
    
public:
    UGrenadeBehavior_PayloadSingularity();
};

