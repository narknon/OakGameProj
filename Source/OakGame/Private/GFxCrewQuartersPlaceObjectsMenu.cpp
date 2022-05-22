#include "GFxCrewQuartersPlaceObjectsMenu.h"

class UGbxMenuData;
class AOakPlayerController;
class ACrewQuartersRoom;
class UObject;
class UGbxGFxObject;

void UGFxCrewQuartersPlaceObjectsMenu::OpenPlaceObjectsMenu(AOakPlayerController* InOakPC, UGbxMenuData* InMenuData, ACrewQuartersRoom* InRoom, UObject* InIO) const {
}

void UGFxCrewQuartersPlaceObjectsMenu::OnThumbnailLoaded() const {
}

void UGFxCrewQuartersPlaceObjectsMenu::OnListItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxCrewQuartersPlaceObjectsMenu::OnListItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCrewQuartersPlaceObjectsMenu::UGFxCrewQuartersPlaceObjectsMenu() {
    this->NewPreviewDelaySeconds = 0.50f;
    this->BackpackClip = NULL;
    this->ThumbnailManager = NULL;
    this->ButtonPromptHintClip = NULL;
    this->bMenuStarted = false;
    this->bMenuSetUp = false;
    this->RevertToDecorationData = NULL;
    this->TimeTilNextPreview = 0.00f;
    this->bPreviewRequested = false;
}

