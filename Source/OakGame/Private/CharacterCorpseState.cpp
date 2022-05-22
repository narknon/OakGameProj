#include "CharacterCorpseState.h"

FCharacterCorpseState::FCharacterCorpseState() {
    this->bEnableCorpseCleanup = false;
    this->bShouldTearOff = false;
    this->bOverrideVisibleCorpseRemovalTime = false;
    this->OverrideVisibleCorpseRemovalTime = 0.00f;
    this->ContactWithVehiclesTime = 0.00f;
}

