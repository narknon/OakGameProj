#include "MinimalInventoryInfo.h"

FMinimalInventoryInfo::FMinimalInventoryInfo() {
    this->PickupOrderIdx = 0;
    this->StoredActor = NULL;
    this->InventoryCategory = NULL;
    this->bIsTrash = false;
    this->bIsFavorite = false;
    this->bIsMissionItem = false;
    this->TrinketPartHash = 0;
    this->SkinPartHash = 0;
    this->MayhemPartHash = 0;
    this->MayhemPartUIStatHash = 0;
    this->bBase64ThumbnailGenerated = false;
}

