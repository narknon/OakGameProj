#include "OakTriggerSphere.h"
#include "OakTriggerComponent.h"

class AActor;

void AOakTriggerSphere::NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer) {
}

void AOakTriggerSphere::NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer) {
}

AOakTriggerSphere::AOakTriggerSphere() {
    this->TriggerComponent = CreateDefaultSubobject<UOakTriggerComponent>(TEXT("TriggerComponent"));
}

