#include "BTTask_AIAction_LeadRoute.h"
#include "AIAction_LeadRoute.h"

UBTTask_AIAction_LeadRoute::UBTTask_AIAction_LeadRoute() {
    this->Action = CreateDefaultSubobject<UAIAction_LeadRoute>(TEXT("AIAction_LeadRoute"));
}

