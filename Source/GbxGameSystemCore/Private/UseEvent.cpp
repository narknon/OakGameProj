#include "UseEvent.h"

FUseEvent::FUseEvent() {
    this->UserController = NULL;
    this->UsedComponent = NULL;
    this->UseType = EUsabilityType::Primary;
    this->bWasHeld = false;
}

