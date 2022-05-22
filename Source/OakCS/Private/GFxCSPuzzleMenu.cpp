#include "GFxCSPuzzleMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxCSPuzzleMenu::OnSubmitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSPuzzleMenu::OnQuitConfirmed(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSPuzzleMenu::OnQuickPassClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSPuzzleMenu::OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSPuzzleMenu::OnConfirmQuickPass(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSPuzzleMenu::GoToRewardScreenMenu() const {
}

void UGFxCSPuzzleMenu::GoToMainMenu() const {
}

void UGFxCSPuzzleMenu::extTokenTileTurnedOn() const {
}

void UGFxCSPuzzleMenu::extTokenTileTurnedOff() const {
}

UGFxCSPuzzleMenu::UGFxCSPuzzleMenu() {
    this->RequestingPuzzleDialog = NULL;
    this->PuzzleFeedbackManager = NULL;
    this->PuzzleIntroManager = NULL;
    this->Puzzle = NULL;
    this->ParScoreContainer = NULL;
    this->ParScoreText = NULL;
    this->CurrentScoreContainer = NULL;
    this->CurrentScoreText = NULL;
    this->HighScoreContainer = NULL;
    this->HighScoreText = NULL;
    this->DebugContainer = NULL;
    this->DebugCurrentScoreText = NULL;
    this->DebugRealCurrentScoreText = NULL;
    this->DebugParScoreText = NULL;
    this->DebugRealParScoreText = NULL;
    this->DebugHighestScoreText = NULL;
    this->DebugRealHighestScoreText = NULL;
    this->DebugNbTokenLeftText = NULL;
    this->DebugMatchingTileValueText = NULL;
    this->DebugPerfectAlignmentModifierText = NULL;
    this->DebugPuzzleId = NULL;
    this->DebugTokenPos = NULL;
    this->ParScoreTextFeedback = NULL;
    this->ProgressBar = NULL;
    this->ProgressBarBonusScoreContainer = NULL;
    this->ProgressBarBonusScoreText = NULL;
    this->QuitButton = NULL;
    this->QuickPassButton = NULL;
    this->QuickPassButtonTxt = NULL;
    this->SubmitButton = NULL;
    this->SubmitButtonContainer = NULL;
    this->ProgressBarContainer = NULL;
    this->NotificationContainer = NULL;
    this->NotificationText = NULL;
    this->BonusScoreContainer = NULL;
    this->BonusScoreText = NULL;
    this->NumTokensPanel = NULL;
    this->NumTokensContainer = NULL;
    this->NumTokensText = NULL;
    this->NumTotalTokensText = NULL;
}

