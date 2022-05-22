#include "OakDebugWeaponBuilderMenu.h"

class UGbxUserWidget;

void UOakDebugWeaponBuilderMenu::OnPlayerLevelChange(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UOakDebugWeaponBuilderMenu::OnPartSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UOakDebugWeaponBuilderMenu::OnOptionListItemFocused(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UOakDebugWeaponBuilderMenu::OnManufacturerSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UOakDebugWeaponBuilderMenu::OnBuildButtonClicked() {
}

void UOakDebugWeaponBuilderMenu::OnBalanceDefSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UOakDebugWeaponBuilderMenu::OnAmmoTypeSelectedChanged(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

UOakDebugWeaponBuilderMenu::UOakDebugWeaponBuilderMenu() {
    this->BuildButton = NULL;
    this->PlayerLevelGradeSpinner = NULL;
    this->ErrorText = NULL;
    this->ManufacturerList = NULL;
    this->AmmoTypesList = NULL;
    this->InventoryBalancesList = NULL;
    this->PartPickerListLeft = NULL;
    this->PartPickerListRight = NULL;
    this->OptionButtonClass = NULL;
    this->PreviouslySeletedManufacturerIndexes = 0;
    this->PreviouslySeletedAmmoTypes = 0;
    this->PreviouslySeletedBalanceDefinitions = 0;
    this->PreviouslySeletedPartListLeft = 0;
    this->PreviouslySeletedPartListRight = 0;
    this->CurrentFocusedOptionButton = NULL;
}

