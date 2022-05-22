#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadDivider.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadDivider : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float InitialDivideDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MinSpawnOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpawnOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* DivideParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* DividerAudioEvent;
    
public:
    UGrenadeBehavior_PayloadDivider();
};

