#include "OakAbilityDebugMenuCascadingList.h"

class UGbxGridListWidget;
class UGbxListItem;

void UOakAbilityDebugMenuCascadingList::SetActiveList(UGbxGridListWidget* List) {
}

void UOakAbilityDebugMenuCascadingList::OnItemSelected_Internal(UGbxListItem* Item) {
}

void UOakAbilityDebugMenuCascadingList::OnItemClicked_Internal(UGbxListItem* Item) {
}

UOakAbilityDebugMenuCascadingList::UOakAbilityDebugMenuCascadingList() {
    this->DefaultListItemClass = NULL;
    this->ActiveList = NULL;
}

