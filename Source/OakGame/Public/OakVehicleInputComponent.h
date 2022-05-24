#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EVehicleCameraRelativeDrivingMode.h"
#include "GbxInputComponent.h"
#include "OakVehicleInputComponent.generated.h"

class UGbxInputActionData_Continuous_Vector;
class AOakVehicle;

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleInputComponent : public UGbxInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* SteerActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* ThrottleActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* LookActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputActionData_Continuous_Vector* AirControlActionData;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AOakVehicle* OwningVehicle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAirControlNeedsNeutralStick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseCameraRelativeSteeringMode;
    
    UPROPERTY(EditDefaultsOnly)
    EVehicleCameraRelativeDrivingMode CameraRelativeDrivingMode;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve CameraRelativeAngleToSteeringCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseAutoEBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoEBrakeSpeedThresholdKPH;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoEBrakeSteeringThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoEBrakeWantedDirAngleThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseStickLengthAsThrottle;
    
    UPROPERTY(EditDefaultsOnly)
    float ForwardInputAngleThreshold;
    
public:
    UOakVehicleInputComponent();
private:
    UFUNCTION()
    void OnVehicleAirborne();
    
};

