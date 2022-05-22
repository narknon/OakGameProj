#include "StuckTeleport.h"

FStuckTeleport::FStuckTeleport() {
    this->bEnableStuckTeleport = false;
    this->ForwardStuckValue = 0.00f;
    this->CantMoveValuePerSec = 0.00f;
    this->StuckTeleportTrigger = 0.00f;
    this->StuckDecay = 0.00f;
    this->bShowDebug = false;
}

