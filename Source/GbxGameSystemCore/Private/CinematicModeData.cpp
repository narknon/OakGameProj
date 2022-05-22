#include "CinematicModeData.h"

UCinematicModeData::UCinematicModeData() {
    this->bCinematicMode = true;
    this->bHidePlayer = true;
    this->bHidePlayerOwnedVehicles = true;
    this->bHideNPC = false;
    this->bAffectsHUD = true;
    this->bAffectsMovement = true;
    this->bAffectsPawnRotation = true;
    this->bAffectsTurning = true;
    this->bCinematicSplitScreen = false;
    this->bEnableGodMode = true;
    this->bEnableNoTarget = true;
    this->AudioMode = ECinematicAudioMode::StandardCinematic;
}

