#include "BTTask_AIAction_PlayGbxAction.h"
#include "AIAction_PlayGbxAction.h"

UBTTask_AIAction_PlayGbxAction::UBTTask_AIAction_PlayGbxAction() {
    this->Action = CreateDefaultSubobject<UAIAction_PlayGbxAction>(TEXT("AIAction_PlayGbxAction"));
}

