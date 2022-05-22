#include "InventoryData.h"

void UInventoryData::EnumeratePickupFlyToTargets(TArray<FName>& Targets) const {
}

UInventoryData::UInventoryData() {
    this->bInventoryNameIsFullName = false;
    this->NamingStrategy = NULL;
    this->InventoryActorClass = NULL;
    this->bDisplayNameInInteractionHeader = false;
    this->bUsesItemCard = false;
    this->ItemCardTypeFrameName = TEXT("DesignerFixMe");
    this->bUsesPlayerLevelRequirement = true;
    this->PickupSound = NULL;
    this->PickupEquipSound = NULL;
    this->SpottedCalloutCondition = NULL;
    this->SpottedCallout = NULL;
    this->PickupImpact = NULL;
    this->EquipUISound = NULL;
    this->DropUISound = NULL;
    this->InventoryItemPickupClass = NULL;
    this->bReplicateActorInPickup = false;
    this->bSharedByPickups = false;
    this->bMustMatchGameStageToShare = false;
    this->bOverrideRotationInShop = false;
    this->bOverrideTranslationInShop = false;
    this->bOverrideScaleInShop = false;
    this->bOverrideRotationInContainer = false;
    this->bCanBeHolsteredOnBody = true;
    this->bCanShowHolsteredInFirstPerson = true;
    this->InventoryCategory = NULL;
    this->PlayerDroppability = EPlayerDroppability::EPD_CanDropAndSell;
    this->SizeInInventory = 1;
    this->bIgnoreShopPriceMarkup = false;
    this->bCalculatePriceInShopUsingPlayerAsContext = false;
    this->BaseMonetaryValueModifier = 1.00f;
    this->bUsesInventoryScore = true;
    this->AssociatedCustomizationData = NULL;
}

