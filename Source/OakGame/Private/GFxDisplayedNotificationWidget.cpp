#include "GFxDisplayedNotificationWidget.h"

void UGFxDisplayedNotificationWidget::OnHideComplete() const {
}

void UGFxDisplayedNotificationWidget::LoadLinkedMenuData() const {
}

UGFxDisplayedNotificationWidget::UGFxDisplayedNotificationWidget() {
    this->LinkedMenuData = NULL;
    this->CachedOakHUD = NULL;
    this->HintTextBox = NULL;
    this->MenuName = TEXT("Linked Menu");
    this->HintTextID = TEXT("HintText");
}

