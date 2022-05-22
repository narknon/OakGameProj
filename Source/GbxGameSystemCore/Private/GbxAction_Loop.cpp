#include "GbxAction_Loop.h"

class AActor;

void UGbxAction_Loop::OnStop_Implementation(AActor* Actor) {
}

void UGbxAction_Loop::OnLoop_Implementation(AActor* Actor) {
}

void UGbxAction_Loop::K2_StopLooping() const {
}

UGbxAction_Loop::UGbxAction_Loop() {
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->StartToLoopBlendTime = 0.00f;
    this->LoopToLoopBlendTime = 0.00f;
    this->LoopToStopBlendTime = 0.00f;
    this->AnimSlot = TEXT("FullBody");
    this->bLetLoopFinish = true;
    this->bUseLoopCount = false;
    this->bUseLoopTime = false;
    this->LoopCondition = NULL;
    this->bUseLoopCondition = false;
    this->bPlay3rd = true;
    this->bPlay1st = false;
}

