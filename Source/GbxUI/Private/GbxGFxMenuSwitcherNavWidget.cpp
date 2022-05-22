#include "GbxGFxMenuSwitcherNavWidget.h"

class UGbxGFxButton;

void UGbxGFxMenuSwitcherNavWidget::OnTabClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGbxGFxMenuSwitcherNavWidget::UGbxGFxMenuSwitcherNavWidget() {
    this->PrevTabHintClip = NULL;
    this->NextTabHintClip = NULL;
    this->NavListClip = NULL;
    this->NavType = EGbxGFxMenuSwitchNavWidgetType::Unknown;
}

