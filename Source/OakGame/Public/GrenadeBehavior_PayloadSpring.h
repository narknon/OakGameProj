#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadSpring.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadSpring : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> SpringNumBounces;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialSpringSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float SpringGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SpringTrail;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* SpringAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowSpringDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowHitTeleportOffset;
    
public:
    UGrenadeBehavior_PayloadSpring();
};

