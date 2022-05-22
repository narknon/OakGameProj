#include "OakAction_PhysicalDeath.h"

void UOakAction_PhysicalDeath::K2_SetRagdollWhenGoredRegions(int32 NewRagdollWhenGoredRegions) {
}

UOakAction_PhysicalDeath::UOakAction_PhysicalDeath() {
    this->ElementalDeathEffects = EOakElementalDeathEffects::Default;
    this->RagdollWhenGoredRegions = 13;
    this->bSkipForcedDeathPhysicsCheck = false;
}

