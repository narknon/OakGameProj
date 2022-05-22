#include "ActiveWeaponsComponent.h"
#include "Templates/SubclassOf.h"

class UVehicleAttachWeaponAspectData;
class AWeapon;
class UWeaponSlotData;
class UInventoryBalanceData;

void UActiveWeaponsComponent::WeaponReloadStarted(AWeapon* Weapon, bool bAuto) {
}

void UActiveWeaponsComponent::WeaponReloadEnded(AWeapon* Weapon, bool bCompleted) {
}

void UActiveWeaponsComponent::WeaponPutDown(AWeapon* PutDownWeapon) {
}

AWeapon* UActiveWeaponsComponent::SpawnWeaponFromClass(TSubclassOf<AWeapon> WeaponClass, UWeaponSlotData* Slot) {
    return NULL;
}

AWeapon* UActiveWeaponsComponent::SpawnWeaponFromBalanceData(UInventoryBalanceData* WeaponBalanceData, UWeaponSlotData* Slot) {
    return NULL;
}

AWeapon* UActiveWeaponsComponent::SpawnVehicleWeaponFromAspectData(const UVehicleAttachWeaponAspectData* VehicleWeaponAspectData, UWeaponSlotData* Slot) {
    return NULL;
}

void UActiveWeaponsComponent::SpawnDefaultWeapon() {
}

void UActiveWeaponsComponent::ServerUnlockWeaponActions_Implementation(FName Reason, int32 ChannelsMask) {
}
bool UActiveWeaponsComponent::ServerUnlockWeaponActions_Validate(FName Reason, int32 ChannelsMask) {
    return true;
}

void UActiveWeaponsComponent::ServerStopWeaponActions_Implementation(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
}
bool UActiveWeaponsComponent::ServerStopWeaponActions_Validate(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
    return true;
}

void UActiveWeaponsComponent::ServerSetCurrentWeapon_Implementation(AWeapon* NewWeapon, uint8 NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
}
bool UActiveWeaponsComponent::ServerSetCurrentWeapon_Validate(AWeapon* NewWeapon, uint8 NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
    return true;
}

void UActiveWeaponsComponent::ServerLockWeaponActions_Implementation(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
}
bool UActiveWeaponsComponent::ServerLockWeaponActions_Validate(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
    return true;
}

void UActiveWeaponsComponent::OnWeaponResumeUse(UWeaponSlotData* AttachedSlot) {
}

AWeapon* UActiveWeaponsComponent::GetWeapon(uint8 Slot) const {
    return NULL;
}

void UActiveWeaponsComponent::ClientUnlockWeaponActions_Implementation(FName Reason, int32 ChannelsMask) {
}

void UActiveWeaponsComponent::ClientStopWeaponActions_Implementation(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
}

void UActiveWeaponsComponent::ClientLockWeaponActions_Implementation(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
}

UActiveWeaponsComponent::UActiveWeaponsComponent() {
    this->WeaponsScale = 1.00f;
    this->DefaultWeaponClass = NULL;
    this->DefaultBalanceWeaponData = NULL;
    this->bAutoSpawnDefaultWeapon = true;
    this->OwnerPawn = NULL;
    this->WeaponItemType = NULL;
}

