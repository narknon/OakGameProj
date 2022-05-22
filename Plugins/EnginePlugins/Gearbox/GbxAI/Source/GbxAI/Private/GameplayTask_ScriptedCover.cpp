#include "GameplayTask_ScriptedCover.h"

class ACover;
class AActor;
class UGameplayTask_ScriptedCover;

void UGameplayTask_ScriptedCover::EndScriptedCover(AActor* User) {
}

UGameplayTask_ScriptedCover* UGameplayTask_ScriptedCover::BeginScriptedCover(AActor* User, ACover* Cover) {
    return NULL;
}

UGameplayTask_ScriptedCover::UGameplayTask_ScriptedCover() {
    this->CoverSlot = NULL;
    this->CoverUser = NULL;
}

