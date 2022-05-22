#include "OakAction_Anim.h"

class AWeapon;


void UOakAction_Anim::K2_SetWeaponSlotHidden(bool bHidden) const {
}

void UOakAction_Anim::K2_SetWeaponsHidden(bool bHidden) const {
}

void UOakAction_Anim::K2_SetUseActionSkillCrosshair(bool bNewUseActionSkillCrosshair) const {
}

void UOakAction_Anim::K2_SetPlayerMeleeWeaponVisible(bool bVisible) const {
}

void UOakAction_Anim::K2_SetPauseSprinting(bool bPaused) const {
}

void UOakAction_Anim::K2_SetLockObjectUse(bool bLocked) const {
}

void UOakAction_Anim::K2_SetLockInput(bool bLocked) const {
}

void UOakAction_Anim::K2_SetFirstPersonLegsHidden(bool bHidden) const {
}

void UOakAction_Anim::K2_SetEchoDeviceEquipped(bool bEquipped) const {
}

void UOakAction_Anim::K2_SetCameraMode(FName NewCameraMode, float BlendTimeOverride) const {
}

void UOakAction_Anim::K2_SetBlockSprinting(bool bBlocked) const {
}

void UOakAction_Anim::K2_SetBlockJumping(bool bBlocked) const {
}

void UOakAction_Anim::K2_SetBlockEquipAnimation(bool bBlocked) const {
}

void UOakAction_Anim::K2_SetBlockedWeaponActions(bool bBlocked, int32 WeaponActionsMask) const {
}

void UOakAction_Anim::K2_SetBlockEchoMenu(bool bBlocked) const {
}

void UOakAction_Anim::K2_RestoreCameraMode(float BlendTimeOverride) const {
}

AWeapon* UOakAction_Anim::K2_GetWeapon() const {
    return NULL;
}

UOakAction_Anim::UOakAction_Anim() {
    this->bBlockWeaponActions = false;
    this->bInterruptWeaponActions = false;
    this->WeaponActions = -1;
    this->bHideWeapons = false;
    this->bHideWeaponSlot = false;
    this->bHasAnimSlotWeapValue = false;
    this->BlendInWeap = 0.25f;
    this->bHasBlendInWeapValue = false;
    this->DefaultBlendOutWeap = 0.25f;
    this->bHasBlendOutWeapValue = false;
    this->bBlockSprinting = false;
    this->bPauseSprinting = false;
    this->bBlockJumping = false;
    this->bBlockECHOMenu = false;
    this->bLockInput = false;
    this->bLockUsingObjects = false;
    this->bUseActionSkillCrosshair = false;
    this->bShowPlayerMeleeWeapon = false;
    this->bEquipEchoDevice = false;
    this->bInterruptWhenZoomed = false;
    this->bOverrideBlendOutWhenInterrupted = true;
    this->bHideFirstPersonLegs = false;
    this->bBringUpWeaponAtEnd = false;
    this->BringUpWeaponBlendInTime = 0.00f;
    this->bInterruptBringUpWeaponWhenZoomed = true;
    this->bPlayBringUpWeaponOnSameSlot = false;
    this->bBlockEquipAnimation = false;
    this->bCheckFootDownWhenFreezing = false;
    this->CameraModeBlendInTimeOverride = -1.00f;
    this->CameraModeBlendOutTimeOverride = -1.00f;
    this->AnimationWeap = NULL;
}

