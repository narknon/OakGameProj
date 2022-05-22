#include "LadderInteractData.h"

ULadderInteractData::ULadderInteractData() {
    this->RequiredViewAlignment = 0.90f;
    this->RequiredRearViewAlignment = 0.90f;
    this->bCanMountLadderFromTopWhileFacing = false;
    this->MaxVerticalSpeedToGrabLadder = 2000.00f;
    this->JumpRegrabDelay = 0.50f;
    this->TopEnterAnimSyncTime = 0.10f;
    this->TopExitAnimSyncTime = 0.10f;
    this->ExitLocationDepthOffset = 0.00f;
    this->ExitingTopThresholdHeightOffset = 0.00f;
    this->EnteringTopTargetHeightOffset = 0.00f;
    this->EnteringTopFeetToLadderThreshold = 20.00f;
}

