#include "GFxSkillScreenLoadoutSlot.h"

class UOakActionAbility;

void UGFxSkillScreenLoadoutSlot::OnAssociatedResourcePoolUpdated(FGameResourcePoolReference& ResourcePool, float NewValue) {
}

void UGFxSkillScreenLoadoutSlot::OnActionSkillCoolingDown(UOakActionAbility* InActionAbility) {
}

void UGFxSkillScreenLoadoutSlot::OnActionSkillActivated(UOakActionAbility* InActionAbility) {
}

UGFxSkillScreenLoadoutSlot::UGFxSkillScreenLoadoutSlot() {
    this->LockedOverlay = NULL;
    this->ReceiveHighlight = NULL;
    this->SlotIndicator = NULL;
    this->ReceiveHighlightState = ESkillScreenReceiveHighlightState::Off;
    this->AssociatedActiveAbility = NULL;
    this->SwapSlot = NULL;
    this->IronCubSwapSlot = NULL;
    this->AugmentSlotData = NULL;
    this->AbilitySlotData = NULL;
    this->CharacterAugmentSlotData = NULL;
}

