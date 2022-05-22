#include "TedioreBehavior_MIRV.h"

UTedioreBehavior_MIRV::UTedioreBehavior_MIRV() {
    this->SpawnAngleOffset = 40.00f;
    this->MirvSpawnOffset = 0.00f;
    this->MirvChildClass = NULL;
    this->bHideWeaponVisuals = true;
    this->MirvChildDamageScalar = 0.50f;
    this->MirvHomingInitialDelay = 0.20f;
    this->MirvHomingRetryDelay = 0.50f;
}

