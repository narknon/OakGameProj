#include "FiringPatternData.h"

UFiringPatternData::UFiringPatternData() {
    this->bFireRandomlyFromPattern = false;
    this->bResetPatternAfterEachShot = false;
    this->bScalePattern = false;
    this->bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot = false;
    this->bSuppressWeaponSpread = false;
    this->bSingleWeaponSpread = false;
    this->BasePatternScale = 1.00f;
    this->MinPatternScale = 0.00f;
    this->RequiredProjectilesPerShot = 1;
}

