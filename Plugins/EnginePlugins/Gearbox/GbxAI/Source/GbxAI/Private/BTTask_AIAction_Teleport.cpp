#include "BTTask_AIAction_Teleport.h"
#include "AIAction_Teleport.h"

UBTTask_AIAction_Teleport::UBTTask_AIAction_Teleport() {
    this->Action = CreateDefaultSubobject<UAIAction_Teleport>(TEXT("AIAction_Teleport"));
}

