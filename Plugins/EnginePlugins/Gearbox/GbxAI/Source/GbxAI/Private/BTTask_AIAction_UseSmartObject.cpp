#include "BTTask_AIAction_UseSmartObject.h"
#include "AIAction_UseSmartObject.h"

UBTTask_AIAction_UseSmartObject::UBTTask_AIAction_UseSmartObject() {
    this->Action = CreateDefaultSubobject<UAIAction_UseSmartObject>(TEXT("AIAction_UseSmartObject"));
}

