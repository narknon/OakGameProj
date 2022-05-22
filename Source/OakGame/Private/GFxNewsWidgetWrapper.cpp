#include "GFxNewsWidgetWrapper.h"

class UGbxGFxButton;

void UGFxNewsWidgetWrapper::OnNavigationButtonUnhovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxNewsWidgetWrapper::OnNavigationButtonHovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxNewsWidgetWrapper::OnNavigationButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

UGFxNewsWidgetWrapper::UGFxNewsWidgetWrapper() {
    this->NewsWidgetClip = NULL;
    this->NavLeftButtonClip = NULL;
    this->NavRightButtonClip = NULL;
}

