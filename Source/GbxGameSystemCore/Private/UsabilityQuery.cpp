#include "UsabilityQuery.h"

FUsabilityQuery::FUsabilityQuery() {
    this->UserController = NULL;
    this->UsedComponent = NULL;
    this->UseType = EUsabilityType::Primary;
    this->bUseHeld = false;
}

