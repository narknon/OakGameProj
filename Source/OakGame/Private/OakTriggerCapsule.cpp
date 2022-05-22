#include "OakTriggerCapsule.h"
#include "OakTriggerComponent.h"

class AActor;

void AOakTriggerCapsule::NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer) {
}

void AOakTriggerCapsule::NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer) {
}

AOakTriggerCapsule::AOakTriggerCapsule() {
    this->TriggerComponent = CreateDefaultSubobject<UOakTriggerComponent>(TEXT("TriggerComponent"));
}

