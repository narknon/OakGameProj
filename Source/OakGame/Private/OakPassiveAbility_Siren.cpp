#include "OakPassiveAbility_Siren.h"


EPhaseTranceElementalType UOakPassiveAbility_Siren::GetAttunedType() {
    return EPhaseTranceElementalType::None;
}

void UOakPassiveAbility_Siren::ActivateSirenGhostArms(const FOakPassiveAbilitySirenGhostArmControllerSpec& InSpec) {
}

UOakPassiveAbility_Siren::UOakPassiveAbility_Siren() {
    this->bIsElementallyAttunedPassive = false;
    this->AttunedElementData = NULL;
}

