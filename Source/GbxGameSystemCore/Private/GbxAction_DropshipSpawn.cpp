#include "GbxAction_DropshipSpawn.h"

UGbxAction_DropshipSpawn::UGbxAction_DropshipSpawn() {
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->AnimSlot = TEXT("FullBody");
    this->RotationLerpTime = 0.25f;
    this->MoveWithSpawnPointTime = 0.25f;
    this->SwitchToFallingTime = 0.10f;
    this->AnimStart = NULL;
    this->AnimInAir = NULL;
    this->AnimRecovery = NULL;
}

