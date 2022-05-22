#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadRain.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadRain : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float RainShotHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* RainShotAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float RainChildExplosionRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitShotDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float RainSplitShotSpawnDistanceFromSource;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* RainSplitAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* RainSplitEndAudioEvent;
    
public:
    UGrenadeBehavior_PayloadRain();
};

