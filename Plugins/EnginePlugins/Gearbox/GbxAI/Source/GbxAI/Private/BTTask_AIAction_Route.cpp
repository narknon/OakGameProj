#include "BTTask_AIAction_Route.h"
#include "AIAction_Route.h"

UBTTask_AIAction_Route::UBTTask_AIAction_Route() {
    this->Action = CreateDefaultSubobject<UAIAction_Route>(TEXT("AIAction_Route"));
}

