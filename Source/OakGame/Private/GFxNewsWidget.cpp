#include "GFxNewsWidget.h"

void UGFxNewsWidget::OnUnhoverTimeout() {
}

UGFxNewsWidget::UGFxNewsWidget() {
    this->bIsCurrentlyHovered = false;
    this->bIsCurrentlyFocused = false;
    this->UnhoverTimeoutSeconds = 0.20f;
    this->bIsHoveredByArrowButton = false;
    this->bIsHoveredBySelf = false;
    this->NavigationDots = NULL;
    this->NewsContainer = NULL;
    this->NewsHint = NULL;
    this->bVisibilityClipIsVisible = false;
}

