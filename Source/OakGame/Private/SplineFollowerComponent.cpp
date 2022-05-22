#include "SplineFollowerComponent.h"
#include "Net/UnrealNetwork.h"

class USplineComponent;

void USplineFollowerComponent::TelportToPositionOnSpline(float Percent) {
}

bool USplineFollowerComponent::Stop() {
    return false;
}

bool USplineFollowerComponent::Start() {
    return false;
}

void USplineFollowerComponent::SnapToSpline() {
}

void USplineFollowerComponent::SetSplineComponent(USplineComponent* Spline) {
}

void USplineFollowerComponent::SetDirection(bool bSetReverse) {
}

void USplineFollowerComponent::OnRep_SplineComponent() {
}

bool USplineFollowerComponent::IsMoving() {
    return false;
}

USplineComponent* USplineFollowerComponent::GetSplineComponent() const {
    return NULL;
}

FVector USplineFollowerComponent::GetLocationAhead(float AheadDistance) const {
    return FVector{};
}

bool USplineFollowerComponent::GetDirection() {
    return false;
}

float USplineFollowerComponent::GetCurrentDistanceOnSpline() const {
    return 0.0f;
}

void USplineFollowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineFollowerComponent, MaxSpeed);
    DOREPLIFETIME(USplineFollowerComponent, bUseMinSpeed);
    DOREPLIFETIME(USplineFollowerComponent, MinSpeed);
    DOREPLIFETIME(USplineFollowerComponent, Acceleration);
    DOREPLIFETIME(USplineFollowerComponent, SplineComponent);
    DOREPLIFETIME(USplineFollowerComponent, CurrentSpeed);
    DOREPLIFETIME(USplineFollowerComponent, CurrentDistanceOnSpline);
    DOREPLIFETIME(USplineFollowerComponent, bMoving);
    DOREPLIFETIME(USplineFollowerComponent, bOnSpline);
    DOREPLIFETIME(USplineFollowerComponent, bReverse);
}

USplineFollowerComponent::USplineFollowerComponent() {
    this->CallbackInputKey = 0.00f;
    this->MaxSpeed = 2500.00f;
    this->bUseMinSpeed = false;
    this->MinSpeed = 2500.00f;
    this->Acceleration = 2500.00f;
    this->TurnRate = 100.00f;
    this->bAutoStart = false;
    this->ForwardLookUpDistance = 1000.00f;
    this->OnSplineDistanceDelta = 10.00f;
    this->OnSplineYawDelta = 45.00f;
    this->SplineComponent = NULL;
    this->CurrentSpeed = 0.00f;
    this->CurrentDistanceOnSpline = 0.00f;
    this->bMoving = false;
    this->bOnSpline = false;
    this->bReverse = false;
}

