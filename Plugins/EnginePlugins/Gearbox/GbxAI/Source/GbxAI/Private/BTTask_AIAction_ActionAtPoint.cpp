#include "BTTask_AIAction_ActionAtPoint.h"
#include "AIAction_ActionAtPoint.h"

UBTTask_AIAction_ActionAtPoint::UBTTask_AIAction_ActionAtPoint() {
    this->Action = CreateDefaultSubobject<UAIAction_ActionAtPoint>(TEXT("AIAction_ActionAtPoint"));
}

