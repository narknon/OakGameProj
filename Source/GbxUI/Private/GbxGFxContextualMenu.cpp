#include "GbxGFxContextualMenu.h"

class UGbxGFxListCell;
class UGbxGFxButton;

void UGbxGFxContextualMenu::OnSelectionChanged(UGbxGFxListCell* Item) const {
}

void UGbxGFxContextualMenu::OnContextualMenuItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGbxGFxContextualMenu::UGbxGFxContextualMenu() {
    this->ContextualMenu = NULL;
    this->ContentPanel = NULL;
    this->ToolTipsTextField = NULL;
    this->RemoveFriendText = FText::FromString(TEXT("Remove Friend"));
    this->AddShiftFriendText = FText::FromString(TEXT("Add SHiFT Friend"));
    this->RemoveShiftFriendText = FText::FromString(TEXT("Remove SHiFT Friend"));
    this->BlockShiftUserText = FText::FromString(TEXT("Block Player via SHiFT"));
    this->UnblockShiftUserText = FText::FromString(TEXT("Unblock Player via SHiFT"));
    this->ReportShiftPlayerText = FText::FromString(TEXT("Report SHiFT Player"));
}

