#include "GameplayTask_ScriptedRoute.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedRoute;

UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::BeginScriptedRoute2(AActor* Target, AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::BeginScriptedRoute(AActor* User, AActor* FirstAINode, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedRoute::UGameplayTask_ScriptedRoute() {
    this->AINode = NULL;
    this->StanceProvider = NULL;
}

