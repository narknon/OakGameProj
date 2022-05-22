#include "GFxOakMainMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxOakMainMenu::OnUploadSaveClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnTrueVaultHunterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnTestMapsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnStoreClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnStartGameClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnStartDLCClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnSplitscreenClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnShiftClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnQuitGameClicked(const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnQuitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnQuitChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnPlayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnOtherButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnNewPlaythroughClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnMultiplayerDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnLoadGameClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnLeaveGroupClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnLanGamesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnEnableLeaguesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnDownloadSaveClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnCreditsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnContinueClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnChoiceMadeTravelToUnreachableDLC(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnChoiceMadeSkipPlayableIntro(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnBehindTheScenesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnBehindTheScenesCategoryClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOakMainMenu::OnBackOutToTitleChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxOakMainMenu::UGFxOakMainMenu() {
    this->DarkenBackgroundMaterial = NULL;
    this->DarkenBackgroundTransitionTime = 1.00f;
    this->MaxRotationSpeed = 15.00f;
    this->MouseMaxRotationSpeed = 10.00f;
    this->MaxSecondsToReachTargetSpeed = 0.25f;
    this->MainMenuContainer = NULL;
    this->MouseCapturePanel = NULL;
    this->CloudSaveProgressDialog = NULL;
}

