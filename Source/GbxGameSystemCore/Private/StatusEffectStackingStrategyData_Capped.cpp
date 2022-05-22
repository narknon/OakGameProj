#include "StatusEffectStackingStrategyData_Capped.h"

UStatusEffectStackingStrategyData_Capped::UStatusEffectStackingStrategyData_Capped() {
    this->MaxCount = 1;
    this->bCapPerOwner = false;
    this->bNoInfiniteDuration = false;
    this->SelectionCriteria = EStatusEffectStackingInstanceSelectionCriteria::LeastTimeRemaining;
    this->ReplacementCriteria = EStatusEffectStackingInstanceReplacementCriteria::ChooseSpec;
}

