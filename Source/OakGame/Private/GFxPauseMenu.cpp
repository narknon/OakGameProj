#include "GFxPauseMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxPauseMenu::OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnResumeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnQuitToDesktopSaveComplete(const FString& SlotName, bool bSuccess) const {
}

void UGFxPauseMenu::OnQuitGameClicked(const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnQuitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnQuitChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnPhotoModeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnNumPlayersChanged(int32 NewNumPlayers) const {
}

void UGFxPauseMenu::OnNewsWidgetClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnMultiplayerDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnLeaveModeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnLeaveChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnDebugMenuClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnConfirmMatchClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnConfirmCharacterClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPauseMenu::OnAchievementsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxPauseMenu::UGFxPauseMenu() {
    this->BlendWeight = 1.00f;
    this->ContentPanel = NULL;
    this->AbandonDestination = NULL;
}

