#include "GbxAction_NavJump.h"



UGbxAction_NavJump::UGbxAction_NavJump() {
    this->RotationTime = 0.25f;
    this->bCancelRotationOnActionStop = false;
    this->bApplyRotationOnStart = true;
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->AnimSlot = TEXT("FullBody");
    this->RotationDirective = ENavJumpRotation::FaceJumpTarget;
    this->bLockRotation = true;
    this->DisablePhysicsStage = ENavJumpStage::Idle;
    this->EnablePhysicsStage = ENavJumpStage::Exit;
    this->ArcSpeed = 0.00f;
    this->ArcAnglePercent = 0.00f;
    this->MaxPrediction = 0.00f;
    this->ArcTimeScale = 1.00f;
    this->bLimitHitReactions = true;
    this->JumpEnter = NULL;
    this->JumpExit = NULL;
    this->JumpIdle = NULL;
}

