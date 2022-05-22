#include "AIAspectSettings_Follow.h"

FAIAspectSettings_Follow::FAIAspectSettings_Follow() {
    this->MaxSpeedScale = 0.00f;
    this->MinSpeedScale = 0.00f;
    this->GoalUpdatePeriod = 0.00f;
    this->InvalidWaitPeriod = 0.00f;
    this->TeleportWaitPeriod = 0.00f;
    this->bAllowTeleport = false;
    this->TeleportDistance = 0.00f;
    this->bTeleportWhenFar = false;
    this->bContinueWhileClose = false;
}

