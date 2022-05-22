#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_DeliveryBlueprint.h"
#include "Engine/EngineTypes.h"
#include "GrenadeBehavior_DeliveryLongbow.generated.h"

class UParticleSystem;
class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_DeliveryLongbow : public UGrenadeBehavior_DeliveryBlueprint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float LongbowInitialVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowFinalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowTeleportDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowTeleportMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* LongbowTeleportLineParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* LongbowStartTeleportingAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* LongbowStartTeleportingParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETraceTypeQuery> LongbowTeleportTraceChannel;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowTeleportProximityTraceRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETraceTypeQuery> LongbowTeleportProximityTraceChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* LongbowEndTeleportingAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowRainSplitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowRainSplitAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float LongbowRainHeightScalar;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* LongbowEndTeleportingParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float DividerLongbowTeleportDelay;
    
public:
    UGrenadeBehavior_DeliveryLongbow();
};

