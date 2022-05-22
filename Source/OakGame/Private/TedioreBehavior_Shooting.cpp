#include "TedioreBehavior_Shooting.h"


UTedioreBehavior_Shooting::UTedioreBehavior_Shooting() {
    this->MuzzleEffectCollection = NULL;
    this->LaserSightTemplate = NULL;
    this->ShotDamageScale = 1.00f;
    this->ShotSpeedScale = 1.00f;
    this->MinShotsFired = 0;
    this->NumShotsFiredScale = 1.00f;
    this->bUseMaxAmmo = false;
    this->ConeAngleMin = 0.00f;
    this->ConeAngleMax = 2.00f;
}

