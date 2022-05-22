#include "FocusableComponent.h"

UFocusableComponent::UFocusableComponent() {
    this->bUseFocusSocket = false;
    this->FocusSocket = TEXT("Focus");
    this->FocusRadius = 130.00f;
}

