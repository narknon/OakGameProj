#include "GameplayTask_ScriptedAction.h"

class ASpawner;
class AActor;

void UGameplayTask_ScriptedAction::OnActorSpawned(ASpawner* Spawner, AActor* Actor) {
}

UGameplayTask_ScriptedAction::UGameplayTask_ScriptedAction() {
    this->ScriptedAIAction = NULL;
}

