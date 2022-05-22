#include "GbxBlockingVolume.h"

AGbxBlockingVolume::AGbxBlockingVolume() {
    this->bAlwaysRender = false;
    this->bBlockRockets = false;
    this->bBlockProjectiles = false;
    this->bBlockTossed = false;
    this->bBlockEnemyPawns = false;
    this->bBlockEnemyVehicles = false;
    this->bBlockFriendlyPawns = false;
    this->bBlockPlayerVehicles = false;
    this->bBlockUsingThings = false;
    this->bAllowStandingOn = false;
    this->bBlockCamera = false;
    this->bEnemyPawnsPropEnabled = true;
    this->bEnemyVehiclesPropEnabled = true;
    this->bFriendlyPawnsPropEnabled = true;
    this->bPlayerVehiclesPropEnabled = true;
}

