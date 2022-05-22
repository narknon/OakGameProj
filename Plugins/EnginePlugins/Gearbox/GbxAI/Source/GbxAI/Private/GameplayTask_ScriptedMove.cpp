#include "GameplayTask_ScriptedMove.h"

class AAIController;
class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedMove;

UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMoveActor(AAIController* Target, AActor* StartNode, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor) {
    return NULL;
}

UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMove2(AActor* User, AActor* StartAINode, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor) {
    return NULL;
}

UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMove(AActor* Target, AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor, bool NewBTeleportOnFail) {
    return NULL;
}

UGameplayTask_ScriptedMove::UGameplayTask_ScriptedMove() {
    this->AINode = NULL;
    this->StanceProvider = NULL;
    this->LookAtActor = NULL;
    this->bTeleportOnFail = false;
}

