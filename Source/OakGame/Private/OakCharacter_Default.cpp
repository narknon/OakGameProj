#include "OakCharacter_Default.h"

void AOakCharacter_Default::OnStartInjured_Common() {
}


AOakCharacter_Default::AOakCharacter_Default() {
    this->Stance = NULL;
    this->GbxDialog = NULL;
    this->DeathDialogEvent = NULL;
    this->DeathVocalizationTag = NULL;
}

