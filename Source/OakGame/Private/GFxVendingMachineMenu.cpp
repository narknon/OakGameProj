#include "GFxVendingMachineMenu.h"

class UInventorySlotData;
class UGbxGFxButton;
class AActor;
class UInventoryCategoryData;
class UGbxGFxObject;

void UGFxVendingMachineMenu::OnVendingSelectionChanged() const {
}

void UGFxVendingMachineMenu::OnVendingMachineScroll(EVendingMachineScrollDirection ScrollDirection) const {
}

void UGFxVendingMachineMenu::OnVendingMachineDirty() const {
}

void UGFxVendingMachineMenu::OnVendingMachineBoughtItem(EVendingMachineBuyType BuyType, AActor* InventoryActor) const {
}

void UGFxVendingMachineMenu::OnVendingItemClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxVendingMachineMenu::OnThumbnailLoaded() const {
}

void UGFxVendingMachineMenu::OnRigthItemCardReady() const {
}

void UGFxVendingMachineMenu::OnNavMenuItemClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxVendingMachineMenu::OnLeftItemCardReady() const {
}

void UGFxVendingMachineMenu::OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxVendingMachineMenu::OnInventoryItemUpdated(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxVendingMachineMenu::OnInventoryItemUnequipped(AActor* ChangedActor, UInventorySlotData* SlotData) const {
}

void UGFxVendingMachineMenu::OnInventoryItemRemoved(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxVendingMachineMenu::OnInventoryItemEquipped(AActor* ChangedActor, UInventorySlotData* SlotData) const {
}

void UGFxVendingMachineMenu::OnInventoryItemAdded(const FInventoryListEntryHandle& ItemHandle) const {
}

void UGFxVendingMachineMenu::OnBackpackGridItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxVendingMachineMenu::OnBackpackGridItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxVendingMachineMenu::OnAmmoMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const {
}

void UGFxVendingMachineMenu::OnAmmoCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const {
}

UGFxVendingMachineMenu::UGFxVendingMachineMenu() {
    this->BackpackVisibleCells = 6;
    this->BuyCameraState = TEXT("Default");
    this->SellCameraState = TEXT("Sell");
    this->CompareFromMachineCameraState = TEXT("Compare_Inventory");
    this->CompareFromInventoryCameraState = TEXT("Compare_Machine");
    this->BuyEchoOrientation = TEXT("VendingMachine_Buy");
    this->SellEchoOrientation = TEXT("VendingMachine_Sell");
    this->CompareFromMachineEchoOrientation = TEXT("VendingMachine_Compare_Inventory");
    this->CompareFromInventoryEchoOrientation = TEXT("VendingMachine_Compare_Machine");
    this->DefaultProjectionFXWidgetName = TEXT("rightItemCardLoader");
    this->ItemCardScale = 0.80f;
    this->ItemCardCurrencyWidgetTime = 0.50f;
    this->ItemCardScaleSplitScreen = 0.80f;
    this->ItemCardClass = NULL;
    this->ItemCardSwf = NULL;
    this->ItemInspectionMenuData = NULL;
    this->Radius = 10.00f;
    this->IconManager = NULL;
    this->GFxItemInfoDisplayComponent = NULL;
    this->RadiusDebug = 10.00f;
    this->AmountToModify = 5.00f;
    this->CurrentSocketMap = 0;
    this->CurrencyWidgetSpinnerHeightOverride = 335.00f;
    this->CurrencyWidgetCostSpinTime = 3.00f;
    this->CurrencyWidgetPauseOnNewValueTime = 0.00f;
    this->MaxThumbnails = 12;
    this->bQueueRefreshThumbnails = false;
    this->bBackpackHidden = true;
    this->CurrentInventoryMaxSize = 0;
    this->bNeedsBackpackUpdateOnTick = false;
    this->bSetIndexToZeroForBackpackRefresh = false;
    this->CurrentBackpackState = EGFxVendingMachineMenuBackpackState::Unknown;
    this->CachedPlayerController = NULL;
    this->CachedOakCharacter = NULL;
    this->InventoryList = NULL;
    this->BackpackItemCardLoader = NULL;
    this->VendingItemCardLoader = NULL;
    this->CurrentFilterIndex = -1;
    this->BackpackDoubleClickTimeLimit = 1.00f;
    this->CurrentNavIndex = 1;
    this->bWantUpdateEverythingOnNextBagUpdate = false;
    this->CachedVendingMachineProxy = NULL;
    this->CachedVendingMachine = NULL;
    this->PlayerShopManager = NULL;
    this->CurrentShopComponent = NULL;
    this->VendingMachineFocusWidget = NULL;
    this->CurrentDisplayMode = GFxVendingMachineDisplayMode::GFXVENDOR_Buy;
    this->NavBarContainerClip = NULL;
    this->NavBuyButton = NULL;
    this->NavBuyBackButton = NULL;
    this->NavSellButton = NULL;
    this->InspectionItemCard = NULL;
    this->BackpackContainer = NULL;
    this->MarcusTipContainer = NULL;
    this->ItemOfTheDayClip = NULL;
    this->VendingPlayerWidget = NULL;
    this->BackpackOuterContainerClip = NULL;
    this->MaxDelayTimeToLoadThumbnails = 0.25f;
    this->VendingPlayerWidgetString = TEXT("vendingMachinePlayer");
    this->MarcusHeadClipString = TEXT("marcusToolTip.marcusHead");
    this->MarcusTooltipContainerString = TEXT("marcusToolTip");
    this->ItemOfTheDayShelfString = TEXT("marcusToolTip.itemOfTheDayShelf");
    this->VendingMachineListBoxID = TEXT("vendingMachineList");
    this->BuyStateNavID = TEXT("BuyButton");
    this->BuyBackStateNavID = TEXT("BuyBackButton");
    this->SellStateNavID = TEXT("InventoryButton");
    this->StateTextID = TEXT("textTop");
    this->iodTimerTextID = TEXT("marcusToolTip.itemOfTheDayShelf.iodTimer");
    this->ItemOfTheDayTextID = TEXT("marcusToolTip.itemOfTheDayShelf.itemOfTheDayText");
    this->NavMenuID = TEXT("buttonsTop");
    this->NavBuyButtonID = TEXT("buyButton");
    this->NavBuyBackButtonID = TEXT("buybackButton");
    this->NavSellButtonID = TEXT("sellButton");
    this->NavMenuLeftGlyphID = TEXT("navMenuLeftGlyph");
    this->NavMenuRightGlyphID = TEXT("navMenuRightGlyph");
    this->MarcusHeadSlotBaseID = TEXT("tooltip");
    this->BackpackSortID = TEXT("veningMachineBackpack.backpack.backpackHeader.sortText");
    this->BackpackHeaderID = TEXT("veningMachineBackpack.backpack.backpackHeader.headerText");
    this->BackpackID = TEXT("backpack");
    this->PreviousButtonTextClipID = TEXT("veningMachineBackpack.backpack.backpackHeader.navMenuLeftGlyphBackpack");
    this->NextButtonTextClipID = TEXT("veningMachineBackpack.backpack.backpackHeader.navMenuRightGlyphBackpack");
    this->MarcusTipContainerID = TEXT("marcusToolTip");
    this->SmallPlayerHeadID = TEXT("tooltipContainer");
    this->VendingItemClass = TEXT("TempWeaponSlot");
    this->CantSellFavoriteText = FText::FromString(TEXT("FAVORITE"));
    this->CantSellItemGenericText = FText::FromString(TEXT("STORY ITEM"));
    this->BackString = FText::FromString(TEXT("Cancel"));
    this->BuyBackString = FText::FromString(TEXT("Buy Back"));
}

