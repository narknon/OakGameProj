#include "GbxGFxGridScrollingList.h"

void UGbxGFxGridScrollingList::OnScrollBarPositionUpdated(float SliderPercentage) {
}

UGbxGFxGridScrollingList::UGbxGFxGridScrollingList() {
    this->SelectedIndex = -1;
    this->SelectedIndexWhenFocusWasLost = -1;
    this->GridArea = NULL;
    this->GridMask = NULL;
    this->NextUniqueId = 0;
    this->ViewWindowSize = 0.00f;
    this->bIsContentDirty = false;
    this->ScrollBar = NULL;
    this->bScrollbarIsChildOfThis = false;
}

