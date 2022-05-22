#include "GFxMainAndPauseBaseMenu.h"

class UGbxGFxButton;

void UGFxMainAndPauseBaseMenu::OnSocialCoreClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnNetworkClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnInvitesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnInviteListItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnInviteListClearClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnGraphicsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnGameplayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnControlsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnAudioClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMainAndPauseBaseMenu::OnAccessibilityClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxMainAndPauseBaseMenu::UGFxMainAndPauseBaseMenu() {
    this->FrontendMenuData = NULL;
    this->BehindTheScenesMenuDataReference = NULL;
    this->MenuType = EGFxMainAndPauseMenuType::Unknown;
    this->MenuList = NULL;
    this->FrontendMenu = NULL;
    this->OnGoingMenuTransition = EMenuTransition::None;
    this->bIsMenuLevel = true;
    this->CachedCameraController = NULL;
    this->CachedMenuMapMenuFlow = NULL;
}

