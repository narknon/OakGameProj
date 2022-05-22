#include "BTTask_AIAction_Charge.h"
#include "AIAction_Charge.h"

UBTTask_AIAction_Charge::UBTTask_AIAction_Charge() {
    this->Action = CreateDefaultSubobject<UAIAction_Charge>(TEXT("AIAction_Charge"));
}

