#include "CarnivoraFakeTurrets.h"

FCarnivoraFakeTurrets::FCarnivoraFakeTurrets() {
    this->ShootingStyle = ECarnivoraFakeTurretShootingStyle::TARGET_AROUND_PLAYER;
    this->MinDelayBetweenBurstWave = 0.00f;
    this->MinDelayInsideBurstShot = 0.00f;
    this->NbBulletPerBurst = 0;
    this->LightProjectileData = NULL;
    this->ProjectileSpeed = 0.00f;
    this->MaxPrediction = 0.00f;
    this->DamageType = NULL;
    this->Range = 0.00f;
    this->DistanceFromPoint = 0.00f;
    this->MaxAngle = 0.00f;
    this->DirectHitPct = 0.00f;
    this->SpreadAngle = 0.00f;
    this->DrawDebugProjectileLine = false;
    this->CurrentTargetActor = NULL;
}

