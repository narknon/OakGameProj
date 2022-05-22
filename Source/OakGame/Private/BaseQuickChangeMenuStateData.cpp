#include "BaseQuickChangeMenuStateData.h"

FBaseQuickChangeMenuStateData::FBaseQuickChangeMenuStateData() {
    this->bForceProjectionFXOn = false;
    this->MenuState = EBaseQuickChangeMenuState::CategorySelection;
    this->CustomizationType = NULL;
}

