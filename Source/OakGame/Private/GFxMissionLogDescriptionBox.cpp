#include "GFxMissionLogDescriptionBox.h"

UGFxMissionLogDescriptionBox::UGFxMissionLogDescriptionBox() {
    this->ActiveMissionIconClip = NULL;
    this->InfoPanelLabelClip = NULL;
    this->InfoPanelSecondaryLabelClip = NULL;
    this->ObjectiveList = NULL;
    this->DescriptionSlider = NULL;
    this->ReplayAudioHint = NULL;
    this->MissionTimerClip = NULL;
    this->DescriptionScrollingBoxClip = NULL;
    this->DescriptionScrollingBoxScrollbarClip = NULL;
    this->DescriptionScrollingBoxMaskClip = NULL;
    this->bIsVisible = true;
    this->PromptClipReplay = FText::FromString(TEXT("Play Audio"));
}

