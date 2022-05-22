#include "GameplayTask_ScriptedMoveSpline.h"
#include "Templates/SubclassOf.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedMoveSpline;
class UAIAction;

UGameplayTask_ScriptedMoveSpline* UGameplayTask_ScriptedMoveSpline::BeginScriptedMoveOnSpline(AActor* NewTarget, AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor, TSubclassOf<UAIAction> NewOptionalAIAction) {
    return NULL;
}

UGameplayTask_ScriptedMoveSpline::UGameplayTask_ScriptedMoveSpline() {
    this->Target = NULL;
    this->SplineComponent = NULL;
    this->StanceProvider = NULL;
    this->LookAtActor = NULL;
    this->OptionalAIAction = NULL;
    this->DropOffSpawner = NULL;
    this->NextSpline = NULL;
}

