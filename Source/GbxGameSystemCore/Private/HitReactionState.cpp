#include "HitReactionState.h"

FHitReactionState::FHitReactionState() {
    this->HitReactionData = NULL;
    this->BackupDeathTag = NULL;
    this->DefaultDeathAction = NULL;
    this->bCensorDeaths = false;
    this->CurrHitReactionData = NULL;
    this->DamageComp = NULL;
    this->DodgeComp = NULL;
    this->ActionComp = NULL;
    this->BrainComp = NULL;
    this->DeathOverride = NULL;
    this->ActiveTag = NULL;
    this->SoundCharacter = NULL;
}

