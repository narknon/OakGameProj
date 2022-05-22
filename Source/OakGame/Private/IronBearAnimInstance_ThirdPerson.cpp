#include "IronBearAnimInstance_ThirdPerson.h"

class UOakActionAbilityAugmentData;

bool UIronBearAnimInstance_ThirdPerson::IsAugmentSlotted(UOakActionAbilityAugmentData* InAugment) {
    return false;
}

UIronBearAnimInstance_ThirdPerson::UIronBearAnimInstance_ThirdPerson() {
    this->R_Fist_Weight = 0.00f;
    this->L_Fist_Weight = 0.00f;
}

