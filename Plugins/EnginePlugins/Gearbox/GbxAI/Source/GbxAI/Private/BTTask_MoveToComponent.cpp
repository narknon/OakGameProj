#include "BTTask_MoveToComponent.h"

UBTTask_MoveToComponent::UBTTask_MoveToComponent() {
    this->AcceptableRadius = 5.00f;
    this->bAllowStrafe = false;
    this->bStopOnOverlap = true;
    this->bAllowPartialPath = true;
    this->bProjectGoalLocation = true;
}

