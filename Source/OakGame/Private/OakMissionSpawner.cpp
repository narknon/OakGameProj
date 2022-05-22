#include "OakMissionSpawner.h"
#include "OakSpawnerIconComponent.h"

class ASpawner;
class AActor;

void AOakMissionSpawner::SendOnAllDiedMissionEvent(ASpawner* Spawner) {
}

void AOakMissionSpawner::OnMissionFailsafeActorDeath(ASpawner* Spawner, AActor* Actor) {
}

void AOakMissionSpawner::OnMissionActorSuspendData(ASpawner* Spawner, const FSpawnerActorData& ActorData) {
}

void AOakMissionSpawner::OnMissionActorSpawnedOrUnsuspend(ASpawner* Spawner, AActor* Actor) {
}

void AOakMissionSpawner::OnMissionActorFakeDeath(ASpawner* Spawner, AActor* Actor) {
}

AOakMissionSpawner::AOakMissionSpawner() {
    this->EnabledCondition = NULL;
    this->bTriggerDeathWhenRemovedFromSpawnSystem = false;
    this->bOnlyAssignObjectiveBitForSelf = false;
    this->MissionEventOptionalContext = NULL;
    this->SpawnerIconComponent = CreateDefaultSubobject<UOakSpawnerIconComponent>(TEXT("SpawnerIconComponent"));
    this->bSpawnerFailsafe = false;
    this->bPickupFailsafe = false;
    this->bFailsafeRequiresCompletedObjectives = false;
    this->bPickupFailsafeChecked = false;
    this->TheOneEnabledSpawnPoint = NULL;
}

