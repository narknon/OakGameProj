#include "OakNpcGreetingComponent.h"

class AActor;

void UOakNpcGreetingComponent::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}

void UOakNpcGreetingComponent::OnDialogStarted() {
}

UOakNpcGreetingComponent::UOakNpcGreetingComponent() {
    this->PerceptionComponent = NULL;
    this->DialogComponent = NULL;
    this->MissionObserverComponent = NULL;
    this->MissionDirectorComponent = NULL;
}

