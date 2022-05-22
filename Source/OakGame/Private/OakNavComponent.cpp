#include "OakNavComponent.h"

class AActor;

bool UOakNavComponent::TeleportVehicleToGoal() {
    return false;
}

void UOakNavComponent::ShowDebugVehicleNav(bool bEnable) {
}

void UOakNavComponent::SetStuckTeleport(AActor* Actor, FStuckTeleport StuckTeleport) {
}

void UOakNavComponent::SetScriptedMoveTo(const FVector& Location, const FVector& EntryLocation, float ReachRadius, float WantedSpeed, bool bMaxSpeed, bool bUseBoost, float Duration, float DotDestination, bool bGoBackward) {
}

float UOakNavComponent::GetDesiredSpeed() const {
    return 0.0f;
}

void UOakNavComponent::ClearSpeedOverride(ESpeedModifierOverridePriority Priority) {
}

void UOakNavComponent::ClearScriptedMoveTo() {
}

void UOakNavComponent::ClearDrivingOverride(EDrivingOverridePriority Priority) {
}

void UOakNavComponent::AddSpeedRubberbandOverride(FRubberbandSpeedData InRubberbandSpeedData, ESpeedModifierOverridePriority Priority, float WantedSpeed, bool bUseBoost, bool bForceReverse, bool bForceHandbrake, float SteeringValue, float Duration, float SpeedHack, bool bGoBackward) {
}

void UOakNavComponent::AddSpeedOverride(ESpeedModifierOverridePriority Priority, float WantedSpeed, bool bMaxSpeed, bool bUseBoost, bool bForceReverse, bool bForceHandbrake, float SteeringValue, float Duration, float SpeedHack, bool bGoBackward) {
}

void UOakNavComponent::AddDrivingOverride(EDrivingOverridePriority Priority, bool bDisableTurnHandBrake) {
}

UOakNavComponent::UOakNavComponent() {
    this->DrivingData = NULL;
    this->MyVehicle = NULL;
    this->MyVehicleFlight = NULL;
    this->MyTurret = NULL;
    this->MyOakAIController = NULL;
}

