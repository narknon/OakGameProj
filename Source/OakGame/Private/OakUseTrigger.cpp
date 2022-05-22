#include "OakUseTrigger.h"
#include "UsableComponent.h"

class AController;

void AOakUseTrigger::NotifyTriggerUsed(AController* UsingActor) {
}

AOakUseTrigger::AOakUseTrigger() {
    this->UsableComponent = CreateDefaultSubobject<UUsableComponent>(TEXT("DefaultUsableComponent"));
}

