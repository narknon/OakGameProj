#include "GFxInventoryMenu.h"

class UWeaponTrinketPartData;
class UInventorySlotData;
class UInventoryCategoryData;
class UGbxGFxButton;
class AActor;
class UOakInventoryCustomizationPartData;
class AWeapon;
class UGbxGFxObject;

void UGFxInventoryMenu::OnTrinketUnequipped(UWeaponTrinketPartData* Trinket, UInventorySlotData* SlotData) const {
}

void UGFxInventoryMenu::OnTrinketEquipped(UWeaponTrinketPartData* Trinket, UInventorySlotData* SlotData) const {
}

void UGFxInventoryMenu::OnThumbnailLoaded() const {
}

void UGFxInventoryMenu::OnSplitScreenPaperDollPageButtonClicked(UGbxGFxButton* UserWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnRefreshEverything() const {
}

void UGFxInventoryMenu::OnPaperDollTrinketClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnPaperDollSlotPressed(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnPaperDollSlotClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnPaperDollItemCardReady() const {
}

void UGFxInventoryMenu::OnPaperDollarItemCardElementalUpdated(const FString& NewElementalFrameName) const {
}

void UGFxInventoryMenu::OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxInventoryMenu::OnInventoryItemUpdated(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxInventoryMenu::OnInventoryItemUnequipped(AActor* ChangedActor, UInventorySlotData* SlotData) const {
}

void UGFxInventoryMenu::OnInventoryItemRemoved(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxInventoryMenu::OnInventoryItemEquipped(AActor* ChangedActor, UInventorySlotData* SlotData) const {
}

void UGFxInventoryMenu::OnInventoryItemAdded(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxInventoryMenu::OnInventoryCustomizationUnlocked(UOakInventoryCustomizationPartData* CustomizationPart) const {
}

void UGFxInventoryMenu::OnCurrentWeaponChanged(AWeapon* EquippedWeapon, AWeapon* LastWeapon) const {
}

void UGFxInventoryMenu::OnCurrentWeaponAmmoCountChanged() const {
}

void UGFxInventoryMenu::OnBrowseBackpackButtonClicked(UGbxGFxButton* UserWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnBackpackSelectionChanged(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxInventoryMenu::OnBackpackItemPressed(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxInventoryMenu::OnBackpackItemCardReady() const {
}

void UGFxInventoryMenu::OnBackpackItemCardElementalUpdated(const FString& NewElementalFrameName) const {
}

UGFxInventoryMenu::UGFxInventoryMenu() {
    this->AmmoLabelText = FText::FromString(TEXT("AMMO"));
    this->MaxDelayTimeToLoadThumbnails = 0.25f;
    this->DragDropManager = NULL;
    this->InventoryEventDisabledCount = 0;
    this->EquippingToTrinketButton = NULL;
    this->CurrentFilterIndex = -1;
    this->IconManager = NULL;
    this->TrinketThumbnailManager = NULL;
    this->LeftItemCard = NULL;
    this->RightItemCard = NULL;
    this->PaperDollFeedbackWidget = NULL;
    this->BackpackFeedbackWidget = NULL;
    this->BackpackBrowseButton = NULL;
    this->BackpackClip = NULL;
    this->BackpackNextHintClip = NULL;
    this->BackpackPrevHintClip = NULL;
    this->EquippedSlotsClip = NULL;
    this->SplitScreenPaperDollPageUpButton = NULL;
    this->SplitScreenPaperDollPageDownButton = NULL;
    this->SplitScreenPaperDollPageBackground = NULL;
    this->TutorialWidget = NULL;
    this->DragInventoryItem = NULL;
    this->FocusSide = EGFxInventoryMenuFocusSide::PaperDoll;
    this->BackpackSize = EGFxInventoryMenuBackpackSize::TwoColumns;
    this->bIsInspecting = false;
    this->bIsBeastmaster = false;
    this->bHasExtraArtifacts = false;
    this->bStandInHasBeenShown = false;
    this->CurrentInventoryMaxSize = 0;
    this->UnequipToTargetIndex = -1;
    this->PaperDollElementalIndex = 0;
    this->BackpackElementalIndex = 0;
    this->bBackpackIsTrinkets = false;
    this->HeaderTextClip = NULL;
    this->CashCounterClip = NULL;
}

