#include "GFxBaseQuickChangeMenuItem.h"

UGFxBaseQuickChangeMenuItem::UGFxBaseQuickChangeMenuItem() {
    this->AssociatedCustomizationData = NULL;
    this->ItemIcon = NULL;
    this->NewIcon = NULL;
    this->ItemNameFieldHighlighted = NULL;
    this->ItemDescriptionField = NULL;
    this->ItemDescriptionFieldHighlighted = NULL;
    this->EridiumCounter = NULL;
    this->MenuState = EBaseQuickChangeMenuState::CategorySelection;
}

