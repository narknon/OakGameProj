#include "GFxAreaDiscoveredNotificationWidget.h"

UGFxAreaDiscoveredNotificationWidget::UGFxAreaDiscoveredNotificationWidget() {
    this->bUseNowEnteringMessaging = false;
    this->AreaDiscoveredText = FText::FromString(TEXT("AREA DISCOVERED"));
    this->NowEnteringText = FText::FromString(TEXT("NOW ENTERING"));
    this->TitleTextClip = NULL;
}

