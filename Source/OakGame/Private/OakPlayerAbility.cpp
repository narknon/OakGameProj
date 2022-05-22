#include "OakPlayerAbility.h"

class UOakPlayerAbilitySlotData;

bool UOakPlayerAbility::IsSlotted() const {
    return false;
}

UOakPlayerAbilitySlotData* UOakPlayerAbility::GetCurrentSlot() const {
    return NULL;
}

UOakPlayerAbility::UOakPlayerAbility() {
    this->bMustBeSlotted = true;
    this->OakCharacterPlayer = NULL;
    this->OakManager = NULL;
}

