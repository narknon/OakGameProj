#include "GbxUserWidget.h"
#include "Templates/SubclassOf.h"

class UWidgetAnimation;
class UWidget;

void UGbxUserWidget::SetLabelText(FText LabelText) {
}

void UGbxUserWidget::OnFocusableWidgetUnhovered() {
}

void UGbxUserWidget::OnFocusableWidgetReleased() {
}

void UGbxUserWidget::OnFocusableWidgetPressed() {
}

void UGbxUserWidget::OnFocusableWidgetHovered() {
}

void UGbxUserWidget::OnFocusableWidgetClicked() {
}

bool UGbxUserWidget::IsRegisteredAsFocusableWidget() const {
    return false;
}

bool UGbxUserWidget::IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State) {
    return false;
}

bool UGbxUserWidget::IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State) {
    return false;
}


void UGbxUserWidget::GotoAndStop(const FFrameTime StopTime, const UWidgetAnimation* InAnimation) {
}

void UGbxUserWidget::GetAllChildWidgetsOfClass(TSubclassOf<UWidget> TargetClass, TArray<UWidget*>& OutputArray) {
}

UGbxUserWidget::UGbxUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LabelTextBlock = NULL;
    this->ValueTextBlock = NULL;
    this->SelectedImage = NULL;
    this->bRegisterAsFocusableWidget = false;
    this->MouseFocusBehavior = EGbxFocusableWidgetMouseBehavior::InheritFromOwner;
    this->FocusableWidgetStyleData = NULL;
    this->bNeverCreateMouseFocusButton = false;
    this->MouseFocusButton = NULL;
    this->bFocusOnMenuCreation = false;
    this->AudioDataTable = NULL;
}

