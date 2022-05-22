#include "GFxInventoryItemWidget.h"

UGFxInventoryItemWidget::UGFxInventoryItemWidget() {
    this->bIsNewItemWidgetContent = false;
    this->ButtonHelpClip = NULL;
    this->DisabledReason = EOakInventoryItemWidgetDisabledReason::NotDisabled;
    this->bEquippingToThis = false;
    this->SlotData = NULL;
    this->bAnchorLocationValid = false;
    this->bUseCosmeticLabel = false;
    this->bAppearsDisabled = false;
    this->bUseTrashButtonStates = false;
}

