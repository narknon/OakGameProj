#include "AIUseComponent.h"

class AActor;
class UAITask;

void UAIUseComponent::StopUse(bool bSucceeded) {
}

bool UAIUseComponent::RequestUse(AActor* SmartObject, FGameplayTag ActionName, bool bAbortExisting, bool bUntilInterrupted) {
    return false;
}

void UAIUseComponent::OnUseCompleted(UAITask* Task, ESmartObjectTaskResult Result) {
}

AActor* UAIUseComponent::GetCurrentObject() {
    return NULL;
}

UAIUseComponent::UAIUseComponent() {
    this->CachedPawn = NULL;
    this->CachedController = NULL;
    this->CachedActionComponent = NULL;
    this->bInitializingAction = false;
}

