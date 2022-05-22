#include "GFxFightForYourLifeWidget.h"

class UFightForYourLifeComponent;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;

void UGFxFightForYourLifeWidget::OnRevivingStop(bool IsHealed) const {
}

void UGFxFightForYourLifeWidget::OnRevivingStart() const {
}

void UGFxFightForYourLifeWidget::OnRevivingNonLocalStop(UFightForYourLifeComponent* OtherFFYL) const {
}

void UGFxFightForYourLifeWidget::OnInputDeviceChanged() const {
}

void UGFxFightForYourLifeWidget::OnGiveUpStop() const {
}

void UGFxFightForYourLifeWidget::OnDownStop() const {
}

void UGFxFightForYourLifeWidget::OnDownStart() const {
}

void UGFxFightForYourLifeWidget::OnDownFinish() const {
}

void UGFxFightForYourLifeWidget::OnBeingRevivedStop() const {
}

void UGFxFightForYourLifeWidget::OnBeingRevivedStart() const {
}

void UGFxFightForYourLifeWidget::OnActionSkillCoolingDown(UOakActionAbility* InActionAbility) const {
}

void UGFxFightForYourLifeWidget::OnActionSkillActivated(UOakActionAbility* InActionAbility) const {
}

void UGFxFightForYourLifeWidget::OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const {
}

UGFxFightForYourLifeWidget::UGFxFightForYourLifeWidget() {
    this->AssociatedFFYLComponent = NULL;
    this->IconSwitcher = NULL;
    this->LabelContainer = NULL;
    this->MainLabel = NULL;
    this->DyingBar = NULL;
    this->ReviveBar = NULL;
    this->MaxHoldToGiveUpTime = 0.25f;
    this->ActionText = NULL;
    this->GiveUpHint = NULL;
    this->FFYLHUDState = NULL;
}

