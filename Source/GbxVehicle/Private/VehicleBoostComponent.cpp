#include "VehicleBoostComponent.h"
#include "Net/UnrealNetwork.h"

void UVehicleBoostComponent::StopBoost(bool bForce) {
}

void UVehicleBoostComponent::StartBoost() {
}

void UVehicleBoostComponent::ResumeBoost() {
}

void UVehicleBoostComponent::RegisterBoostRegenerateEvent(float BoostTarget, const FVehicleBoostValueReachedEventDelegate& BoostValueReachedDelegate) {
}

void UVehicleBoostComponent::PauseBoost() {
}

void UVehicleBoostComponent::OnRep_IsBoosting(bool bWasBoosting) {
}



float UVehicleBoostComponent::GetRelativeBoostSpeed() const {
    return 0.0f;
}

float UVehicleBoostComponent::GetMaxBoostPoolValue() const {
    return 0.0f;
}

float UVehicleBoostComponent::GetCurrentBoostPoolValue() const {
    return 0.0f;
}

int32 UVehicleBoostComponent::GetCurrentBoostChargesCount() const {
    return 0;
}

bool UVehicleBoostComponent::GetBoostEnabled() const {
    return false;
}

FVector UVehicleBoostComponent::GetBoostDirection() const {
    return FVector{};
}

void UVehicleBoostComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleBoostComponent, bIsBoosting);
    DOREPLIFETIME(UVehicleBoostComponent, BoostPool);
}

UVehicleBoostComponent::UVehicleBoostComponent() {
    this->BoostData = NULL;
    this->Vehicle = NULL;
    this->bIsBoosting = false;
}

