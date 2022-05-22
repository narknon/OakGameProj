#include "GFxCreditsMenu.h"

class UGbxMenuData;
class AOakPlayerController;

void UGFxCreditsMenu::PushCreditsMenuFor(AOakPlayerController* Target, FLatentActionInfo LatentInfo, bool bDismissWhenEndReached, UGbxMenuData* OverrideCreditsMenuData) const {
}

void UGFxCreditsMenu::OnImageLoaded() const {
}

UGFxCreditsMenu::UGFxCreditsMenu() {
    this->SizeTextureCache = 2;
    this->InsertPosYDelta = 50.00f;
    this->NumCreditsLinesCached = 28;
    this->Image = NULL;
    this->CreditsContainer = NULL;
}

