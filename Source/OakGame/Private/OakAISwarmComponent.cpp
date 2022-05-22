#include "OakAISwarmComponent.h"

class USceneComponent;
class AActor;

void UOakAISwarmComponent::SetSwarmMovement(FOakAISwarmMovement Movement) {
}

void UOakAISwarmComponent::SetSwarmDestination(USceneComponent* Destination) {
}

void UOakAISwarmComponent::SetSwarmActorMovement(AActor* Actor, FOakAISwarmMovement Movement) {
}

void UOakAISwarmComponent::SetSwarmActorDestination(AActor* Actor, USceneComponent* Destination) {
}

void UOakAISwarmComponent::RemoveSwarmActor(AActor* Actor) {
}

void UOakAISwarmComponent::AddSwarmActor(AActor* Actor) {
}

void UOakAISwarmComponent::ActorDestroyed(AActor* Actor) {
}

UOakAISwarmComponent::UOakAISwarmComponent() {
    this->bLimitToBounds = false;
    this->ReachedDistance = 50.00f;
}

