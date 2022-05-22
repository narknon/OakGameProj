#include "AIAction_SimpleWeapon.h"

UAIAction_SimpleWeapon::UAIAction_SimpleWeapon() {
    this->bTakeRangesFromWeapon = true;
    this->bOverrideBurstCount = false;
    this->bOverrideBurstDelay = false;
    this->bOverrideAccuracy = false;
    this->bUseSuppressingFireTime = false;
    this->bUseRepositionTicket = true;
    this->RepositionTicket = NULL;
    this->bDistanceToTargetTestShouldFilterOnly = false;
    this->DefaultEnvQueryAsset = NULL;
    this->DefaultRepositionTicketAsset = NULL;
    this->SimpleWeaponVersion = 4;
}

