#include "GFxServerBrowserMenu.h"

class UGbxGFxDialogBox;
class UGbxGFxListCell;
class UGbxGFxButton;

void UGFxServerBrowserMenu::OnSessionCellSelected(UGbxGFxListCell* Item) const {
}

void UGFxServerBrowserMenu::OnServerSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxServerBrowserMenu::OnRefreshSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxServerBrowserMenu::OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxServerBrowserMenu::OnBackClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxServerBrowserMenu::UGFxServerBrowserMenu() {
    this->bIsLanBrowser = true;
    this->GamesFoundLabel = NULL;
    this->SearchResultPanel = NULL;
    this->SearchResultPanelLabel = NULL;
    this->ContentPanel = NULL;
    this->SortCriteriaLabel = NULL;
    this->HintSortCriteria = NULL;
    this->HintSortingOrder = NULL;
    this->FilterHint = NULL;
    this->MenuPagerTextClip = NULL;
}

