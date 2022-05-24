#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "Curves/CurveFloat.h"
#include "EVehicleDriveType.h"
#include "VehicleMovementInterface.h"
#include "UObject/NoExportTypes.h"
#include "OnBecameAirbornDelegate.h"
#include "OnLandedDelegate.h"
#include "AntiRollBarData.h"
#include "EVehicleCameraRelativeDrivingMode.h"
#include "WheeledVehicleMovementComponentNW.generated.h"

class UGbxCondition;
class UPhysicalMaterial;
class UCurveFloat;
class UVehicleCollisionResponseModificationContext;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent4W, public IVehicleMovementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int8> DrivenWheels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVehicleDriveType VehicleDriveType;
    
    UPROPERTY(EditAnywhere)
    float ForwardMarginOfError;
    
    UPROPERTY(EditAnywhere)
    float ContiguousMovementDirectionThreshold;
    
    UPROPERTY(EditAnywhere)
    float ContiguousMovementDirectionSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bContiguousMovementAppliesToReverse;
    
    UPROPERTY(EditAnywhere)
    bool bOversteerFixupEnabled;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve OversteerFixupCurve;
    
    UPROPERTY(EditAnywhere)
    bool bAerialRotationalDampingEnabled;
    
    UPROPERTY(EditAnywhere)
    float RisingAerialRotationDampingFactor;
    
    UPROPERTY(EditAnywhere)
    float AerialRotationalDamping;
    
    UPROPERTY(EditAnywhere)
    float AerialRotationalDeviationAngle;
    
    UPROPERTY(EditAnywhere)
    bool bAerialAutoStabilizationEnabled;
    
    UPROPERTY(EditAnywhere)
    float RisingAerialAutoStabilizationFactor;
    
    UPROPERTY(EditAnywhere)
    float AerialAutoStabilization;
    
    UPROPERTY(EditAnywhere)
    bool bUseAutoUnflip;
    
    UPROPERTY(EditAnywhere)
    FVector2D AutoUnflipAngleRange;
    
    UPROPERTY(EditAnywhere)
    float AutoUnflipEaseInZone;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve AutoUnflipCurve;
    
    UPROPERTY(EditAnywhere)
    float AutoUnflipForce;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TankTreadInputDifferenceCurve;
    
    UPROPERTY(EditAnywhere)
    float MaxTreadThrustOvershootValue;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BrakeWhenTurningRatioCurve;
    
    UPROPERTY(EditAnywhere)
    float OppositeThreadSpeedWhenTurningInPlace;
    
    UPROPERTY(EditAnywhere)
    float CustomGravityModifier;
    
    UPROPERTY(EditAnywhere)
    float GroundedCustomGravityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSteeringCurve;
    
    UPROPERTY(BlueprintAssignable)
    FOnBecameAirborn OnBecameAirborn;
    
    UPROPERTY(BlueprintAssignable)
    FOnLanded OnLanded;
    
    UPROPERTY(EditAnywhere)
    bool bLateralToLongitudinalVelocityShiftEnabled;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LateralToLongitudinalVelocityShiftCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TireForcesRatioToSlopeAngleCurve;
    
    UPROPERTY(EditAnywhere)
    float BalanceAssistMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUseSagittalBalanceCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SagittalBalanceCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SagittalBalanceSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    float SagitalBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float EBrakingSagitalBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float EBrakingSagittalAngleRefSpeedKmH;
    
    UPROPERTY(EditAnywhere)
    float EBrakingSagitalLeanAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseCoronalBalanceCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve CoronalBalanceCurve;
    
    UPROPERTY(EditAnywhere)
    bool bUseBrakeAssist;
    
    UPROPERTY(EditAnywhere)
    bool bUseHandBrakeAssist;
    
    UPROPERTY(EditAnywhere)
    bool bApplyBrakeAssistOnLatForces;
    
    UPROPERTY(EditAnywhere)
    float BrakeAssistForceScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BrakeAssistCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanHandbrake;
    
    UPROPERTY(EditAnywhere)
    bool bUseUTurnAssist;
    
    UPROPERTY(EditAnywhere)
    bool bActivateUTurnAssistOnHandbrake;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ActivateUTurnAssistCondition;
    
    UPROPERTY(EditAnywhere)
    bool bApplyUTurnAssistInAir;
    
    UPROPERTY(EditAnywhere)
    float UTurnAssistForce;
    
    UPROPERTY(EditAnywhere)
    float UTurnAssistForceInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float UTurnAssistForceReturnToZeroInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float UTurnAssistRefSpeed;
    
    UPROPERTY(EditAnywhere)
    float UTurnAssistMaxAngularVelInfluence;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve UTurnAssistCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LiquidBodyWheelDepthToForceCurve;
    
    UPROPERTY(EditAnywhere)
    float LiquidBodyDampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData CollisionResponseFormula;
    
    UPROPERTY(EditAnywhere)
    float AngleToUpsideDown;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* DefaultPhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* UpsideDownPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDontMoveWhenCollided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CryoPenaltyCurve;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FAntiRollBarData> AntiRollBars;
    
protected:
    UPROPERTY(Transient)
    UVehicleCollisionResponseModificationContext* CollisionResponseContext;
    
public:
    UWheeledVehicleMovementComponentNW();
    UFUNCTION(BlueprintCallable)
    void SetToRestState();
    
    UFUNCTION(BlueprintCallable)
    void SetSteerAngle(float SteerAngle, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSagittalBalancingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOversteerFixupEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNoDriveSteerAngle(float SteerAngle, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetNoDriveDriveTorque(float DriveTorque, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetNoDriveBrakeTorque(float BrakeTorque, int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomGravityModifier(float NewModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetCoronalBalancingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialRotationalDampingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomGravityModifer();
    
    UFUNCTION(BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSagittalBalancingEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool GetOversteerFixupEnabled();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumWheelsInAir() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLateralToLongitudinalVelocityShiftEnabled();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetDirectionBasedThrottleAndSteer(const FVector2D& StickInput);
    
    UFUNCTION(BlueprintPure)
    float GetCustomGravityModifier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCoronalBalancingEnabled();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCameraRelativeThrottleAndSteer(const FVector2D& StickInput, float& WantedDirAngle, EVehicleCameraRelativeDrivingMode Mode, UCurveFloat* AngleToSteeringCurve);
    
    UFUNCTION(BlueprintCallable)
    bool GetAerialRotationalDampingEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw);
    
    
    // Fix for true pure virtual functions not being implemented
};

