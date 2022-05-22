#include "DamageReactionEvent.h"

FDamageReactionEvent::FDamageReactionEvent() {
    this->EventHealthPercent = 0.00f;
    this->EVENTTYPE = EDamageReactionEventType::Health;
    this->Filter = NULL;
    this->DamageTime = 0.00f;
    this->RetriggerDelay = 0.00f;
    this->MaxTriggerCount = 0;
    this->bIncludeDamageBoneChildren = false;
    this->bCensored = false;
    this->bTriggerOnlyOnDeath = false;
}

