#include "GFxLobbyWidget.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;
class UGbxGFxListCell;
class UObject;
class UGbxGFxObject;

void UGFxLobbyWidget::OnSettingsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnSelectionChanged(UGbxGFxListCell* Item) {
}

void UGFxLobbyWidget::OnRecommendedFriendUnhovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnRecommendedFriendHovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnRecommendedFriendClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnQuitChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnPlayerOptionSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnPlayerItemChanged(UGbxGFxListCell* Item) {
}

void UGFxLobbyWidget::OnMenuStackMenuActivated(UObject* ActiveMenu) {
}

void UGFxLobbyWidget::OnLobbyWidgetHovered(UGbxGFxObject* HoveredObject, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnContextMenuSelectionChanged(UGbxGFxListCell* Item) {
}

void UGFxLobbyWidget::OnAddFriendsUnhovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnAddFriendsHovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnAddFriendsFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxLobbyWidget::OnAddFriendsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

UGFxLobbyWidget::UGFxLobbyWidget() {
    this->RecommendedFriendsPopupTimeout = 1.00f;
    this->TimeRequiredToReinvite = 7.00f;
    this->PlayerList = NULL;
    this->LobbyWidgetHint = NULL;
    this->AddFriendsButton = NULL;
    this->SettingsButton = NULL;
    this->SettingsPanel = NULL;
    this->FocusManager = NULL;
}

