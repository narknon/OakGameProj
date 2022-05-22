#include "BTTask_AIAction_Leap.h"
#include "AIAction_Leap.h"

UBTTask_AIAction_Leap::UBTTask_AIAction_Leap() {
    this->Action = CreateDefaultSubobject<UAIAction_Leap>(TEXT("AIAction_Leap"));
}

