#include "UsabilityInfo.h"

FUsabilityInfo::FUsabilityInfo() {
    this->bCanUse = false;
    this->bCanInteractWith = false;
    this->bCanPrimaryUse = false;
    this->bCanPrimaryHoldUse = false;
    this->bCanSecondaryUse = false;
    this->bCanSecondaryHoldUse = false;
    this->bCanShowUseDef = false;
    this->PrimaryUseDef = NULL;
    this->PrimaryHoldUseDef = NULL;
    this->SecondaryUseDef = NULL;
    this->SecondaryHoldUseDef = NULL;
}

