#include "BTTask_AIAction_LeapDirect.h"
#include "AIAction_LeapDirect.h"

UBTTask_AIAction_LeapDirect::UBTTask_AIAction_LeapDirect() {
    this->Action = CreateDefaultSubobject<UAIAction_LeapDirect>(TEXT("AIAction_LeapDirect"));
}

