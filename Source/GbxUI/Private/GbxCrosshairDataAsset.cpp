#include "GbxCrosshairDataAsset.h"

UGbxCrosshairDataAsset::UGbxCrosshairDataAsset() {
    this->CrosshairFrameName = TEXT("AssaultCrosshair");
    this->CrosshairActorClass = NULL;
    this->bHideMinSpreadReticle = false;
    this->bHideAccuracyReticle = false;
    this->ChargeClipState = EChargeClipState::NOCHARGE;
}

