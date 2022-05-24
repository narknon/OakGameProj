#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadForce.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadForce : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ForceWiseEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ForceEmitterTemplate;
    
public:
    UGrenadeBehavior_PayloadForce();
};

