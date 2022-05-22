#include "OakTriggerBox.h"
#include "OakTriggerComponent.h"

class AActor;

void AOakTriggerBox::NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer) {
}

void AOakTriggerBox::NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer) {
}

AOakTriggerBox::AOakTriggerBox() {
    this->TriggerComponent = CreateDefaultSubobject<UOakTriggerComponent>(TEXT("TriggerComponent"));
}

