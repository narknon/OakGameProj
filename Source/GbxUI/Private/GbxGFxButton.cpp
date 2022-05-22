#include "GbxGFxButton.h"

void UGbxGFxButton::SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh) {
}

void UGbxGFxButton::SetLabelText(const FText& Text, bool bForceUpdate) {
}

void UGbxGFxButton::SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh) {
}

void UGbxGFxButton::SetButtonType(EGbxGFxButtonType InButtonType) {
}

void UGbxGFxButton::RefreshView(EGbxFocusableWidgetState PrevState) {
}


bool UGbxGFxButton::IsRegisteredAsFocusableWidget() const {
    return false;
}

bool UGbxGFxButton::IsLocked() const {
    return false;
}

bool UGbxGFxButton::IsFocusableWidgetStateUp(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxGFxButton::IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxGFxButton::IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxGFxButton::IsFocusableWidgetStateDown(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxGFxButton::IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxGFxButton::IsChecked() const {
    return false;
}

EGbxGFxButtonLockedState UGbxGFxButton::GetLockedState() const {
    return EGbxGFxButtonLockedState::Unlocked;
}

EGbxGFxButtonCheckedState UGbxGFxButton::GetCheckedState() const {
    return EGbxGFxButtonCheckedState::Unchecked;
}

EGbxGFxButtonType UGbxGFxButton::GetButtonType() const {
    return EGbxGFxButtonType::Standard;
}

UGbxGFxButton::UGbxGFxButton() {
    this->MouseFocusBehavior = EGbxFocusableWidgetMouseBehavior::InheritFromOwner;
    this->Label = NULL;
    this->AppearanceFrameClip = NULL;
    this->TimeButtonHeld = 0.00f;
    this->bHasSentHeldEvent = false;
    this->bWantsHeld = false;
    this->bIgnoreNextClick = false;
    this->bNewIndicatorUsesLabels = false;
}

