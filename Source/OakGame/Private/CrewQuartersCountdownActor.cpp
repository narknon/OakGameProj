#include "CrewQuartersCountdownActor.h"

class ADynamicRoomBase;

void ACrewQuartersCountdownActor::OnRoomChanging(ADynamicRoomBase* ChangingRoom) {
}

void ACrewQuartersCountdownActor::OnRoomChangeCountdown(float CountdownTime) {
}

ACrewQuartersCountdownActor::ACrewQuartersCountdownActor() {
    this->OwningRoom = NULL;
}

