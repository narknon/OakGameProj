#include "SplineMovementComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class USplineComponent;

void USplineMovementComponent::SwitchSpline(AActor* NewSplineComponentHolder, FName NewSplineName) {
}

void USplineMovementComponent::SetStartingDistanceOnSpline(float DistanceOnSpline) {
}

void USplineMovementComponent::OnRep_SplineComponentHolder() {
}

void USplineMovementComponent::OnRep_Impulse() {
}

USplineComponent* USplineMovementComponent::GetSplineComponent() {
    return NULL;
}

void USplineMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineMovementComponent, SplineComponentHolder);
    DOREPLIFETIME(USplineMovementComponent, MaxSpeed);
    DOREPLIFETIME(USplineMovementComponent, MinSpeed);
    DOREPLIFETIME(USplineMovementComponent, VelocityCurrent);
    DOREPLIFETIME(USplineMovementComponent, ImpulseThisFrameAccumulator);
    DOREPLIFETIME(USplineMovementComponent, TimeWithinSleepThreshold);
}

USplineMovementComponent::USplineMovementComponent() {
    this->SplineComponentHolder = NULL;
    this->StartDistance = 0.00f;
    this->MaxSpeed = 0.00f;
    this->MinSpeed = 0.00f;
    this->LinearDamping = 0.00f;
    this->GravityZ = 9.80f;
    this->AccelerationAngleThreshold = 0.00f;
    this->SleepThresholdMaxTime = 2.00f;
    this->SleepThreshold = 1.00f;
    this->bIgnoreCollisionWhenMoving = false;
    this->VelocityCurrent = 0.00f;
    this->ImpulseThisFrameAccumulator = 0.00f;
    this->CurrentDistanceAlongSpline = 0.00f;
    this->TimeWithinSleepThreshold = 0.00f;
}

