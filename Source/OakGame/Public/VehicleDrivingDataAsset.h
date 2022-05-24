#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxDataAsset.h"
#include "VehicleDrivingDataAsset.generated.h"

class UGbxCondition;

UCLASS(BlueprintType)
class UVehicleDrivingDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DesiredSpeed;
    
    UPROPERTY(EditAnywhere)
    float SpeedToActivateBoost;
    
    UPROPERTY(EditAnywhere)
    float SpeedToActivateSpeedHack;
    
    UPROPERTY(EditAnywhere)
    float ReverseSpeed;
    
    UPROPERTY(EditAnywhere)
    float VehicleReverseTime;
    
    UPROPERTY(EditAnywhere)
    float VehicleReverseFaceThreshold;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeedFactor;
    
    UPROPERTY(EditAnywhere)
    float TurnMaxValueDot2;
    
    UPROPERTY(EditAnywhere)
    float TurnMinValueDot2;
    
    UPROPERTY(EditAnywhere)
    bool bUsePIDController;
    
    UPROPERTY(EditAnywhere)
    float Kp;
    
    UPROPERTY(EditAnywhere)
    float Ki;
    
    UPROPERTY(EditAnywhere)
    float Kd;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaVelIntegral;
    
    UPROPERTY(EditAnywhere)
    float HandbrakeMinVelocity;
    
    UPROPERTY(EditAnywhere)
    float HandbrakeMinTurnDot2;
    
    UPROPERTY(EditAnywhere)
    float ThrottleHandbrakeMinTurnDot2;
    
    UPROPERTY(EditAnywhere)
    float HandbrakeStopMinTurnDot2;
    
    UPROPERTY(EditAnywhere)
    bool bActivateThrottleHandbrake;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* CanDriveCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SpeedModifierValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedHackForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedHackGravityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedHackTireGripFactor;
    
    UPROPERTY(EditAnywhere)
    float ValidBoostDirectionDot2;
    
    UPROPERTY(EditAnywhere)
    bool bWallTest;
    
    UPROPERTY(EditAnywhere)
    float TestWallsUpdateDelay;
    
    UPROPERTY(EditAnywhere)
    float TestWallsTraceLength;
    
    UPROPERTY(EditAnywhere)
    float TestWallsBehindDotFactor;
    
    UPROPERTY(EditAnywhere)
    float StuckDisableDelay;
    
    UVehicleDrivingDataAsset();
};

