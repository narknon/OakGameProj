#include "OakMissionWaypointBox.h"
#include "OakMissionIconComponent.h"

class AActor;
class UActorComponent;

void AOakMissionWaypointBox::WaypointTriggerTouched(AActor* OtherActor, bool bIsPlayer, UActorComponent* ComponentTouched) {
}

AOakMissionWaypointBox::AOakMissionWaypointBox() {
    this->MissionIconComponent = CreateDefaultSubobject<UOakMissionIconComponent>(TEXT("MissionIconComponent"));
    this->bUsePlayerAsContext = false;
}

