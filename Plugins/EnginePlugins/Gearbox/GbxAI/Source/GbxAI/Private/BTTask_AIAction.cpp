#include "BTTask_AIAction.h"
#include "BTDecorator_AIAction.h"

UBTTask_AIAction::UBTTask_AIAction() {
    this->ActionDecorator = CreateDefaultSubobject<UBTDecorator_AIAction>(TEXT("ActionDecorator"));
}

