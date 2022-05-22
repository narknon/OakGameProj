#include "GFxAmmoBar.h"

class AWeapon;
class UUsableComponent;

void UGFxAmmoBar::WeaponSecondaryModeAmmoChanged() const {
}

void UGFxAmmoBar::UpdateCachedAmmoCounts() const {
}

void UGFxAmmoBar::UpdateCachedAmmoComponent() const {
}

void UGFxAmmoBar::UpdateAmmoCount(int32 LoadedCount, int32 SpareCount) const {
}

void UGFxAmmoBar::UpdateAmmoBarExtrema(FGameResourcePoolReference& ResourcePoolReference, float MinNum, float MaxNum) const {
}

void UGFxAmmoBar::OnWeaponSwitchedMode() const {
}

void UGFxAmmoBar::OnWeaponEquipped() const {
}

void UGFxAmmoBar::OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const {
}

void UGFxAmmoBar::OnUpdatePreToggleWeaponMode(bool bPreToggleWeaponModeStarted) const {
}

void UGFxAmmoBar::OnResurrected() const {
}



void UGFxAmmoBar::OnInputDeviceChanged() const {
}

void UGFxAmmoBar::OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const {
}



UGFxAmmoBar::UGFxAmmoBar() {
    this->OakHUD = NULL;
    this->CachedWeapon = NULL;
    this->CachedCOVHeatComponent = NULL;
    this->CachedAmmoComponent = NULL;
    this->OakPCOwner = NULL;
    this->OakCharacterOwner = NULL;
    this->AmmoCurrentValueContainer = NULL;
    this->AmmoCurrentValueLabel = NULL;
    this->MaxValueContainer = NULL;
    this->AmmoMaxValueLabel = NULL;
    this->WeaponIconContainer = NULL;
    this->AmmoAndModeContainer = NULL;
    this->ModeSwitchWrapper = NULL;
    this->ModeSwitchTextContainer = NULL;
    this->ElementalIcon = NULL;
    this->ModeSwitchTextBox = NULL;
    this->ModeSwitchHint = NULL;
    this->COVHeatBar = NULL;
    this->COVBrokenBar = NULL;
    this->COVRedliningMC = NULL;
    this->COVOverheatWarning = NULL;
    this->MaxSwapWeaponModeTime = 0.10f;
    this->EridianFabricatorStat = NULL;
    this->InventorySlotDataTop = NULL;
    this->InventorySlotDataBottom = NULL;
    this->InventorySlotDataLeft = NULL;
    this->InventorySlotDataRight = NULL;
    this->CachedWeaponSecondaryModeAmmoComponent = NULL;
}

