#include "GFxGearUpExtractionMenu.h"

class UInventoryCategoryData;
class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxGearUpExtractionMenu::OnTargetInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxGearUpExtractionMenu::OnTargetInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnTargetInventoryItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnTargetInventoryItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnMakeOfferButtonUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGearUpExtractionMenu::OnMakeOfferButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGearUpExtractionMenu::OnItemCardReady() const {
}

void UGFxGearUpExtractionMenu::OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxGearUpExtractionMenu::OnInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnInventoryItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnInventoryItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxGearUpExtractionMenu::OnGearUpThumbnailLoaded() const {
}

void UGFxGearUpExtractionMenu::OnConfirmExtraction(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxGearUpExtractionMenu::extOnCountdownFinished() const {
}

UGFxGearUpExtractionMenu::UGFxGearUpExtractionMenu() {
    this->ItemCardMovie = NULL;
    this->MaxDelayTimeToLoadThumbnails = 0.25f;
    this->EchoDeviceMenuName = TEXT("GearUpExtraction");
    this->EchoDeviceIdleScreenName = TEXT("GearUpExtraction");
    this->CountdownCancelHintClip = NULL;
    this->InfoPanelClip = NULL;
    this->OfferingBackpackClip = NULL;
    this->OfferingBackpack = NULL;
    this->OfferingButtonClip = NULL;
    this->BackpackBackpackClip = NULL;
    this->BackpackBackpack = NULL;
    this->BackpackPrevSortClip = NULL;
    this->BackpackNextSortClip = NULL;
    this->BackpackCurrencyWidgetClip = NULL;
    this->ItemCardClip = NULL;
    this->AllowableBankOverfill = 0;
}

