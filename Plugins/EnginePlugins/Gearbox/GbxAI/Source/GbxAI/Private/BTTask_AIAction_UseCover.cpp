#include "BTTask_AIAction_UseCover.h"
#include "AIAction_UseCover.h"

UBTTask_AIAction_UseCover::UBTTask_AIAction_UseCover() {
    this->Action = CreateDefaultSubobject<UAIAction_UseCover>(TEXT("AIAction_UseCover"));
}

