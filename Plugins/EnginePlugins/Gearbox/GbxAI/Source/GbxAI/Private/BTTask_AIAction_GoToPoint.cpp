#include "BTTask_AIAction_GoToPoint.h"
#include "AIAction_GoToPoint.h"

UBTTask_AIAction_GoToPoint::UBTTask_AIAction_GoToPoint() {
    this->Action = CreateDefaultSubobject<UAIAction_GoToPoint>(TEXT("AIAction_GoToPoint"));
}

