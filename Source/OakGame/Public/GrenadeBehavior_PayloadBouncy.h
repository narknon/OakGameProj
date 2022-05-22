#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadBouncy.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadBouncy : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* TrailSystemTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float BouncyForwardBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float BouncyUpdwardBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BouncyBounceEvent;
    
public:
    UGrenadeBehavior_PayloadBouncy();
};

