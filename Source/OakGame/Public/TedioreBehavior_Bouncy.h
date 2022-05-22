#pragma once
#include "CoreMinimal.h"
#include "TedioreBehavior.h"
#include "TedioreBehavior_Bouncy.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class UTedioreBehavior_Bouncy : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float BouncyLifeSpan;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumBounces;
    
    UPROPERTY(EditDefaultsOnly)
    float Bounciness;
    
    UPROPERTY(EditDefaultsOnly)
    float Friction;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float TriggerTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BouncyTrail;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BounceEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MirvBounceEvent;
    
public:
    UTedioreBehavior_Bouncy();
};

