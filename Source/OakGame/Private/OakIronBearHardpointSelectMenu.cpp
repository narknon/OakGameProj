#include "OakIronBearHardpointSelectMenu.h"

void UOakIronBearHardpointSelectMenu::RightHardpointSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UOakIronBearHardpointSelectMenu::LeftHardpointSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UOakIronBearHardpointSelectMenu::CoreSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

UOakIronBearHardpointSelectMenu::UOakIronBearHardpointSelectMenu() {
    this->CurrentLeftHardpointIndex = 0;
    this->CurrentRightHardpointIndex = 0;
    this->CurrentCoreIndex = 0;
    this->LeftHardpointComboBox = NULL;
    this->RightHardpointComboBox = NULL;
    this->CoreComboBox = NULL;
}

