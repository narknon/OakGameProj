#include "GFxMissionDeliveryMenu.h"

class UGbxGFxButton;

void UGFxMissionDeliveryMenu::OnRejectMission(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMissionDeliveryMenu::OnAcceptMission(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxMissionDeliveryMenu::UGFxMissionDeliveryMenu() {
    this->AcceptButton = NULL;
    this->DeclineButton = NULL;
    this->MissionDescriptionContainer = NULL;
    this->MissionDescriptionText = NULL;
    this->MissionDescriptionScrollBar = NULL;
    this->MissionDescriptionGridArea = NULL;
    this->MissionTitleText = NULL;
    this->MissionLevelText = NULL;
    this->MissionLocationText = NULL;
    this->MultiMissionNavBar = NULL;
    this->MultiMissionPreviousHint = NULL;
    this->MultiMissionLeftArrow = NULL;
    this->MultiMissionNextHint = NULL;
    this->MultiMissionRightArrow = NULL;
    this->MultiMissionMissionPipsWrapper = NULL;
    this->DifficultyText = NULL;
    this->PlacardBG = NULL;
    this->PlacardTop = NULL;
    this->PlacardElementsBG = NULL;
    this->PlacardTopText = NULL;
    this->ModalDetails = NULL;
    this->FriendAmountText = NULL;
    this->FriendsOnMissionText = NULL;
    this->DescriptionCycleGlyph = NULL;
    this->DisplayedMissionData = NULL;
    this->DisplayedMissionGiver = NULL;
    this->CurrentDisplayState = EMissionDeliveryMenuDisplayState::Description;
    this->CachedMissionLevel = 0;
    this->CurrentMissionTracker = NULL;
    this->ProjectionFXWidgetName = TEXT("PlacardTopText");
}

