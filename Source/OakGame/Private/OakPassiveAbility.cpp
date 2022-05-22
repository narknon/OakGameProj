#include "OakPassiveAbility.h"

void UOakPassiveAbility::TriggerPassiveAbilityEffect() {
}


void UOakPassiveAbility::OnGradeChanged_Implementation() {
}

bool UOakPassiveAbility::IsTriggeredEffectActive() const {
    return false;
}


UOakPassiveAbility::UOakPassiveAbility() {
    this->Grade = 0;
    this->bRegisterAsHUDPassiveAbility = false;
    this->Icon = NULL;
}

