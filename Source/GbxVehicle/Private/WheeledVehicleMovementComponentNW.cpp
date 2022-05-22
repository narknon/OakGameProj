#include "WheeledVehicleMovementComponentNW.h"

class UCurveFloat;

void UWheeledVehicleMovementComponentNW::SetToRestState() {
}

void UWheeledVehicleMovementComponentNW::SetSteerAngle(float SteerAngle, int32 WheelIndex) {
}

void UWheeledVehicleMovementComponentNW::SetSagittalBalancingEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponentNW::SetOversteerFixupEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponentNW::SetNoDriveSteerAngle(float SteerAngle, int32 WheelIndex) {
}

void UWheeledVehicleMovementComponentNW::SetNoDriveDriveTorque(float DriveTorque, int32 WheelIndex) {
}

void UWheeledVehicleMovementComponentNW::SetNoDriveBrakeTorque(float BrakeTorque, int32 WheelIndex) {
}

void UWheeledVehicleMovementComponentNW::SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponentNW::SetCustomGravityModifier(float NewModifier) {
}

void UWheeledVehicleMovementComponentNW::SetCoronalBalancingEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponentNW::SetAerialRotationalDampingEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponentNW::ResetCustomGravityModifer() {
}

bool UWheeledVehicleMovementComponentNW::IsInAir() const {
    return false;
}

bool UWheeledVehicleMovementComponentNW::GetSagittalBalancingEnabled() {
    return false;
}

bool UWheeledVehicleMovementComponentNW::GetOversteerFixupEnabled() {
    return false;
}

int32 UWheeledVehicleMovementComponentNW::GetNumWheelsInAir() const {
    return 0;
}

bool UWheeledVehicleMovementComponentNW::GetLateralToLongitudinalVelocityShiftEnabled() {
    return false;
}

FVector2D UWheeledVehicleMovementComponentNW::GetDirectionBasedThrottleAndSteer(const FVector2D& StickInput) {
    return FVector2D{};
}

float UWheeledVehicleMovementComponentNW::GetCustomGravityModifier() const {
    return 0.0f;
}

bool UWheeledVehicleMovementComponentNW::GetCoronalBalancingEnabled() {
    return false;
}

FVector2D UWheeledVehicleMovementComponentNW::GetCameraRelativeThrottleAndSteer(const FVector2D& StickInput, float& WantedDirAngle, EVehicleCameraRelativeDrivingMode Mode, UCurveFloat* AngleToSteeringCurve) {
    return FVector2D{};
}

bool UWheeledVehicleMovementComponentNW::GetAerialRotationalDampingEnabled() {
    return false;
}

void UWheeledVehicleMovementComponentNW::ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw) {
}

UWheeledVehicleMovementComponentNW::UWheeledVehicleMovementComponentNW() {
    this->VehicleDriveType = EVehicleDriveType::WheelN;
    this->ForwardMarginOfError = -0.30f;
    this->ContiguousMovementDirectionThreshold = 0.80f;
    this->ContiguousMovementDirectionSpeedThreshold = 0.00f;
    this->bContiguousMovementAppliesToReverse = true;
    this->bOversteerFixupEnabled = true;
    this->bAerialRotationalDampingEnabled = true;
    this->RisingAerialRotationDampingFactor = 0.50f;
    this->AerialRotationalDamping = 1.00f;
    this->AerialRotationalDeviationAngle = 45.00f;
    this->bAerialAutoStabilizationEnabled = true;
    this->RisingAerialAutoStabilizationFactor = 0.00f;
    this->AerialAutoStabilization = 0.00f;
    this->bUseAutoUnflip = false;
    this->AutoUnflipEaseInZone = 5.00f;
    this->AutoUnflipForce = 3000.00f;
    this->MaxTreadThrustOvershootValue = 0.00f;
    this->OppositeThreadSpeedWhenTurningInPlace = -0.10f;
    this->CustomGravityModifier = 1.50f;
    this->GroundedCustomGravityModifier = 1.50f;
    this->bEnableSteeringCurve = true;
    this->bLateralToLongitudinalVelocityShiftEnabled = true;
    this->BalanceAssistMaxSpeed = 720.00f;
    this->bUseSagittalBalanceCurve = false;
    this->SagitalBlendSpeed = 1.00f;
    this->EBrakingSagitalBlendSpeed = 1.00f;
    this->EBrakingSagittalAngleRefSpeedKmH = 5.00f;
    this->EBrakingSagitalLeanAngle = 30.00f;
    this->bUseCoronalBalanceCurve = false;
    this->bUseBrakeAssist = false;
    this->bUseHandBrakeAssist = false;
    this->bApplyBrakeAssistOnLatForces = false;
    this->BrakeAssistForceScale = 1.00f;
    this->bCanHandbrake = true;
    this->bUseUTurnAssist = false;
    this->bActivateUTurnAssistOnHandbrake = true;
    this->ActivateUTurnAssistCondition = NULL;
    this->bApplyUTurnAssistInAir = false;
    this->UTurnAssistForce = 60.00f;
    this->UTurnAssistForceInterpSpeed = 1.00f;
    this->UTurnAssistForceReturnToZeroInterpSpeed = 6.00f;
    this->UTurnAssistRefSpeed = 2600.00f;
    this->UTurnAssistMaxAngularVelInfluence = 100.00f;
    this->LiquidBodyDampingCoefficient = 0.40f;
    this->AngleToUpsideDown = 45.00f;
    this->DefaultPhysicalMaterial = NULL;
    this->UpsideDownPhysicalMaterial = NULL;
    this->bDontMoveWhenCollided = false;
    this->CryoPenaltyCurve = NULL;
    this->CollisionResponseContext = NULL;
}

