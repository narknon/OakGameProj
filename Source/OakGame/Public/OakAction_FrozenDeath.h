#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "OakAction_FrozenDeath.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS()
class UOakAction_FrozenDeath : public UGbxAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bShatter;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* Particle;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* Sound;
    
public:
    UOakAction_FrozenDeath();
};

