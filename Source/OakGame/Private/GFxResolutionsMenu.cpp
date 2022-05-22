#include "GFxResolutionsMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxResolutionsMenu::OnResolutionItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxResolutionsMenu::OnConfirmNewResolution(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxResolutionsMenu::UGFxResolutionsMenu() {
    this->ContentPanel = NULL;
    this->AlternateBkg = NULL;
    this->ResolutionDlg = NULL;
}

