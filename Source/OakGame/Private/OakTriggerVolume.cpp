#include "OakTriggerVolume.h"
#include "OakTriggerComponent.h"

class AActor;

void AOakTriggerVolume::NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer) {
}

void AOakTriggerVolume::NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer) {
}

void AOakTriggerVolume::NotifyAllPlayersTouchingTrigger() {
}

AOakTriggerVolume::AOakTriggerVolume() {
    this->TriggerComponent = CreateDefaultSubobject<UOakTriggerComponent>(TEXT("TriggerComponent"));
}

