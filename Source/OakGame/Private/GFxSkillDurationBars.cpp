#include "GFxSkillDurationBars.h"
#include "Templates/SubclassOf.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;

void UGFxSkillDurationBars::OnActionSkillCoolingDown(UOakActionAbility* InActionAbility) const {
}

void UGFxSkillDurationBars::OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const {
}

void UGFxSkillDurationBars::OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const {
}

UGFxSkillDurationBars::UGFxSkillDurationBars() {
    this->SkillBarWrapper = NULL;
    this->LeftSkillBar = NULL;
    this->RightSkillBar = NULL;
}

