#include "ConditionalDamageModifier.h"

UConditionalDamageModifier::UConditionalDamageModifier() {
    this->AttackerCondition = NULL;
    this->bAttackerConditionFirstContextIsOverrideContextObject = false;
    this->bAttackerConditionSecondContextIsDamageCauser = false;
    this->DefenderCondition = NULL;
    this->bDefenderConditionFirstContextIsOverrideContextObject = false;
    this->bDefenderConditionSecondContextIsDamageCauser = false;
    this->DamageTypeFilterMode = EDamageFilterExprMode::MustMatch;
    this->DamageSourceFilterMode = EDamageFilterExprMode::MustMatch;
    this->bIncludeDamageSourceSubclasses = false;
    this->bUseHitDirectionAngle = false;
    this->bUseCriticalFilter = false;
    this->CriticalFilter = EConditionalDamageCriticalFilter::HitRegionMustBeCritical;
    this->bUseAreaDamageFilter = false;
    this->AreaDamageFilter = EConditionalAreaDamageFilter::MustNotBeRadiusDamage;
    this->bUseRandomChance = false;
    this->bCanTriggerOnBonusDamage = true;
    this->bAppliesToInstigatorChildren = false;
}

