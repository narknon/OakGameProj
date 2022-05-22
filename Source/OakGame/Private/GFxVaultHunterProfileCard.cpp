#include "GFxVaultHunterProfileCard.h"

UGFxVaultHunterProfileCard::UGFxVaultHunterProfileCard() {
    this->PictureClip = NULL;
    this->PlayerNameClip = NULL;
    this->PlayerStatusClip = NULL;
    this->SkillClip = NULL;
    this->InventoryClip = NULL;
    this->StatsClip = NULL;
    this->MissionNameTextClip = NULL;
    this->CardMode = EGFxVaultHunterProfileCardMode::Unknown;
    this->CurrentView = EGFxVaultHunterProfileCardView::Skill;
    this->bIsOff = false;
}

