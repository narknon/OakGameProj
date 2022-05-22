#include "OakStanceSelector.h"

UOakStanceSelector::UOakStanceSelector() {
    this->AICombatStanceProvider = NULL;
    this->AIAlertStanceProvider = NULL;
    this->AIFriendlyTargetStanceProvider = NULL;
    this->AIFlyingStanceProvider = NULL;
    this->CrouchingStanceProvider = NULL;
    this->SprintingStanceProvider = NULL;
    this->InjuredStanceProvider = NULL;
    this->InjuredSprintStanceProvider = NULL;
    this->AIAngryPatrolStanceProvider = NULL;
}

