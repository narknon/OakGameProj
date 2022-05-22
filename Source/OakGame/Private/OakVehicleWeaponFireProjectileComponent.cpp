#include "OakVehicleWeaponFireProjectileComponent.h"

class AActor;

void UOakVehicleWeaponFireProjectileComponent::SpawnDummyProjectile(int32 Index) {
}

void UOakVehicleWeaponFireProjectileComponent::SpawnAllDummyProjectiles() {
}

void UOakVehicleWeaponFireProjectileComponent::SetCurrentFiredProjectileIndex(int32 NewIndex) {
}

void UOakVehicleWeaponFireProjectileComponent::PlayDummyProjectileTransitOut(int32 Index, float PlayRate) {
}

void UOakVehicleWeaponFireProjectileComponent::PlayDummyProjectileTransitIn(int32 Index, float PlayRate) {
}

void UOakVehicleWeaponFireProjectileComponent::NotifyHiddenDummyProjectile(bool Hidden) {
}

void UOakVehicleWeaponFireProjectileComponent::HideDummyProjectile() {
}

AActor* UOakVehicleWeaponFireProjectileComponent::GetDummyProjectile(int32 Index) const {
    return NULL;
}

int32 UOakVehicleWeaponFireProjectileComponent::GetCurrentFiredProjectileIndex() const {
    return 0;
}

int32 UOakVehicleWeaponFireProjectileComponent::CycleCurrentFiredProjectileIndex(int32 Step) {
    return 0;
}

UOakVehicleWeaponFireProjectileComponent::UOakVehicleWeaponFireProjectileComponent() {
    this->DelayDummyProjectile = 0.65f;
    this->ProjectileData = NULL;
}

