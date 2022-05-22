#include "TeleportDestinationActor.h"

class UObject;
class ATeleportDestinationActor;

void ATeleportDestinationActor::TeleportPlayersToDestination(UObject* WorldContextObject, ATeleportDestinationActor* Destination) {
}

ATeleportDestinationActor::ATeleportDestinationActor() {
    this->ResurrectComponent = NULL;
}

