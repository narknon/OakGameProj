#include "GFxEchoNetMailboxMenu.h"

class UGbxGFxDialogBox;
class AActor;
class UGbxGFxObject;
class UInventoryCategoryData;

void UGFxEchoNetMailboxMenu::OnUpdateMailCell(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnUpdateFriendCell(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnSendItemCardReady() const {
}

void UGFxEchoNetMailboxMenu::OnReceiveItemCardReady() const {
}

void UGFxEchoNetMailboxMenu::OnMailCellSelected(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnMailCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnItemThumbnailLoaded() const {
}

void UGFxEchoNetMailboxMenu::OnInventoryListChanged() const {
}

void UGFxEchoNetMailboxMenu::OnFriendThumbnailLoaded() const {
}

void UGFxEchoNetMailboxMenu::OnFriendCellSelected(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnFriendCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxEchoNetMailboxMenu::OnDialogDismissed(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoNetMailboxMenu::OnBackpackItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxEchoNetMailboxMenu::OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

FOakThumbnailManagerIcon UGFxEchoNetMailboxMenu::GetItemRenderBitmapData(AActor* ItemActor, const UInventoryCategoryData* ItemCategory) const {
    return FOakThumbnailManagerIcon{};
}

void UGFxEchoNetMailboxMenu::extOnHideItemComplete() const {
}

UGFxEchoNetMailboxMenu::UGFxEchoNetMailboxMenu() {
    this->ItemCardMovie = NULL;
    this->GoldenKeyResourceData = NULL;
    this->MailboxRoot = NULL;
    this->Mailbox = NULL;
    this->MailListHeaderTextClip = NULL;
    this->MailListCountClip = NULL;
    this->MailListSortTextClip = NULL;
    this->MailList = NULL;
    this->MailScrollBar = NULL;
    this->ReceiveMailItemCard = NULL;
    this->SendMailItemCard = NULL;
    this->FriendListContainer = NULL;
    this->FriendsListHeader = NULL;
    this->FriendList = NULL;
    this->FriendScrollBar = NULL;
    this->MessagePanel = NULL;
    this->MessagePanelSenderIcon = NULL;
    this->MessagePanelPlatformIcon = NULL;
    this->MessagePanelSubject = NULL;
    this->MessagePanelSender = NULL;
    this->MessagePanelBody = NULL;
    this->MessagePanelBodyScrollBar = NULL;
    this->MessagePanelBodyMask = NULL;
    this->MessagePanelItem = NULL;
    this->BackpackClip = NULL;
    this->BackpackHeaderTextClip = NULL;
    this->BackpackFilterTextClip = NULL;
    this->BackpackSortTextClip = NULL;
    this->BackpackCapacityHeaderTextClip = NULL;
    this->BackpackCapacityCountTextClip = NULL;
    this->GoldenKeyCountTextClip = NULL;
    this->CenterScreenNotification = NULL;
    this->CenterScreenHeaderTextField = NULL;
    this->CenterScreenBodyTextField = NULL;
    this->NoMailTextField = NULL;
    this->CenterScreenConfirmHint = NULL;
    this->CenterScreenCancelHint = NULL;
    this->MailListPrevSortHint = NULL;
    this->MailListNextSortHint = NULL;
    this->BackpackPrevSortHint = NULL;
    this->BackpackNextSortHint = NULL;
    this->MessagePanelAcceptHint = NULL;
    this->MessagePanelDeclineHint = NULL;
    this->CurrentlyProcessingMailItem = NULL;
    this->IconManager = NULL;
    this->FriendThumbnailManager = NULL;
    this->ReceivedMailGearItem = NULL;
    this->ReceivedMailItemCategory = NULL;
    this->ReceiveItemCardDisplayedBalanceState = NULL;
    this->SendItemCardDisplayedBalanceState = NULL;
    this->ItemToSend = NULL;
    this->ItemRecipient = NULL;
    this->MailSentStatData = NULL;
}

