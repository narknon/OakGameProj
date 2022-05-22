#include "GFxCSRewardScreenMenu.h"

class UGbxGFxButton;

void UGFxCSRewardScreenMenu::OnPlayNextCharacterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSRewardScreenMenu::OnPlayAgainClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSRewardScreenMenu::OnMainMenuButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSRewardScreenMenu::GoToPuzzleMenu() const {
}

void UGFxCSRewardScreenMenu::GoToMainMenu() const {
}

void UGFxCSRewardScreenMenu::extRefreshNumCompletedPuzzle() const {
}

void UGFxCSRewardScreenMenu::extPuzzleCompletedTextAnimDone() const {
}

void UGFxCSRewardScreenMenu::extOnShowPuzzleRewardDone() const {
}

void UGFxCSRewardScreenMenu::extOnShowBonusDone() const {
}

void UGFxCSRewardScreenMenu::extNumCompletedPuzzleAnimDone() const {
}

UGFxCSRewardScreenMenu::UGFxCSRewardScreenMenu() {
    this->ProgressBarAnimSpeed = 1.00f;
    this->DelayBetweenBonuses = 0.50f;
    this->TextAnimationTime = 0.50f;
    this->LevelData = NULL;
    this->PuzzleCompletedTextPanel = NULL;
    this->MainContentPanel = NULL;
    this->ProgressTextPanel = NULL;
    this->NumCompletedPuzzleTextPanel = NULL;
    this->NumCompletedPuzzleText = NULL;
    this->NumTargetPuzzleText = NULL;
    this->ProgressBar = NULL;
    this->NewCustomizationAnimText = NULL;
    this->AnimRewardPanel = NULL;
    this->CharacterPicture = NULL;
    this->CustomizationPicture = NULL;
    this->PuzzleRewardItem = NULL;
    this->TotalPuzzleRewardItem = NULL;
    this->ButtonList = NULL;
}

