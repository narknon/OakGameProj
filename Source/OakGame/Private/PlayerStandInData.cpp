#include "PlayerStandInData.h"

UPlayerStandInData::UPlayerStandInData() {
    this->StandInBlueprint = NULL;
    this->SkillScreenStandInBlueprint = NULL;
    this->StandInAnimBlueprint = NULL;
    this->FrontendAnimBlueprint = NULL;
    this->CharacterInspectCameraHeightOffset = 0.00f;
    this->CharacterInspectCameraDepthOffset = 0.00f;
    this->PrimaryLobbyStandInCameraHeightOffset = 0.00f;
    this->PrimaryLobbyStandInCameraDepthOffset = 0.00f;
    this->DelayBeforeMainMenuFlourishAnimation = 2.00f;
    this->FrontendWeaponBalanceWeaponData = NULL;
}

