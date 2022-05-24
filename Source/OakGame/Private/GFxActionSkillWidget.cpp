#include "GFxActionSkillWidget.h"
#include "Templates/SubclassOf.h"

class UGbxAbility;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

void UGFxActionSkillWidget::SetRemainingCharges(int32 NewRemainingCharges) const {
}

void UGFxActionSkillWidget::SetBarColor(FLinearColor InColor) const {
}



void UGFxActionSkillWidget::OnTrackedActionAbilityStateChanged(UGbxAbility* UpdatedAbility) const {
}

void UGFxActionSkillWidget::OnActionSkillFailedActivation(UOakActionAbility* InActionAbility, uint8 ErrorCode) const {
}

void UGFxActionSkillWidget::OnActionSkillChargeCountChanged(UOakActionAbility* InActionAbility) const {
}

void UGFxActionSkillWidget::OnActionSkillActivated(UOakActionAbility* InActionAbility) const {
}

void UGFxActionSkillWidget::OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const {
}

void UGFxActionSkillWidget::ForceResourceProgress(float PercentProgress) const {
}

void UGFxActionSkillWidget::extActivatedAnimationComplete() const {
}

UGFxActionSkillWidget::UGFxActionSkillWidget() {
    this->GFxKEY_ActionSkillInner = TEXT("inner");
    this->ActionSkillInner = NULL;
    this->GFxKEY_CantUseFlourish = TEXT("cantUseFlourish");
    this->CantUseFlourish = NULL;
    this->GFxKEY_StatusBar = TEXT("statusBar");
    this->StatusBar = NULL;
    this->GFxKEY_CountdownTimerText = TEXT("countdownTimer");
    this->GFxKEY_SkillIconContainer = TEXT("skillTextureContainer");
    this->SkillIconContainer = NULL;
    this->DynamicSkillIcon = NULL;
    this->GFxKEY_RemainingChargesDisplay = TEXT("remainingCharges");
    this->GFxKEY_RemainingChargesContainer = TEXT("remainingChargesContainer");
    this->SlotToWidgetMapping = ESkillWidgetSlot::ActionSkillWidget;
    this->CoundownSecondsMaxValue = 3;
    this->CountdownSecondsAudioValue = 3;
    this->SlotIndex = 0;
    this->SkillUsedFailAudioEventName = TEXT("Skill_Used_Fail");
    this->TrackedActionAbility = NULL;
}

