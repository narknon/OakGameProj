#include "GbxCascadingList.h"

class UGbxGridListWidget;
class UGbxListItem;

void UGbxCascadingList::SetActiveList(UGbxGridListWidget* List) {
}

void UGbxCascadingList::PushItems(const TArray<FGbxCascadingListItemData>& Items) {
}

void UGbxCascadingList::Pop() {
}



void UGbxCascadingList::OnItemSelected_Internal(UGbxListItem* Item) {
}

void UGbxCascadingList::OnItemClicked_Internal(UGbxListItem* Item) {
}

bool UGbxCascadingList::HasItems() const {
    return false;
}

int32 UGbxCascadingList::GetStackDepth() const {
    return 0;
}

void UGbxCascadingList::Clear() {
}

UGbxCascadingList::UGbxCascadingList() {
    this->DefaultListItemClass = NULL;
    this->ActiveList = NULL;
}

