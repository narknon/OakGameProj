#include "GFxVaultHunterProfileCardPlayerStatusWidget.h"

class UGbxGFxListCell;

void UGFxVaultHunterProfileCardPlayerStatusWidget::OnActivityCellClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) {
}

UGFxVaultHunterProfileCardPlayerStatusWidget::UGFxVaultHunterProfileCardPlayerStatusWidget() {
    this->StatusWrapperClip = NULL;
    this->LookingForHelpTextClip = NULL;
    this->StatusTextClip = NULL;
    this->StatusIconClip = NULL;
    this->ChangeStatusWrapperClip = NULL;
    this->ChangeHunterStatusClip = NULL;
    this->ToggleHelpHintClip = NULL;
    this->UpdateStatusHintClip = NULL;
    this->bCurrentLookingForHelp = false;
    this->bCurrentHasStatus = false;
}

