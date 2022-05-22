#include "GameplayTask_ScriptedFollow.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedFollow;

UGameplayTask_ScriptedFollow* UGameplayTask_ScriptedFollow::BeginScriptedFollow(AActor* Follower, AActor* NewActorToFollow, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedFollow::UGameplayTask_ScriptedFollow() {
    this->ActorToFollow = NULL;
    this->StanceProvider = NULL;
}

