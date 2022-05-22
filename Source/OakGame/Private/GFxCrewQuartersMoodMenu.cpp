#include "GFxCrewQuartersMoodMenu.h"

class UGbxMenuData;
class AOakPlayerController;
class ACrewQuartersRoom;
class UGbxGFxListCell;

void UGFxCrewQuartersMoodMenu::OpenCrewQuartersMoodMenu(AOakPlayerController* InOakPC, UGbxMenuData* InMoodMenuData, ACrewQuartersRoom* InRoom) const {
}

void UGFxCrewQuartersMoodMenu::OnMoodItemSelected(UGbxGFxListCell* ListItem) const {
}

void UGFxCrewQuartersMoodMenu::OnMoodItemClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCrewQuartersMoodMenu::UGFxCrewQuartersMoodMenu() {
    this->InfoPanelClip = NULL;
    this->MoodListClip = NULL;
    this->MoodListScrollbarClip = NULL;
    this->UnlockedTextClip = NULL;
    this->NumUnlockedCount = 0;
}

