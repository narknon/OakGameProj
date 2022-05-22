#include "SpawnSimulatedActorSwitchAction.h"
#include "Engine/StaticMeshActor.h"

USpawnSimulatedActorSwitchAction::USpawnSimulatedActorSwitchAction() {
    this->ActorClass = AStaticMeshActor::StaticClass();
    this->bInheritVelocity = true;
    this->bEnableSpeedRange = false;
    this->bEnableAngularSpeedRange = false;
    this->DefaultAxis = EAxis::X;
    this->Speed = 300.00f;
    this->MaxSpeed = 0.00f;
    this->AngularSpeed = 0.00f;
    this->MaxAngularSpeed = 0.00f;
    this->LifeSpan = 0.00f;
}

