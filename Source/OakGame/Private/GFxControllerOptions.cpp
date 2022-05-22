#include "GFxControllerOptions.h"

class UGbxGFxListItemSpinner;
class UGbxGFxButton;
class UGbxGFxListCell;

void UGFxControllerOptions::OnWalkingControlSchemeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControllerOptions::OnRevertToDefaultClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxControllerOptions::OnJoystickWalkingSchemeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControllerOptions::OnJoystickDrivingSchemeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControllerOptions::OnDrivingControlSchemeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControllerOptions::OnCustomizeControlsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxControllerOptions::OnControlSchemeButtonFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxControllerOptions::OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem) {
}

void UGFxControllerOptions::OnChangedColumnFocus(EBindingType BindingType) {
}

UGFxControllerOptions::UGFxControllerOptions() {
    this->PreviousSubmenuHint = NULL;
    this->NextSubmenuHint = NULL;
    this->PreviousControlSchemeHint = NULL;
    this->NextControlSchemeHint = NULL;
    this->WalkingRebindContext = NULL;
    this->DrivingRebindContext = NULL;
    this->CommonRebindContext = NULL;
    this->WalkingThumbstickSchemeDescription = NULL;
    this->WalkingButtonSchemeDescription = NULL;
    this->DrivingThumbstickSchemeDescription = NULL;
    this->DrivingButtonSchemeDescription = NULL;
}

