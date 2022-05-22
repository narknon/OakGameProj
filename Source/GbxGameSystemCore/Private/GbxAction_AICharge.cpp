#include "GbxAction_AICharge.h"

class AActor;

void UGbxAction_AICharge::OnStrike_Implementation(AActor* Actor) const {
}

void UGbxAction_AICharge::OnStopForFriendly_Implementation(AActor* Actor) const {
}

void UGbxAction_AICharge::OnReachCliff_Implementation(AActor* Actor) const {
}

void UGbxAction_AICharge::OnMiss_Implementation(AActor* Actor) const {
}

void UGbxAction_AICharge::OnLoop_Implementation(AActor* Actor) const {
}

void UGbxAction_AICharge::OnHitWall_Implementation(AActor* Actor) const {
}

UGbxAction_AICharge::UGbxAction_AICharge() {
    this->bSetLoopSpeedManually = false;
    this->AnimLoopSpeed = 1000.00f;
    this->StartBlendInTime = 0.10f;
    this->LoopBlendInTime = 0.00f;
    this->StopBlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
}

