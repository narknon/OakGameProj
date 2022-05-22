#include "AIAction_Priority.h"

UAIAction_Priority::UAIAction_Priority() {
    this->TryInterruptPeriod = 0.50f;
    this->TryInterruptInsignificantPeriod = 1.00f;
    this->bInterruptWhileInsignificant = false;
}

