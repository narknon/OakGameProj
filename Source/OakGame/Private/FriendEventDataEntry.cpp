#include "FriendEventDataEntry.h"

FFriendEventDataEntry::FFriendEventDataEntry() {
    this->FriendEventType = EFriendEventType::None;
    this->Priority = EFriendEventPriority::Highest;
    this->Ordinal = 0;
    this->ContainsSpoiler = false;
    this->BroadcastToSingleFriend = false;
    this->DisplayNotificationOnFriendHUD = false;
    this->bAlwaysShowNotification = false;
    this->DisplayEventOnTimeline = false;
}

