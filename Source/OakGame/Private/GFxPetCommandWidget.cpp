#include "GFxPetCommandWidget.h"

class AOakCharacter;

void UGFxPetCommandWidget::OnPetSpawnStateChanged(AOakCharacter* Pet) const {
}

void UGFxPetCommandWidget::OnPetAttackCommandFailed() const {
}

void UGFxPetCommandWidget::OnInputDeviceChanged() const {
}

UGFxPetCommandWidget::UGFxPetCommandWidget() {
    this->StateWrapper = NULL;
    this->CommandHint = NULL;
    this->PetIcon = NULL;
    this->CantUseFlourish = NULL;
    this->StatusBar = NULL;
    this->CountdownTimerText = NULL;
    this->DynamicSkillIcon = NULL;
    this->MaxPreAttackTime = 0.10f;
    this->CoundownSecondsMaxValue = 3;
    this->CountdownSecondsAudioValue = 3;
    this->SkillUsedFailAudioEventName = TEXT("Skill_Used_Fail");
    this->CachedBeastmasterComponent = NULL;
}

