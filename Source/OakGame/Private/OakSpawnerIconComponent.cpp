#include "OakSpawnerIconComponent.h"

class ASpawner;
class USpawnerComponent;
class AActor;

void UOakSpawnerIconComponent::OnVehicleActorSpawnedEvent(ASpawner* Spawner, const FSpawnerActorData& ActorData) {
}

void UOakSpawnerIconComponent::OnSpawnedActorDiedOrSuspend(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void UOakSpawnerIconComponent::OnActorSpawnedOrUnsuspend(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

USpawnerComponent* UOakSpawnerIconComponent::GetMySpawnerComponent() {
    return NULL;
}

void UOakSpawnerIconComponent::AddMissionIconComponentToActor(AActor* Actor) {
}

UOakSpawnerIconComponent::UOakSpawnerIconComponent() {
    this->bAddMissionIconToSpawnedActors = false;
    this->bDisplayIconWhenActorsSuspended = false;
    this->bAlwaysDisplayIcon = false;
}

