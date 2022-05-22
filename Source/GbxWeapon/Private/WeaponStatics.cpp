#include "WeaponStatics.h"

class AActor;
class AWeapon;
class UGbxAction;
class UObject;
class UGbxDamageType;
class UProjectileEQSProxy;

void UWeaponStatics::UpdateVisibleAmmo(AWeapon* Weapon) {
}

void UWeaponStatics::UnhideWeapons(AActor* WeaponUser, FName Reason) {
}

void UWeaponStatics::UnhideWeapon(AActor* WeaponUser, uint8 Slot, FName Reason) {
}

void UWeaponStatics::SetVisibleAmmoUpdateMethod(AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod) {
}

void UWeaponStatics::SetVisibleAmmoState(AWeapon* Weapon, EWeaponVisibleAmmoState NewState) {
}

void UWeaponStatics::ResetVisibleAmmoState(AWeapon* Weapon) {
}

void UWeaponStatics::RefillAmmo(AWeapon* Weapon, int32 Amount, bool bAsPercent) {
}

UGbxAction* UWeaponStatics::K2_PlayWeaponHoldActionEx(AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, AWeapon* Weapon, FActionState_Base ActionParams) {
    return NULL;
}

UGbxAction* UWeaponStatics::K2_PlayWeaponHoldAction(AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, AWeapon* Weapon, float PlayRate, float Duration) {
    return NULL;
}

void UWeaponStatics::HideWeapons(AActor* WeaponUser, FName Reason) {
}

void UWeaponStatics::HideWeapon(AActor* WeaponUser, uint8 Slot, FName Reason) {
}

void UWeaponStatics::GiveAmmo(AWeapon* Weapon, int32 Amount, bool bLoaded, bool bAsPercent) {
}

AWeapon* UWeaponStatics::GetWeapon(UObject* Context) {
    return NULL;
}

float UWeaponStatics::GetMaxZoomFOVScale(AWeapon* Weapon, uint8 UseMode) {
    return 0.0f;
}

int32 UWeaponStatics::GetLoadedAmmo(AWeapon* Weapon, uint8 UseMode) {
    return 0;
}

float UWeaponStatics::GetFireRateAccelPercent(AWeapon* Weapon, uint8 UseMode) {
    return 0.0f;
}

float UWeaponStatics::GetFireRate(AWeapon* Weapon, uint8 UseMode) {
    return 0.0f;
}

UGbxDamageType* UWeaponStatics::GetDamageType(AWeapon* Weapon, uint8 UseMode) {
    return NULL;
}

UProjectileEQSProxy* UWeaponStatics::CreateProjectileEQSProxy(FVector Location, FRotator Rotation, AActor* ReferenceActor) {
    return NULL;
}

UWeaponStatics::UWeaponStatics() {
}

