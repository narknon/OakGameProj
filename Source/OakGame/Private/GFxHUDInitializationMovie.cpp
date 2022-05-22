#include "GFxHUDInitializationMovie.h"

void UGFxHUDInitializationMovie::extInitAnimationTrigger() const {
}

void UGFxHUDInitializationMovie::extInitAnimationComplete() const {
}

UGFxHUDInitializationMovie::UGFxHUDInitializationMovie() {
    this->InitializationAnims = NULL;
    this->InitializationText = NULL;
    this->WidgetLabel = NULL;
    this->QueuedWidgetTarget = EHUDInitAnimWidgetTarget::None;
}

