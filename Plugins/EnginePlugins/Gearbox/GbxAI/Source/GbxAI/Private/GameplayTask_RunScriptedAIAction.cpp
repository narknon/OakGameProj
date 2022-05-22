#include "GameplayTask_RunScriptedAIAction.h"
#include "Templates/SubclassOf.h"

class UGameplayTask_RunScriptedAIAction;
class UAIAction;
class UObject;
class AGbxAIController;
class AActor;
class UAIActionComponent;

UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Object(UObject* Object, TSubclassOf<UAIAction> Action) {
    return NULL;
}

UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Controller(AGbxAIController* Controller, TSubclassOf<UAIAction> Action) {
    return NULL;
}

UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_AIActionComponent(UAIActionComponent* AIActionComponent, TSubclassOf<UAIAction> Action) {
    return NULL;
}

UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Actor(AActor* Actor, TSubclassOf<UAIAction> Action) {
    return NULL;
}

UGameplayTask_RunScriptedAIAction::UGameplayTask_RunScriptedAIAction() {
    this->ActionComponent = NULL;
    this->ActionToRun = NULL;
}

