#include "GFxLeaguesMenu.h"

class UGbxGFxButton;

void UGFxLeaguesMenu::OnOverviewBigButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLeaguesMenu::OnChestButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLeaguesMenu::OnChestButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLeaguesMenu::OnChallengesBigButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLeaguesMenu::OnChallengeCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxLeaguesMenu::UGFxLeaguesMenu() {
    this->OverviewBigButton = NULL;
    this->ChallengesBigButton = NULL;
    this->ChallengesBigButtonLeagueField = NULL;
    this->ChallengesBigButtonProgressField = NULL;
    this->LeftNavButton = NULL;
    this->RightNavButton = NULL;
    this->MainPanel = NULL;
    this->LeagueTitleField = NULL;
    this->LeagueOverviewSubtitle = NULL;
    this->LeagueDetailsScrollableText = NULL;
    this->LeagueDetailsScrollBar = NULL;
    this->LeagueDetailsScrollMask = NULL;
    this->MasterChallengeRewardBar = NULL;
    this->ChestContainer = NULL;
    this->ChallengesSubtitle = NULL;
    this->ChallengesList = NULL;
    this->ChallengesListScrollBar = NULL;
    this->RewardUnlocked = NULL;
    this->RewardUnlockedField = NULL;
    this->RewardUnlockedFieldShadow = NULL;
    this->RewardUnlockedSubtitle = NULL;
    this->DetailsPanel = NULL;
    this->OwnerChallengesComponent = NULL;
    this->CurrentMasterLeagueChallenge = NULL;
    this->OriginalWeaponSkin = NULL;
    this->PreviewedWeaponSkin = NULL;
    this->CurrentLeaguePatchData = NULL;
}

