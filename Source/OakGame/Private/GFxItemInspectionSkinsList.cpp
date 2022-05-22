#include "GFxItemInspectionSkinsList.h"

void UGFxItemInspectionSkinsList::OnThumbnailLoaded() {
}

void UGFxItemInspectionSkinsList::OnCellChanged(const FGbxGFxListCellUpdateInfo& UpdateInfo) {
}

UGFxItemInspectionSkinsList::UGFxItemInspectionSkinsList() {
    this->ThumbnailManager = NULL;
    this->bNeedsThumbnailRefresh = false;
}

