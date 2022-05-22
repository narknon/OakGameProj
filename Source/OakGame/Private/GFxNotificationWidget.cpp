#include "GFxNotificationWidget.h"

class UHUDNotificationAsset;
class UGFxDisplayedNotificationWidget;

void UGFxNotificationWidget::OnWidgetHidden(const UGFxDisplayedNotificationWidget* Widget) const {
}

void UGFxNotificationWidget::OnHUDErrorNotification(const FText& Reason) const {
}

void UGFxNotificationWidget::OnGrenadeThrowFailed(EGrenadeThrowFailureReason FailureReason) const {
}

void UGFxNotificationWidget::DisplayNotificationWithId(UHUDNotificationAsset* Asset, const uint8 NotificationId, const FText& MESSAGE, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately, bool bAbortIfNotImmediatelyActive) const {
}

void UGFxNotificationWidget::DisplayNotification(UHUDNotificationAsset* Asset, const FText& MESSAGE, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately) const {
}

void UGFxNotificationWidget::DisplayError(const FText& MESSAGE) const {
}

void UGFxNotificationWidget::ClearNotifications() const {
}

UGFxNotificationWidget::UGFxNotificationWidget() {
    this->MaxWidgetDisplayTime = 10.00f;
}

