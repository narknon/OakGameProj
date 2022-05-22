#include "GFxNewGameSettings.h"

class UGbxGFxButton;
class UGbxGFxListCell;

void UGFxNewGameSettings::OnStartButtonClicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::OnOption2Focused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::OnOption2Clicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::OnOption1Focused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::OnOption1Clicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::OnChoiceListItemSelected(UGbxGFxListCell* Item) const {
}

void UGFxNewGameSettings::OnChoiceListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewGameSettings::extUpdateLayout() const {
}

void UGFxNewGameSettings::extOnUITransitionCompleted() const {
}

void UGFxNewGameSettings::extOnStartGame() const {
}

void UGFxNewGameSettings::extOnMenuHid() const {
}

void UGFxNewGameSettings::extClearTipsLabel() const {
}

UGFxNewGameSettings::UGFxNewGameSettings() {
    this->StartFromNewGameText = FText::FromString(TEXT("Begin the game at the start of the Main Story."));
    this->OptionPannel = NULL;
    this->CategoryText = NULL;
    this->OptionButton1 = NULL;
    this->OptionButton2 = NULL;
    this->TipsLabel = NULL;
    this->StartButton = NULL;
    this->StartButtonHint = NULL;
    this->TooltipTitle = NULL;
    this->ToolTipText = NULL;
    this->ChoiceListClip = NULL;
}

