#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AimSensitivityLevelParameters.h"
#include "AimControlData.generated.h"

UCLASS(BlueprintType)
class UAimControlData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputCurveExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelRateRawBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAimSensitivityLevelParameters> HipSensitivityLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAimSensitivityLevelParameters> ZoomSensitivityLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAimSensitivityLevelParameters> VehicleSensitivityLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFOVScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAcceptedFOVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFOVScalingMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAcceptedFOVScaleMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HighDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AxialDeadZoneBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AxialDeadZoneRatio;
    
    UAimControlData();
};

