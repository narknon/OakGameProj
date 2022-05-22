#include "GFxMapMenu.h"

class UGbxGFxListCell;
class UOakMinimapIconComponent;
class UGbxGFxButton;

void UGFxMapMenu::OnTutorialComplete() const {
}

void UGFxMapMenu::OnTutorialAdvanced() const {
}

void UGFxMapMenu::OnPlanetSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnPlanetClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnNavBarItemSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent) const {
}

void UGFxMapMenu::OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent) const {
}

void UGFxMapMenu::OnMapIconUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnMapIconClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnLevelSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnLevelClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnFriendSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnFriendClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnFastTravelStationSelectedExplicitly(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnFastTravelStationSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnFastTravelStationClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::OnFastTravelAvailabilityChanged(bool bAvailable) const {
}

void UGFxMapMenu::OnChallengeSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxMapMenu::OnChallengeListItemUpdated(const FOakUIChallengeListData& ListData) const {
}

void UGFxMapMenu::OnChallengeClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMapMenu::InitForHyperspaceMenu() const {
}

UGFxMapMenu::UGFxMapMenu() {
    this->InitialMenuState = EGFxMapMenuState::FastTravel;
    this->Sanctuary3Name = TEXT("/Game/Maps/Sanctuary3/Sanctuary3_P");
    this->CameraMoveThreshold = 0.00f;
    this->FriendStatusUpdateRateSeconds = 0.20f;
    this->ChallengeProviderClass = NULL;
    this->FirstTimeShowStage1Index = 0;
    this->FirstTimeShowStage2Index = 0;
    this->FirstTimeShowStage3Index = 0;
    this->FirstTimeShowStage4Index = 0;
    this->FirstTimeShowStage5Index = 0;
    this->FirstTimeFreeNavigationIndex = 0;
    this->FastTravelOrbitZoomIndex = 0;
    this->FastTravelChooseZoneInfoIndex = 0;
    this->FastTravelChooseZoneIndex = 0;
    this->FastTravelChooseLocationIndex = 0;
    this->MenuRoot = NULL;
    this->ProgressPanel = NULL;
    this->NavBar = NULL;
    this->FastTravelList = NULL;
    this->ChallengeList = NULL;
    this->FriendList = NULL;
    this->CurrentGalaxyChallengeFilterIndex = 0;
    this->CurrentZoneChallengeFilterIndex = 0;
    this->ChallengeListWrapper = NULL;
    this->ChallengeFilterHint = NULL;
    this->IconContainer = NULL;
    this->CrosshairContainers[0] = NULL;
    this->CrosshairContainers[1] = NULL;
    this->CurrentCrosshair = NULL;
    this->MouseCapturePanel = NULL;
    this->ZoomLevelInfo = NULL;
    this->DetailsPanel = NULL;
    this->HyperspaceHeader = NULL;
    this->MapWarning = NULL;
    this->MapError = NULL;
    this->MapErrorText = NULL;
    this->TutorialWidget = NULL;
    this->ChallengeProvider = NULL;
    this->ChallengeToFocusAfterLoad = NULL;
    this->PendingPOIPlanet = NULL;
}

