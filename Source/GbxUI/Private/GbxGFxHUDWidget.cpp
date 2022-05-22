#include "GbxGFxHUDWidget.h"

void UGbxGFxHUDWidget::extInitAnimationFinished() const {
}

void UGbxGFxHUDWidget::extHideAnimationFinished() const {
}

UGbxGFxHUDWidget::UGbxGFxHUDWidget() {
    this->AnchorType = EGFxHUDWidgetAnchorType::Viewport;
    this->MaxContextSensitivePromptTime = 0.50f;
    this->MaxTimeUntilStopAdvancing = 2.00f;
    this->ShowFrameName = TEXT("show");
    this->HideFrameName = TEXT("hide");
    this->OnFrameName = TEXT("on");
    this->OffFrameName = TEXT("off");
    this->ContextSensitivePrompt = NULL;
    this->IconTransitionWrapper = NULL;
    this->InitializationClip = NULL;
    this->bDynamicallyLoaded = false;
}

