#include "GFxEchoNetRosterMenu.h"

class UGbxGFxListCell;
class UGbxGFxButton;

void UGFxEchoNetRosterMenu::OnSelectedPlayerChanged(UGbxGFxListCell* Item) const {
}

void UGFxEchoNetRosterMenu::OnRecentPlayerSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoNetRosterMenu::OnFriendSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoNetRosterMenu::OnFriendFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxEchoNetRosterMenu::UGFxEchoNetRosterMenu() {
    this->ItemsPerpageFullScreen = 24;
    this->ItemsPerpageSplitScreen = 9;
    this->SplitScreenFirstExternalIndex = 9;
    this->CellVertSpacing = 3.00f;
    this->CellHorzSpacing = -55.00f;
    this->ContextMenuQuadraticFactor = 0.00f;
    this->InGameRosterCellName = TEXT("BTN_EchoNet_Player_InGame");
    this->OnlineRosterCellName = TEXT("BTN_EchoNet_Player_InGame");
    this->OfflineRosterCellName = TEXT("BTN_EchoNet_Player_InGame");
    this->EmptyRosterCellName = TEXT("BTN_EchoNet_Player_InGame");
    this->InputAction_ToggleVaultHunterView = TEXT("GbxMenu_RosterToggleVHView");
    this->RosterGrid = NULL;
    this->MenuPagerTextClip = NULL;
    this->InternalWrapper = NULL;
    this->ScreenTitle = NULL;
    this->FriendsNum = NULL;
    this->MenuFilter = NULL;
    this->LeftTabHint = NULL;
    this->RightTabHint = NULL;
    this->LeftPageHint = NULL;
    this->RightPageHint = NULL;
    this->MenuDescriptionTextClip = NULL;
    this->VaultHunterStatusClip = NULL;
    this->ChangeVaultHunterViewHintClip = NULL;
    this->ViewedPlayerVaultHunterProfileCard = NULL;
    this->MyVaultHunterProfileCard = NULL;
    this->CurrentPage = 0;
    this->LastPageIndex = 0;
    this->bPendingPopulateFriends = false;
    this->bPendingPopulateRecentPlayers = false;
    this->SavedSelectedIndex = -1;
    this->SavedCurrentPage = -1;
    this->TargetPC = NULL;
    this->PlayerDetailsMenuData = NULL;
    this->CurrentProfileView = EGFxVaultHunterProfileCardView::Skill;
}

