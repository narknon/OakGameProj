#include "SpawnFactory_Generic.h"

class UProperty;

bool USpawnFactory_Generic::ShouldSkipActorProperty(UProperty* ActorProperty) {
    return false;
}

USpawnFactory_Generic::USpawnFactory_Generic() {
    this->ActorProperties = NULL;
    this->bUseActorProperties = false;
    this->bIncludeSkeletalMeshForSpawnExtent = false;
    this->bOverrideSpawnSize = false;
    this->CollisionHandling = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bOverrideCollisionHandling = false;
}

