#include "GbxChildActorComponent.h"

void UGbxChildActorComponent::SpawnChildActor() {
}

void UGbxChildActorComponent::DespawnChildActor() {
}

UGbxChildActorComponent::UGbxChildActorComponent() {
    this->bAutoSpawnActor = true;
    this->bAutoDestroyActor = true;
    this->bDestroyExistingChildActorOnSpawn = true;
    this->bDeferChildActorClassUpdate = true;
    this->bClearChildActorReferenceToMeWhenChildActorIsDetached = true;
}

