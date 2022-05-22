#include "HitReactionLayer_OakBase.h"

UHitReactionLayer_OakBase::UHitReactionLayer_OakBase() {
    this->LaunchChanceScale = 2.00f;
    this->StaggerChanceScale = 1.50f;
    this->ForceOnlyDamageSource = NULL;
    this->MassTable = NULL;
    this->FlinchTag = NULL;
    this->StaggerTag = NULL;
    this->LaunchTag = NULL;
}

