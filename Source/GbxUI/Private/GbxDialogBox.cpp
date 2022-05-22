#include "GbxDialogBox.h"

class UGbxListItem;



void UGbxDialogBox::SetHeaderTextFormatArg(const FString& ArgName, const FText& ReplacementText) {
}

void UGbxDialogBox::SetHeaderText(const FText& NewText, bool bClearFormatArgs) {
}

void UGbxDialogBox::SetBodyTextFormatArg(const FString& ArgName, const FText& ReplacementText) {
}

void UGbxDialogBox::SetBodyText(const FText& NewText, bool bClearFormatArgs) {
}

void UGbxDialogBox::OnChoiceClicked(UGbxListItem* ClickedItem) {
}

void UGbxDialogBox::Dismiss() {
}

UGbxDialogBox::UGbxDialogBox() {
    this->bWantsToDismiss = false;
    this->ChoiceList = NULL;
}

