#include "GbxGFxDialogBox.h"

class UGbxGFxButton;

void UGbxGFxDialogBox::SetInputTextFormatArg(const FString& ArgName, const FText& ReplacementText) const {
}

void UGbxGFxDialogBox::SetInputText(const FText& NewText, bool bClearFormatArgs) const {
}

void UGbxGFxDialogBox::SetHeaderTextFormatArg(const FString& ArgName, const FText& ReplacementText) const {
}

void UGbxGFxDialogBox::SetHeaderText(const FText& NewText, bool bClearFormatArgs) const {
}

void UGbxGFxDialogBox::SetBodyTextFormatArg(const FString& ArgName, const FText& ReplacementText) const {
}

void UGbxGFxDialogBox::SetBodyText(const FText& NewText, bool bClearFormatArgs) const {
}

void UGbxGFxDialogBox::OnDialogBoxItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGbxGFxDialogBox::Dismiss() const {
}

UGbxGFxDialogBox::UGbxGFxDialogBox() {
    this->HeaderTextField = NULL;
    this->BodyTextField = NULL;
    this->InputTextField = NULL;
    this->ContentPanel = NULL;
    this->DialogBoxBackground = NULL;
    this->PlayerNameTextField = NULL;
    this->ProcessingIcon = NULL;
    this->InitialChoice = -1;
}

