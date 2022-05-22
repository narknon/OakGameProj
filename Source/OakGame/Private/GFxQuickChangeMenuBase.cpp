#include "GFxQuickChangeMenuBase.h"

class UGbxGFxListCell;
class UGbxGFxButton;

void UGFxQuickChangeMenuBase::OnSelectionListSelectionChanged(UGbxGFxListCell* SelectedItem) const {
}

void UGFxQuickChangeMenuBase::OnSelectionListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const {
}


void UGFxQuickChangeMenuBase::OnMenuListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickChangeMenuBase::OnEmoteLoadoutButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxQuickChangeMenuBase::UGFxQuickChangeMenuBase() {
    this->MainContent = NULL;
    this->TopperText = NULL;
    this->EmoteWheel = NULL;
    this->MenuList = NULL;
    this->SelectionList = NULL;
    this->ProjectionFXWidgetName = TEXT("rightContainer");
    this->MouseCapturePanel = NULL;
    this->EquippedEmoteLabel = NULL;
    this->EmoteToSlot = NULL;
    this->CounterWrapper = NULL;
    this->CounterText = NULL;
    this->CustomizationButtonType = EGbxGFxButtonType::Radio;
    this->MaxRotationSpeed = 15.00f;
    this->MouseMaxRotationSpeed = 10.00f;
    this->MaxSecondsToReachTargetSpeed = 0.25f;
    this->PendingStandInCustomization = NULL;
}

