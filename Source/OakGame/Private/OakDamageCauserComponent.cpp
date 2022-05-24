#include "OakDamageCauserComponent.h"

class UObject;
class UWeaponShotModifier;

void UOakDamageCauserComponent::UnregisterWeaponShotModifier(UWeaponShotModifier* Modifier, UObject* ModifierOwner) {
}

void UOakDamageCauserComponent::SetShouldPassOverkillDamageToNextShot(bool bNewValue, FName Reason) {
}

void UOakDamageCauserComponent::RegisterWeaponShotModifier(UWeaponShotModifier* Modifier, UObject* ContextOverride, UObject* ModifierOwner) {
}

UOakDamageCauserComponent::UOakDamageCauserComponent() {
    this->bUsePlayerAsBalanceSourceForLevelSync = false;
    this->MaxPassOverkillDamageToNextShotMultiplier = 5.00f;
}

