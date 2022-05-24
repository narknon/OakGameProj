#pragma once
#include "CoreMinimal.h"
#include "BoostPhysicsParams.h"
#include "GbxDataAsset.h"
#include "Curves/CurveFloat.h"
#include "VehicleBoostData.generated.h"

class UGameResourcePoolData;
class UGbxCondition;

UCLASS()
class GBXVEHICLE_API UVehicleBoostData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bApplyFullThrottleWhenBoosting;
    
    UPROPERTY(EditAnywhere)
    float MinBoostDuration;
    
    UPROPERTY(EditAnywhere)
    FBoostPhysicsParams GroundBoostParams;
    
    UPROPERTY(EditAnywhere)
    FBoostPhysicsParams AirBoostParams;
    
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* BoostPoolData;
    
    UPROPERTY(EditAnywhere)
    bool bContinuousStartCheck;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* StartBoostCondition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* StopBoostCondition;
    
    UPROPERTY(EditAnywhere)
    bool bStopConditionCanOverrideMinBoostDuration;
    
    UPROPERTY(EditAnywhere)
    bool bPauseWhenInAir;
    
    UPROPERTY(EditAnywhere)
    float MinStartBoostSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinStartBoostAngle;
    
    UPROPERTY(EditAnywhere)
    float BoostCooldownTime;
    
    UPROPERTY(EditAnywhere)
    bool bInstantBoost;
    
    UPROPERTY(EditAnywhere)
    int32 InstantBoostCharges;
    
    UPROPERTY(EditAnywhere)
    float InstantBoostDuration;
    
    UPROPERTY(EditAnywhere)
    bool bModifySteering;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SteeringRatioCurve;
    
    UPROPERTY(EditAnywhere)
    float SteeringRatioInterpSpeed;
    
    UVehicleBoostData();
};

