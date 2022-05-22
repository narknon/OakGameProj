#include "GFxMultiplayerMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxMultiplayerMenu::OnSwitchProfileClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnSplitscreenControllerSelected(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnSplitscreenClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnShiftClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnNetworkOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnManagePartyClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMultiplayerMenu::OnLANBrowserClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxMultiplayerMenu::UGFxMultiplayerMenu() {
    this->ContentPanel = NULL;
    this->LANGamesItem = NULL;
    this->OnlineGamesItem = NULL;
    this->NetworkOptionsItem = NULL;
    this->AlternateBkg = NULL;
}

