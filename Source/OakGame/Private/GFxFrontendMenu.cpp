#include "GFxFrontendMenu.h"

class UObject;
class UGbxGFxButton;

void UGFxFrontendMenu::OnMenuStackChanged(UObject* ActiveMenu) const {
}

void UGFxFrontendMenu::OnLobbyWidgetAddFriendsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxFrontendMenu::UGFxFrontendMenu() {
    this->NewsImageNotLoadedTexture = NULL;
    this->NewsWidgetImageMovie = NULL;
    this->LobbyWidgetFocusInspectionDelay = 0.70f;
    this->TintScale = 200.00f;
    this->TintOffset = -500.00f;
    this->CachedMainMenu = NULL;
    this->LobbyWidgetFocusedClip = NULL;
    this->LobbyWidgetTintClip = NULL;
    this->LobbyWrapperClip = NULL;
    this->LobbyWidgetClip = NULL;
    this->LastFocusedLobbyWidgetPlayerItem = NULL;
    this->NewsWidgetFadeClip = NULL;
    this->NewsWidgetVisibilityClip = NULL;
    this->NewsWrapperClip = NULL;
    this->NewsWidgetClip = NULL;
    this->MatchmakingWidgetClip = NULL;
    this->bCurLobbyWidgetFocusedState = false;
    this->bLobbyWidgetVisibilityOverride = true;
    this->bNewsWidgetVisibilityOverride = true;
    this->CurrentMenuMode = EGFxFrontendMenuMode::MainMenu;
    this->CurrentFocusAnim = EGFxFrontendMenuFocusAnim::Standard;
    this->bChatNotificationIsOpen = false;
}

