#include "CoverClientData.h"

FCoverClientData::FCoverClientData() {
    this->Style = NULL;
    this->Slot = NULL;
    this->DesiredState = ECoverUserState::NotInCover;
    this->bFlanked = false;
}

