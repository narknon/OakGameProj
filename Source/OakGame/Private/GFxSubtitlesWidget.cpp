#include "GFxSubtitlesWidget.h"

UGFxSubtitlesWidget::UGFxSubtitlesWidget() {
    this->ClosedCaptionLifetime = 2.50f;
    this->MaxTextScalingForLargestBackground = 180.00f;
    this->SubtitleField = NULL;
    this->SubtitleBackground = NULL;
    this->CurrentSubtitleLayoutType = ESubtitleLayoutType::None;
    this->ClosedCaptioningContainer = NULL;
    this->CurrentSubtitleID = 0;
    this->bStopAfterCurrentSubtitle = false;
    this->bSubtitleChangePending = false;
    this->SubtitleLifetime = -1.00f;
}

