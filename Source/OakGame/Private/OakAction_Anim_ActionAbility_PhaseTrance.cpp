#include "OakAction_Anim_ActionAbility_PhaseTrance.h"

class ACharacter;

void UOakAction_Anim_ActionAbility_PhaseTrance::OnPlayerLanded(const FHitResult& HitResult) {
}

void UOakAction_Anim_ActionAbility_PhaseTrance::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UOakAction_Anim_ActionAbility_PhaseTrance::JumpToMontageSection_SirenAndArms(FName SectionName) {
}

void UOakAction_Anim_ActionAbility_PhaseTrance::JumpToMontageSection_Arms(FName SectionName) {
}



UOakAction_Anim_ActionAbility_PhaseTrance::UOakAction_Anim_ActionAbility_PhaseTrance() {
    this->bRegisterAsGhostArmController = false;
    this->GhostArmMaterial = NULL;
    this->bFirstPersonGhostArmsVisible = false;
    this->bThirdPersonGhostArmsVisible = false;
    this->bWantsCharacterLandedEvent = false;
    this->OwnerActionAbility_PhaseTrance = NULL;
    this->GhostArmsMesh_3rd = NULL;
}

