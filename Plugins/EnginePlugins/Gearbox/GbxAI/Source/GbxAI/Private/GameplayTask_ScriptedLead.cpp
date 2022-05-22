#include "GameplayTask_ScriptedLead.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedLead;

UGameplayTask_ScriptedLead* UGameplayTask_ScriptedLead::BeginScriptedLead(AActor* Leader, AActor* DestAINode, AActor* NewActorToLead, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedLead::UGameplayTask_ScriptedLead() {
    this->DestNode = NULL;
    this->ActorToLead = NULL;
    this->StanceProvider = NULL;
}

