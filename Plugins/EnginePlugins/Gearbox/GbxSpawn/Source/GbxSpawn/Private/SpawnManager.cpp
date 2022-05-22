#include "SpawnManager.h"

class AActor;

void USpawnManager::ActorDestroyed(AActor* Actor) {
}

USpawnManager::USpawnManager() {
    this->MaxSpawnCost = 200;
    this->bCanResetSpawners = true;
    this->SpawnerResetPeriod = 900.00f;
    this->MaxActorsSpawnedPerFrame = 1;
    this->UpdatePeriod = 0.10f;
    this->SuspendTestPeriod = 1;
    this->IrrelevantPeriod = 10;
    this->AlwaysRelevantDistance = 3000;
    this->AlwaysIrrelevantDistance = 15000;
    this->bUseMultiframeSpawning = true;
    this->PrivateWorld = NULL;
    this->SpawnedActor = NULL;
}

