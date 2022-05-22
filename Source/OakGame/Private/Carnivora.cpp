#include "Carnivora.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "GbxSkeletalMeshComponent.h"

class ACarnivoraTrackBuilder;
class UPrimitiveComponent;
class AActor;

void ACarnivora::StartCarnivoraMovement(int32 SplineTriggersId) {
}

void ACarnivora::SetTrackBuilder(ACarnivoraTrackBuilder* NewTrack, bool bReverse) {
}

void ACarnivora::SetShouldUpdateTitlBasedOnGround(bool bShouldUpdate) {
}

void ACarnivora::SetShouldUpdateTiltBasedOnGround(bool bShouldUpdate) {
}

void ACarnivora::SetShouldShootAtPlayers(bool bShootAtPlayers) {
}

void ACarnivora::SetCarnivoraTickEnabled(bool bEnabled) {
}

void ACarnivora::OnRep_InitialcarnivoraLocation() {
}

void ACarnivora::OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACarnivora::NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer) {
}

void ACarnivora::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACarnivora, DesiredHeightAboveGround);
    DOREPLIFETIME(ACarnivora, bShouldUpdateCarnivoraTiltBasedOnGround);
    DOREPLIFETIME(ACarnivora, InitialCarnivoraLocation);
}

ACarnivora::ACarnivora() {
    this->TrackBuilder = NULL;
    this->LineTracesToExecutePerFrame = 4;
    this->LookAheadDirectionPrediction = 5000.00f;
    this->WheelMaxAngle = 45.00f;
    this->AngleMultiplierWheel = 2.00f;
    this->DirectionPredictionWheelAngle = 0.00f;
    this->DesiredHeightAboveGround = 100.00f;
    this->DesiredAdditionalRoll = 0.00f;
    this->DesiredAdditionalPitch = -5.00f;
    this->bDrawDebugPlaneTilt = false;
    this->DefaultSocketToGroundDistanceTireTrack = 744.00f;
    this->DefaultSocketToGroundDistanceFrontWheel = 744.00f;
    this->SMFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
    this->SKTireTrack = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("TireTrackAndFrontWheels"));
    this->LeftTread = NULL;
    this->RightTread = NULL;
    this->LeftWheelDotRatioCollision = 0.95f;
    this->RightWheelDotRatioCollision = 0.70f;
    this->FrontWheelDotRatioCollision = 0.70f;
    this->bMustMoveToDoDamage = false;
    this->bDrawDebugCollisionTreadsAndWheels = false;
    this->bDoDamageOnTreadAndWheelCollision = false;
    this->bShootLightProjectileAtPlayers = true;
    this->SquaredDistanceReplicationCorrectionTreshold = 2000000.00f;
    this->bShouldUpdateCarnivoraTiltBasedOnGround = false;
    this->CurrentCarnivoraSplineId = 0;
    this->SplineFollower = NULL;
}

