#include "InventoryCategoryData.h"

UInventoryCategoryData::UInventoryCategoryData() {
    this->NotAddedToInventory = true;
    this->PickupActionType = EPickupActionType::OnUseOnly;
    this->SharedWithAllPlayers = false;
    this->bSharedPlayersMustBeOnFriendlyTeam = true;
    this->bLevelSyncPickupCurrency = false;
    this->ManualActivation = false;
    this->bCanInspectItem = true;
    this->bCanInspectManufacturer = true;
    this->bCanInspectElementalEffects = true;
    this->bCanInspectParts = true;
    this->bCanChangeSkins = true;
    this->bUseEquipAudioFromWeaponType = false;
    this->bDoNotUseCosmeticLabelInBackpackCells = false;
    this->bEnableSaveGameQuantityChangeThrottling = false;
}

