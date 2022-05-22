#include "OakWeaponVehicleData.h"

UOakWeaponVehicleData::UOakWeaponVehicleData() {
    this->SkeletalMesh = NULL;
    this->bNeverDistanceCull = true;
    this->bMeshUseAttachParentBound = false;
    this->bUseDualWeaponMesh = false;
    this->bChildMeshUseAttachParentBound = false;
    this->LeftParentSocket = TEXT("L_Pitch");
    this->LeftMeshComponentName = TEXT("LeftWeaponMesh3P");
    this->LeftSkeletalMesh = NULL;
    this->RightParentSocket = TEXT("R_Pitch");
    this->RightMeshComponentName = TEXT("RightWeaponMesh3P");
    this->RightSkeletalMesh = NULL;
    this->bUsePhysicAsset = false;
    this->PhysicAsset = NULL;
    this->AnimClass = NULL;
    this->ShotAnimation = NULL;
    this->ShotAnimationBlendInTime = 0.00f;
    this->ShotAnimationBlendOutTime = 0.10f;
    this->ShotAnimationPlayRate = 1.00f;
    this->SlotName = TEXT("FullBody");
    this->DualWeaponAnimClass = NULL;
    this->DualWeaponShotAnimation = NULL;
    this->DualWeaponShotAnimationBlendInTime = 0.00f;
    this->DualWeaponShotAnimationBlendOutTime = 0.10f;
    this->DualWeaponShotAnimationPlayRate = 1.00f;
    this->DualWeaponSlotName = TEXT("FullBody");
    this->VehicleWeaponsSwf = NULL;
    this->bEnableSecondaryAction = false;
    this->SecondaryActionUseMode = 255;
    this->bUseIdleVFX = false;
    this->IdleVFXType = EWET_GameWeaponEffectType9;
    this->bUseLinkedSlotDualWield = false;
}

