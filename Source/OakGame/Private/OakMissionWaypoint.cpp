#include "OakMissionWaypoint.h"
#include "OakMissionIconComponent.h"

class AActor;
class UActorComponent;

void AOakMissionWaypoint::WaypointTriggerTouched(AActor* OtherActor, bool bIsPlayer, UActorComponent* ComponentTouched) {
}

AOakMissionWaypoint::AOakMissionWaypoint() {
    this->MissionIconComponent = CreateDefaultSubobject<UOakMissionIconComponent>(TEXT("MissionIconComponent"));
    this->bUsePlayerAsContext = false;
}

