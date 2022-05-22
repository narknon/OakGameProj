#include "AIActionComponent.h"
#include "Templates/SubclassOf.h"

class UAIAction;
class UBlackboardData;

void UAIActionComponent::ReplaceMainAIAction(TSubclassOf<UAIAction> Action) {
}

UBlackboardData* UAIActionComponent::GetBlackboardData() const {
    return NULL;
}

void UAIActionComponent::AbortScriptedAIAction(bool bStopImmediately) {
}

UAIActionComponent::UAIActionComponent() {
    this->MainAction = NULL;
    this->ScriptedMoveAction = NULL;
    this->ScriptedMoveSplineAction = NULL;
    this->ScriptedMoveToLevelSequenceAction = NULL;
    this->ScriptedLookAction = NULL;
    this->ScriptedWaitAction = NULL;
    this->ScriptedUseAction = NULL;
    this->ScriptedCoverAction = NULL;
    this->ScriptedFollowAction = NULL;
    this->ScriptedRouteAction = NULL;
    this->ScriptedLeadAction = NULL;
    this->ScriptedLandAction = NULL;
}

