#include "Elevator.h"
#include "Net/UnrealNetwork.h"
#include "GbxNavMeshSectionComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AInteractiveObject;
class AActor;

void AElevator::TimelineFinishedCallback() {
}

void AElevator::TimelineCallback(float Val) {
}

void AElevator::TeleportFloor2(FVector NewLocation, FRotator NewRotation) {
}

void AElevator::TeleportFloor1(FVector NewLocation, FRotator NewRotation) {
}

void AElevator::SetFloor2Rotation(FRotator NewRotation) {
}

void AElevator::SetFloor2Location(FVector NewLocation) {
}

void AElevator::SetFloor1Rotation(FRotator NewRotation) {
}

void AElevator::SetFloor1Location(FVector NewLocation) {
}

void AElevator::OnRep_StoppedBetweenFloor() {
}

void AElevator::OnRep_Floor2Rotation() {
}

void AElevator::OnRep_Floor2Location() {
}

void AElevator::OnRep_Floor1Rotation() {
}

void AElevator::OnRep_Floor1Location() {
}

void AElevator::OnRep_DesiredFloor() {
}

void AElevator::OnRep_CurrentPercentage() {
}

void AElevator::OnEndBoundsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AElevator::OnBeginBoundsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector AElevator::GetFloor2Location() {
    return FVector{};
}

FVector AElevator::GetFloor1Location() {
    return FVector{};
}

void AElevator::ElevatorTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AElevator::ElevatorStopMovement() {
}

void AElevator::ElevatorStartsMoving_Implementation() {
}

void AElevator::ElevatorReachedFloor2_Implementation() {
}

void AElevator::ElevatorReachedFloor1_Implementation() {
}

void AElevator::ElevatorReachedFloor_Implementation() {
}

void AElevator::ElevatorMoveToFloor2(float OverrideSpeed) {
}

void AElevator::ElevatorMoveToFloor1(float OverrideSpeed) {
}

void AElevator::ElevatorInternalButtonPressed() {
}

void AElevator::ElevatorFloor2RecallPressed() {
}

void AElevator::ElevatorFloor1RecallPressed() {
}

void AElevator::ElevatorButtonPressed(AInteractiveObject* PressedButton) {
}

void AElevator::ChangeElevatorTravelTime(float NewTime) {
}

void AElevator::ChangeElevatorSpeed(float NewSpeed) {
}

void AElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElevator, TimelinePlayRate);
    DOREPLIFETIME(AElevator, RepOverrideTimelinePlayRate);
    DOREPLIFETIME(AElevator, Floor1Location);
    DOREPLIFETIME(AElevator, Floor2Location);
    DOREPLIFETIME(AElevator, Floor1Rotation);
    DOREPLIFETIME(AElevator, Floor2Rotation);
    DOREPLIFETIME(AElevator, DesiredFloor);
    DOREPLIFETIME(AElevator, bStoppedBetweenFloor);
    DOREPLIFETIME(AElevator, CurrentPercentage);
    DOREPLIFETIME(AElevator, bHasEverMoved);
}

AElevator::AElevator() {
    this->ElevatorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMeshComp"));
    this->Floor1Position = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor1Mesh"));
    this->Floor2Position = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor2Mesh"));
    this->ElevatorMovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ElevatorMovement"));
    this->NavMeshSection = CreateDefaultSubobject<UGbxNavMeshSectionComponent>(TEXT("NavMeshSection"));
    this->ElevatorMovementSpline = NULL;
    this->bForceBaseBoundedCharacters = false;
    this->bCylindricalElevatorBounds = false;
    this->bFastAttachedMoveBasedCharacters = false;
    this->ElevatorBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("ElevatorBounds"));
    this->ElevatorMovementBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("ElevatorMovementBounds"));
    this->FloatCurve = NULL;
    this->SwitchDelayTime = 0.00f;
    this->bStartAtFloor2 = false;
    this->bUseTimeForTravel = false;
    this->ElevatorSpeed = 200.00f;
    this->ElevatorTravelTime = 10.00f;
    this->StartedMovingAudio = NULL;
    this->StoppedMovingAudio = NULL;
    this->StartMovingFeedback = NULL;
    this->StopMovingFeedback = NULL;
    this->bCrushPlayers = false;
    this->TimelinePlayRate = 0.00f;
    this->RepOverrideTimelinePlayRate = 0.00f;
    this->DesiredFloor = -1;
    this->bStoppedBetweenFloor = false;
    this->CurrentPercentage = -1.00f;
    this->bHasEverMoved = false;
}

