#include "AIGroupState.h"

class AActor;

void UAIGroupState::OnThreatActorDied(AActor* DamageReceiver, AActor* DamageCauser) {
}

UAIGroupState::UAIGroupState() {
    this->LinkComponent = NULL;
}

