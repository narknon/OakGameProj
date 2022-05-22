#include "GFxMissionLogMenu.h"

class UGbxGFxDialogBox;
class UGbxGFxListCell;
class UCharacterEchoData;
class UPerformanceEchoData;

void UGFxMissionLogMenu::UpdatePauseHint(bool bShouldAddToHintBar) const {
}

void UGFxMissionLogMenu::ShowFriendsOnMissionDialog() const {
}

void UGFxMissionLogMenu::SetLookingAtMissionInfo(const FGFxMissionLogMissionItem& MissionInfo) const {
}

void UGFxMissionLogMenu::OnNavCellSelectionChanged(UGbxGFxListCell* NewSelectedItem) const {
}

void UGFxMissionLogMenu::OnMissionSelectionChanged(UGbxGFxListCell* ListItem) const {
}

void UGFxMissionLogMenu::OnMissionListItemClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMissionLogMenu::OnFriendSelectedToJoin(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMissionLogMenu::OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho) const {
}

void UGFxMissionLogMenu::OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) const {
}

UGFxMissionLogMenu::UGFxMissionLogMenu() {
    this->bUseDebug = true;
    this->HeaderListItem = TEXT("MissionLogItemHeader");
    this->ActiveMissionListItem = TEXT("MissionLogItem");
    this->CompletedMissionListItem = TEXT("MissionLogItem");
    this->EchoDeviceScreen_MissionVOPlayed = TEXT("MissionLog_Played");
    this->EchoDeviceScreen_EchoLogPlayed = TEXT("MissionLog_EchoLogPlayed");
    this->EchoDeviceScreen_EridianLogPlayed = TEXT("MissionLog_EridianLogPlayed");
    this->EchoDeviceScreen_TyphonLogPlayed = TEXT("MissionLog_TyphonLogPlayed");
    this->EchoNetSubmenuName = TEXT("Roster");
    this->EridianCategoryName = FText::FromString(TEXT("Eridian Log"));
    this->TyphonCategoryName = FText::FromString(TEXT("Typhon Log"));
    this->EchoCategoryName = FText::FromString(TEXT("ECHO Log"));
    this->MissionCategoryName = FText::FromString(TEXT("Mission Log"));
    this->SocialWidgetViewRoster = FText::FromString(TEXT("View Roster"));
    this->EmptyLogString = FText::FromString(TEXT("Couldn't find any logs"));
    this->FilterString = FText::FromString(TEXT("Sort By: {0}"));
    this->CachedPlayerController = NULL;
    this->bEchoLogWasPlaying = false;
    this->EmptyTextField = NULL;
    this->MediaPlayer = NULL;
    this->ContentClip = NULL;
    this->NavBarList = NULL;
    this->NavBarHint = NULL;
    this->NavBarHintPrev = NULL;
    this->NavBarHintNext = NULL;
    this->FilterTextClip = NULL;
    this->FilterHintClip = NULL;
    this->AudioLogClip = NULL;
    this->CategoryTextField = NULL;
    this->MissionDescriptionBoxClip = NULL;
    this->LogDescriptionBoxClip = NULL;
    this->MissionListBox = NULL;
    this->PlayerDetailsMenuData = NULL;
    this->CurrentNav = EGFxMissionLogNavType::None;
    this->CurrentFilterType = EGFxMissionLogFilterType::None;
    this->SocialWidget = NULL;
    this->SocialWidgetHeader = NULL;
    this->SocialWidgetHint = NULL;
    this->SocialWidgetScrollingList = NULL;
}

