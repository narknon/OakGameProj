#include "GFxPlayerStorageMenu.h"

class UGbxGFxObject;

void UGFxPlayerStorageMenu::OnThumbnailLoaded() const {
}

void UGFxPlayerStorageMenu::OnItemCardReady() const {
}

void UGFxPlayerStorageMenu::OnInventoryCompareItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxPlayerStorageMenu::OnCompareInventoryBagScrollBarUpdated(float SliderPercentage) const {
}

void UGFxPlayerStorageMenu::OnCompareBankBagScrollBarUpdated(float SliderPercentage) const {
}

void UGFxPlayerStorageMenu::OnCharacterItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnCharacterItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnCharacterItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnBigBagScrollBarUpdated(float SliderPercentage) const {
}

void UGFxPlayerStorageMenu::OnBigBagItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxPlayerStorageMenu::OnBigBagItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxPlayerStorageMenu::OnBankItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnBankItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnBankItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxPlayerStorageMenu::OnBankCompareItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxPlayerStorageMenu::extOnCompareIntroComplete() const {
}

UGFxPlayerStorageMenu::UGFxPlayerStorageMenu() {
    this->ItemInspectionMenuData = NULL;
    this->ItemCardMovie = NULL;
    this->EchoDeviceMenuName = TEXT("PlayerStorage");
    this->EchoDeviceIdleScreenName = TEXT("PlayerStorage");
    this->EchoDeviceDepositIdleScreenName = TEXT("Inventory");
    this->MaxBackpackSize = 25;
    this->MaxBankSize = 50;
    this->NumBigBagCellsFullScreen = 20;
    this->NumBigBagCellsSplitScreen = 10;
    this->NumCompareBagCellsFullScreen = 5;
    this->NumCompareBagCellsSplitScreen = 2;
    this->NumBigBagColumns = 5;
    this->MaxDelayTimeToLoadThumbnails = 0.25f;
    this->MenuState = EGFxPlayerStorageMenuState::None;
    this->IconManager = NULL;
    this->StorageContainerClip = NULL;
    this->CompareContainerLeftClip = NULL;
    this->CompareContainerRightClip = NULL;
    this->ListCapacityPanelClip = NULL;
    this->ListCapacityPanelLeftClip = NULL;
    this->NavClip = NULL;
    this->StorageHeader = NULL;
    this->ItemCard1Clip = NULL;
    this->ItemCard2Clip = NULL;
    this->bWaitingForUpdateFromServer = false;
    this->bRefreshBagsNextTick = false;
    this->SortIndex = 0;
    this->NumItemCardsLoading = 0;
    this->bMenuHasStarted = false;
    this->bNeedsIconsRefreshed = false;
    this->StateBeforeCompare = EGFxPlayerStorageMenuState::None;
}

