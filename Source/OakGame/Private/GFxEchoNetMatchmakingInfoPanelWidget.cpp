#include "GFxEchoNetMatchmakingInfoPanelWidget.h"

class UGbxGFxButton;

void UGFxEchoNetMatchmakingInfoPanelWidget::OnHeroicModeButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxEchoNetMatchmakingInfoPanelWidget::UGFxEchoNetMatchmakingInfoPanelWidget() {
    this->ContentClip = NULL;
    this->MatchmakingModeNameClip = NULL;
    this->ModeSelectionClip = NULL;
    this->NormalModeButtonClip = NULL;
    this->HeroicModeButtonClip = NULL;
    this->MenuGlyphClip = NULL;
    this->ScrollBarClip = NULL;
    this->ObjectiveDescriptionClip = NULL;
    this->ObjectiveDescriptionMaskClip = NULL;
    this->ButtonStartClip = NULL;
    this->MatchmakingModeLockedClip = NULL;
    this->DisplayedActivityIndex = -1;
    this->bIsShowing = false;
}

