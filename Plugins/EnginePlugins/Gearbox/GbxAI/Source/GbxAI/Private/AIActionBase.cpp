#include "AIActionBase.h"

class UAIActionBase;
class UObject;

void UAIActionBase::StopBP(UAIActionBase* Action, const FAIActionBlueprintContext& Context, bool bSucceeded) {
}

UObject* UAIActionBase::CreateSubobjectNoName(UClass* Class) {
    return NULL;
}

UAIActionBase::UAIActionBase() {
    this->BaseVersion = 0;
    this->Version = 4294967295;
    this->CreationMethod = EAIActionCreationMethod::Unknown;
}

