#include "GFxPlaythroughSelectionMenu.h"

class UGbxGFxDialogBox;
class UGbxGFxButton;

void UGFxPlaythroughSelectionMenu::OnResetProgressChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPlaythroughSelectionMenu::OnPlaythroughModeCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPlaythroughSelectionMenu::OnPlaythroughModeCellClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPlaythroughSelectionMenu::extOnUITransitionCompleted() const {
}

void UGFxPlaythroughSelectionMenu::extOnMenuHid() const {
}

UGFxPlaythroughSelectionMenu::UGFxPlaythroughSelectionMenu() {
    this->SelectionContainer = NULL;
    this->ToolTipPane = NULL;
    this->TitleText = NULL;
    this->ModeDescriptionText = NULL;
    this->ModeTitleText = NULL;
    this->ToolTipTitleText = NULL;
    this->ToolTipDescText = NULL;
    this->AcceptHint = NULL;
    this->ResetProgressHint = NULL;
    this->ModesList = NULL;
    this->FocusedObjectBeforeLobbyWidget = NULL;
    this->CachedPlaythroughNum = -1;
}

