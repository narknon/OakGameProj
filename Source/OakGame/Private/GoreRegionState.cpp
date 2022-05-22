#include "GoreRegionState.h"

FGoreRegionState::FGoreRegionState() {
    this->GoreData = NULL;
    this->bOverrideStumpSocket = false;
    this->bOverrideRootDamageBone = false;
    this->bOverrideStumpBoneScale = false;
    this->bOverrideLimbSocket = false;
    this->LimbScale = 0.00f;
}

