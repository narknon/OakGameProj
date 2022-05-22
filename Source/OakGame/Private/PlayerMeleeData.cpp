#include "PlayerMeleeData.h"

UPlayerMeleeData::UPlayerMeleeData() {
    this->OverrideCondition = NULL;
    this->OverridePriority = 1;
    this->bOnlyOverrideOnSuccess = false;
    this->bCanHitUntargetables = false;
    this->bUseTargetHoming = true;
    this->TargetMaxDistance = 0.00f;
    this->ImpactDistance = 0.00f;
    this->TargetMaxAngleYaw = 0.00f;
    this->TargetMaxAngleUpPitch = 0.00f;
    this->TargetMaxAngleDownPitch = 0.00f;
    this->MaxPitchUpAngle = 0.00f;
    this->RotateInterpSpeed = 10.00f;
    this->MaxYawRate = -1.00f;
    this->MaxPitchRate = 0.00f;
    this->SocketProxomity = 0.00f;
    this->MaxSuccessMeleeHeightOffsetWhenEnemyBelow = 50.00f;
    this->MaxSuccessMeleeHeightOffsetWhenEnemyAbove = 50.00f;
    this->SuccessAction = NULL;
    this->FailureAction = NULL;
    this->DamageData = NULL;
    this->SuccessDamageData = NULL;
    this->MeleeCooldown = 0.00f;
    this->MeleeMissCooldown = 0.50f;
    this->MeleeImpact = NULL;
    this->SuccessMeleeFeedback = NULL;
    this->FailMeleeFeedback = NULL;
    this->bReverseImpact = false;
    this->DefaultReverseImpactForce = 0.00f;
    this->UntargetableTraceChannel = ECC_Pawn;
    this->UntargetableTraceRadius = 0.00f;
}

