#include "DamageReactionEvent_DamageComponent.h"

FDamageReactionEvent_DamageComponent::FDamageReactionEvent_DamageComponent() {
    this->HealthPool = NULL;
    this->EventHealthPercent = 0.00f;
    this->EVENTTYPE = EDamageReactionEventType::Health;
    this->Filter = NULL;
    this->DamageTime = 0.00f;
    this->RetriggerDelay = 0.00f;
    this->MaxTriggerCount = 0;
}

