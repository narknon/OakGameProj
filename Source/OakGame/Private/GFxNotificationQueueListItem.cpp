#include "GFxNotificationQueueListItem.h"

FGFxNotificationQueueListItem::FGFxNotificationQueueListItem() {
    this->AssetData = NULL;
    this->ActiveWidgetContent = NULL;
    this->Priority = 0;
    this->TimeoutTimeRemaining = 0.00f;
    this->bCurrentlyDisplayed = false;
    this->NotificationId = 0;
}

