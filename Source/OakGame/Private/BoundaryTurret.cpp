#include "BoundaryTurret.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;
class AOakCharacter_Player;

void ABoundaryTurret::WarningTrigger_OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABoundaryTurret::WarningTrigger_OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ABoundaryTurret::NetMulticast_PlayKillEffects_Implementation(const FVector& TargetLocation) {
}

void ABoundaryTurret::KillTrigger_OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABoundaryTurret::KillTrigger_OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AOakCharacter_Player* ABoundaryTurret::GetTrackedTarget() const {
    return NULL;
}

void ABoundaryTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABoundaryTurret, PriorityTrackedTarget);
}

ABoundaryTurret::ABoundaryTurret() {
    this->StartingDistance = 1500;
    this->WarningZoneDistance = 1000;
    this->WarningZoneWidth = 5000;
    this->ZoneHeight = 1000;
    this->KillExtent = 1000;
    this->ZoneVerticalOffset = 0;
    this->bShowDebugZones = false;
    this->WarningFeedback = NULL;
    this->WarningStartAudioEvent = NULL;
    this->WarningStopAudioEvent = NULL;
    this->KillAudioEvent = NULL;
    this->WarningTriggerComponent = NULL;
    this->KillTriggerComponent = NULL;
    this->TurretMeshComponent = NULL;
    this->PriorityTrackedTarget = NULL;
    this->WarningTriggerName = TEXT("WarningTrigger");
    this->KillTriggerName = TEXT("KillTrigger");
    this->TurretMeshName = TEXT("TurretSkeletalMesh");
    this->FXSwitchName = TEXT("FXSwitch");
    this->LaserSwitchName = TEXT("LaserSwitch");
    this->FXStateName = TEXT("Warning");
    this->LaserStateName = TEXT("WarningLaser");
}

