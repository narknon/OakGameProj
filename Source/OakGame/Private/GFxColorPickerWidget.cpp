#include "GFxColorPickerWidget.h"

class UGbxGFxListCell;
class UGbxGFxButton;

void UGFxColorPickerWidget::OnTopColorSelected(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxColorPickerWidget::OnTertiaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxColorPickerWidget::OnSwatchFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxColorPickerWidget::OnSecondaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxColorPickerWidget::OnPrimaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxColorPickerWidget::OnColorFocused(UGbxGFxListCell* ClickedItem) {
}

void UGFxColorPickerWidget::OnBottomColorSelected(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) {
}

UGFxColorPickerWidget::UGFxColorPickerWidget() {
    this->ColorList = NULL;
    this->SelectionsWrapper = NULL;
    this->PrimarySwatch = NULL;
    this->PrimaryLabel = NULL;
    this->SecondarySwatch = NULL;
    this->SecondaryLabel = NULL;
    this->TertiarySwatch = NULL;
    this->TertiaryLabel = NULL;
    this->CurrentSwatch = NULL;
    this->LeftSwatchArrow = NULL;
    this->LeftSwatchArrowHint = NULL;
    this->RightSwatchArrow = NULL;
    this->RightSwatchArrowHint = NULL;
    this->OwningMenu = NULL;
    this->CurrentMode = EColorPickerMode::All;
}

