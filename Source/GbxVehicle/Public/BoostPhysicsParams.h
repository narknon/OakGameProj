#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "RelativeDirectionData.h"
#include "BoostPhysicsParams.generated.h"

USTRUCT(BlueprintType)
struct FBoostPhysicsParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RefVelForPowerCurveKmH;
    
    UPROPERTY(EditAnywhere)
    float RefAccelForPowerCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BoostPower;
    
    UPROPERTY(EditAnywhere)
    float PowerOverTimeCurveBaseRatio;
    
    UPROPERTY(EditAnywhere)
    float RefTimeForPowerOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BoostPowerOverTime;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData BoostDirection;
    
    GBXVEHICLE_API FBoostPhysicsParams();
};

