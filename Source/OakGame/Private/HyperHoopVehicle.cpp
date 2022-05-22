#include "HyperHoopVehicle.h"
#include "SplineFollowerComponent.h"
#include "OakPawnAttachSlotComponent.h"

class AController;
class APawn;
class AActor;

void AHyperHoopVehicle::StartMovement() {
}

void AHyperHoopVehicle::StartDetatch() {
}

void AHyperHoopVehicle::SetupAndStart_Rep_Implementation(APawn* Pawn, AActor* SplineCompToFollow, FName SplineComponentName, bool bIsReverse) {
}

void AHyperHoopVehicle::SetupAndStart(AController* Cont, AActor* SplineActorToAttachTo, FName SplineComponentName, bool bIsReverse) {
}

void AHyperHoopVehicle::OnReachedEndOfSpline(USplineFollowerComponent* NewSplineFollowerComponent, AActor* SplineFollowerOwner) {
}

void AHyperHoopVehicle::OnReachedCallbackDistance(USplineFollowerComponent* NewSplineFollowerComponent, AActor* SplineFollowerOwner, const FString& CheckpointName) {
}

void AHyperHoopVehicle::OnDetachFinished(APawn* Pawn, AController* Controller) {
}

void AHyperHoopVehicle::OnAttachFinished(APawn* Pawn, AController* Controller) {
}

AHyperHoopVehicle::AHyperHoopVehicle() {
    this->State = EHyperHoopState::Invalid;
    this->DistanceFromEndDecelerate = 1000.00f;
    this->DelayBeforeMove = 1.00f;
    this->DelayBeforeExitAnim = 1.00f;
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("HyperHoop_SplineFollowerComponent"));
    this->PawnAttachSlotComponent = CreateDefaultSubobject<UOakPawnAttachSlotComponent>(TEXT("HyperHoop_PawnAttachSlotComponent"));
}

