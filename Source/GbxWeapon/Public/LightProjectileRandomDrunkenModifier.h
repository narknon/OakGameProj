#pragma once
#include "CoreMinimal.h"
#include "LightProjectileMoveModifier.h"
#include "GbxEasingFunc.h"
#include "LightProjectileRandomDrunkenModifier.generated.h"

UCLASS(EditInlineNew)
class ULightProjectileRandomDrunkenModifier : public ULightProjectileMoveModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PathCorrectionInterval;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpreadAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxDepartureAngle;
    
    UPROPERTY(EditAnywhere)
    bool bGravityAffectsDrunkenness;
    
    UPROPERTY(EditAnywhere)
    float DrunkenGravityScalar;
    
    UPROPERTY(EditAnywhere)
    float StartApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float StartDelayTime;
    
    UPROPERTY(EditAnywhere)
    float EaseInTime;
    
    UPROPERTY(EditAnywhere)
    bool bNormalizedEaseTime;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseInFunc;
    
    ULightProjectileRandomDrunkenModifier();
};

