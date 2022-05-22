#include "ManagedWidget.h"

UManagedWidget::UManagedWidget() {
    this->IntroAnimation = NULL;
    this->IdleAnimation = NULL;
    this->ExitAnimation = NULL;
    this->WidgetType = EManagedWidgetType::Basic;
}

