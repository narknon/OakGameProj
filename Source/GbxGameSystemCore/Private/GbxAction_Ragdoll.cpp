#include "GbxAction_Ragdoll.h"

UGbxAction_Ragdoll::UGbxAction_Ragdoll() {
    this->RagdollDelayTime = -1.00f;
    this->UpwardForceMultiplier = 1.50f;
    this->TerminalResultantVelocity = 7500.00f;
    this->bHaltMotionBeforeImpulseApplication = false;
    this->RagdollAnimBlendInTime = 0.10f;
    this->bPlayLoopingAnimWhileNotIdle = false;
    this->MinRagdollTime = 0.20f;
    this->AnimSlot = TEXT("FullBody");
    this->AttachedObjects.AddDefaulted(2);
    this->RecoveryAnimations = NULL;
    this->DeathReactionTag = NULL;
    this->bCanGetup = false;
    this->GetupIdleTime = 1.00f;
    this->GetupIdleSpeedThreshold = 100.00f;
    this->GetupTestBone = TEXT("Hips");
    this->TestBoneUpAxis = EAxis::X;
    this->bUpAxisIsNegative = false;
    this->TestBoneForwardAxis = EAxis::Y;
    this->bForwardAxisIsNegative = true;
    this->GetupBlendInTime = 0.50f;
    this->GetupBlendOutTime = 0.10f;
}

