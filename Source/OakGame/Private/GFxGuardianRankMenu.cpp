#include "GFxGuardianRankMenu.h"

class UGuardianRankPerkData;
class UGbxGFxButton;

void UGFxGuardianRankMenu::OnRewardCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGuardianRankMenu::OnRewardCellClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGuardianRankMenu::OnRedeemTokenButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGuardianRankMenu::OnRedeemTokenButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGuardianRankMenu::OnPerkSlotFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGuardianRankMenu::HandleGuardianTokensAdded(const int32 TokensAdded) const {
}

void UGFxGuardianRankMenu::HandleGuardianRankPerkEnableChanged(const UGuardianRankPerkData* ChangedPerk, bool bEnabled) const {
}

void UGFxGuardianRankMenu::HandleGuardianRankChanged(const int32 OldGuardianRank, const int32 NewGuardianRank) const {
}

void UGFxGuardianRankMenu::HandleGuardianPerksUpdated() const {
}

void UGFxGuardianRankMenu::HandleGuardianExperienceAdded(const int32 Amount) const {
}

void UGFxGuardianRankMenu::ExtOnIntroAnimationComplete() const {
}

UGFxGuardianRankMenu::UGFxGuardianRankMenu() {
    this->PerkPanel = NULL;
    this->InfoPanel = NULL;
    this->InfoPanelRewardStats = NULL;
    this->GuardianRankBar = NULL;
    this->RedeemTokenButton = NULL;
    this->EnforcerStatsList = NULL;
    this->SurvivorStatsList = NULL;
    this->HunterStatsList = NULL;
    this->PerkSlots = NULL;
    this->EnforcerPerksBar = NULL;
    this->SurvivorPerksBar = NULL;
    this->HunterPerksBar = NULL;
    this->CurrentFocusedRankPerk = NULL;
    this->CurrentFocusedRankCell = NULL;
    this->CurrentlySelectedRewardStatCell = NULL;
    this->HintAccept = FText::FromString(TEXT("Accept"));
    this->ChunksPerPageFullScreen = 6;
    this->ChunksPerPageSplitScreen = 3;
    this->CurrentMenuState = EGFxGuardianRankMenuState::None;
}

