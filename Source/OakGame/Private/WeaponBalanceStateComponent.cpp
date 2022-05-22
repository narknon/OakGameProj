#include "WeaponBalanceStateComponent.h"

void UWeaponBalanceStateComponent::NotifyWeaponPutDown() {
}

void UWeaponBalanceStateComponent::NotifyWeaponEquipped() {
}

void UWeaponBalanceStateComponent::NotifyWeaponAttached() {
}

void UWeaponBalanceStateComponent::NotifyFirstPersonCreated() {
}

UWeaponBalanceStateComponent::UWeaponBalanceStateComponent() {
    this->MaterialWearAspect = NULL;
    this->PlayerMeleeOverrideAspect = NULL;
    this->CurrentTrinketPart = NULL;
    this->CurrentSkinPart = NULL;
    this->CachedCustomizationComponent = NULL;
    this->WeaponPrivate = NULL;
}

