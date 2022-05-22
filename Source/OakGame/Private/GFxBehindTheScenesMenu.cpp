#include "GFxBehindTheScenesMenu.h"

class UGbxGFxListCell;

void UGFxBehindTheScenesMenu::OnMediaItemClicked(UGbxGFxListCell* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxBehindTheScenesMenu::UGFxBehindTheScenesMenu() {
    this->CategoryIndex = 0;
    this->Content = NULL;
    this->MediaListClip = NULL;
    this->MediaPlayerActor = NULL;
    this->SelectedMediaCell = NULL;
}

