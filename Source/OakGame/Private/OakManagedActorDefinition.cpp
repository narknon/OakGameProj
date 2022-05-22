#include "OakManagedActorDefinition.h"

UOakManagedActorDefinition::UOakManagedActorDefinition() {
    this->bDestroyOnOwnerDath = false;
    this->bDisplayInUI = false;
    this->DeathReapOrder = EReapOrder::OldestFirst;
}

