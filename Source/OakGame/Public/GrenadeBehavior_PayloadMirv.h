#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadMirv.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadMirv : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MinSpawnOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpawnOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvChildSpawnDelay;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MirvBeginAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MirvChildSpawnAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMirvAlongSurfaceHitNormal;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMirvOnFirstBounce;
    
public:
    UGrenadeBehavior_PayloadMirv();
};

