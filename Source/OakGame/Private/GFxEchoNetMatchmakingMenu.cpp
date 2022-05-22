#include "GFxEchoNetMatchmakingMenu.h"

class UGbxGFxButton;
class UGbxGFxListCell;

void UGFxEchoNetMatchmakingMenu::OnMatchMakingButtonHeld(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoNetMatchmakingMenu::OnMatchMakingButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoNetMatchmakingMenu::OnActivityItemFocused(UGbxGFxListCell* ListItem) const {
}

void UGFxEchoNetMatchmakingMenu::OnActivityItemClicked(UGbxGFxListCell* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxEchoNetMatchmakingMenu::UGFxEchoNetMatchmakingMenu() {
    this->NotificationText = FText::FromString(TEXT("Leaving this menu will not affect matchmaking"));
    this->MatchmakingInitalizedModeText = FText::FromString(TEXT("MATCHMAKING MODE"));
    this->MatchmakingInitializedText = FText::FromString(TEXT("INITIALIZING..."));
    this->HeroicModeText = FText::FromString(TEXT("Heroic"));
    this->StandardModeText = FText::FromString(TEXT("Standard"));
    this->MatchmakingInProgressText = FText::FromString(TEXT("Currently Matchmaking"));
    this->ButtonStartText = FText::FromString(TEXT("START"));
    this->ButtonCancelText = FText::FromString(TEXT("CANCEL"));
    this->LockedText = FText::FromString(TEXT("LOCKED"));
    this->StartButtonLabelExtraPadding = 0.10f;
    this->MatchmakingModeInitializedClip = NULL;
    this->MatchmakingInfoPanelClip = NULL;
    this->ModeSelectionClip = NULL;
    this->CurrentSelectedActivityIdx = -1;
}

