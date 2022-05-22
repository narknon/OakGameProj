#include "GbxAction_Launch.h"

UGbxAction_Launch::UGbxAction_Launch() {
    this->VelocityMinimum = 250.00f;
    this->VelocityScale = 1.00f;
    this->VelocityUpBoost = 0.40f;
    this->RotationTime = 0.00f;
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->AnimSlot = TEXT("FullBody");
    this->AnimInAir = NULL;
    this->AnimRecovery = NULL;
}

