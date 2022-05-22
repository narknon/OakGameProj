#include "DebugMenuCategoryList.h"

class UGbxListItem;
class UGbxUserWidget;

void UDebugMenuCategoryList::RemoveAllItems() {
}

void UDebugMenuCategoryList::OnExecItemActivated(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UDebugMenuCategoryList::OnCommandItemSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

UGbxListItem* UDebugMenuCategoryList::AddExecItem(FText Label, FText Description, const FString& Command) {
    return NULL;
}

void UDebugMenuCategoryList::AddConfigExecItems(const FName& CategoryName) {
}

UGbxListItem* UDebugMenuCategoryList::AddCommandItem(FText Label, FText Description, FGbxUserWidgetDelegate OnActivate) {
    return NULL;
}

UDebugMenuCategoryList::UDebugMenuCategoryList() {
    this->CommandList = NULL;
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->CommandText = NULL;
}

