#include "GFxFriendsInAreaListMenu.h"

class UGbxGFxListCell;

void UGFxFriendsInAreaListMenu::OnFriendSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxFriendsInAreaListMenu::OnFriendClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxFriendsInAreaListMenu::UGFxFriendsInAreaListMenu() {
    this->FriendList = NULL;
    this->HeaderLabel = NULL;
    this->LocationLabel = NULL;
    this->HeaderFriendCount = NULL;
}

