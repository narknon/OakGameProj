#pragma once
#include "CoreMinimal.h"
#include "GbxAvoidanceProperties.generated.h"

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxAvoidanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WallFollowingAngle;
    
    UPROPERTY(EditAnywhere)
    float DodgingPenalty;
    
    UPROPERTY(EditAnywhere)
    float VelocityHysteresis;
    
    UPROPERTY(EditAnywhere)
    float SidednessChangingPenalty;
    
    UPROPERTY(EditAnywhere)
    float CollisionPenalty;
    
    UPROPERTY(EditAnywhere)
    float PenetrationPenalty;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float SensorSizeScale;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    float GoalDistanceOffsetPct;
    
    UPROPERTY(EditAnywhere)
    float DirectionHysteresis;
    
    UPROPERTY(EditAnywhere)
    bool bUseSimplifiedAvoiance;
    
    FGbxAvoidanceProperties();
};

