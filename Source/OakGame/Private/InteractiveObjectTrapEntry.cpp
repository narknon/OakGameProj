#include "InteractiveObjectTrapEntry.h"

FInteractiveObjectTrapEntry::FInteractiveObjectTrapEntry() {
    this->TrapActor = NULL;
    this->ActivationType = EInteractiveObjectTrapActivationType::ActivateTrap;
    this->InstructionDelay = 0.00f;
}

