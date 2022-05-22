#include "TransporterCrane.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "Components/SkeletalMeshComponent.h"

class AActor;

void ATransporterCrane::StopTrackMovement() {
}

void ATransporterCrane::SetTrackMovementDirection(bool bReversed) {
}

void ATransporterCrane::ResumeTrackMovement() {
}

void ATransporterCrane::ReachedPickupPoint_Implementation() {
}

void ATransporterCrane::ReachedEnd_Implementation() {
}

void ATransporterCrane::OnRep_SplineComponent() {
}

void ATransporterCrane::OnRep_CraneRecord() {
}

void ATransporterCrane::OnReachedPickupPoint(USplineFollowerComponent* InSplineFollowerComponent, AActor* SplineFollowerOwner) {
}

void ATransporterCrane::OnReachedEnd(USplineFollowerComponent* InSplineFollowerComponent, AActor* SplineFollowerOwner) {
}

void ATransporterCrane::BeginTrack_Implementation() {
}

void ATransporterCrane::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATransporterCrane, SplineComponent);
    DOREPLIFETIME(ATransporterCrane, CraneRecord);
    DOREPLIFETIME(ATransporterCrane, ReplicatedCurrentPosition);
}

ATransporterCrane::ATransporterCrane() {
    this->TransporterTrackComponent = NULL;
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->SplineComponent = NULL;
    this->CraneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CraneMesh"));
    this->ReplicatedCurrentPosition = -1.00f;
}

