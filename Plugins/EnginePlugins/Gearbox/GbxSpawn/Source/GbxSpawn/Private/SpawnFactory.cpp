#include "SpawnFactory.h"

USpawnFactory::USpawnFactory() {
    this->bUsedInSpawnPointOverlapChecks = true;
    this->bOverrideActorTags = false;
    this->CachedActorClassTagComponent = NULL;
    this->CachedTeam = NULL;
}

