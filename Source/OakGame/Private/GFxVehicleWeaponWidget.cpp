#include "GFxVehicleWeaponWidget.h"

class AWeapon;

void UGFxVehicleWeaponWidget::UpdateWeaponDisplay() {
}

void UGFxVehicleWeaponWidget::UpdateAmmoAmounts() {
}

void UGFxVehicleWeaponWidget::OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) {
}

UGFxVehicleWeaponWidget::UGFxVehicleWeaponWidget() {
    this->WeaponType = EGFxVehicleWeaponType::CHARGE;
    this->CachedAmmoComponent = NULL;
    this->CachedHeatComponent = NULL;
    this->CachedChargeComponent = NULL;
    this->ActiveWeaponsComponent = NULL;
    this->VisibilityClip = NULL;
    this->ResourceIconContainerClip = NULL;
    this->DriverWeaponsClip = NULL;
    this->WeaponIcon = NULL;
    this->DynamicWeaponIcon = NULL;
    this->WeaponIconFrames = NULL;
    this->CurrentlyLoadedWeaponIcons = NULL;
    this->CachedWeaponSlot = -1;
    this->VisibilityClipID = TEXT("vehicleWeaponMC");
    this->ResourceIconContainerClipID = TEXT("resourceIconContainer");
    this->DriverWeaponsID = TEXT("driverWeapons");
    this->ResourceIconClipID = TEXT("resourceMeter");
    this->HeatMeterID = TEXT("heatMeter");
    this->ChargeMeterID = TEXT("vehicleWeaponMC.resourceIconContainer.resourceMeter.chargeMeter");
    this->MagazineMeterID = TEXT("magazineMeter");
    this->WeaponIconID = TEXT("resourceWeaponIcon");
}

