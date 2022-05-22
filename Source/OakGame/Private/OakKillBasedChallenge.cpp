#include "OakKillBasedChallenge.h"

UOakKillBasedChallenge::UOakKillBasedChallenge() {
    this->RequiredWeaponType = NULL;
    this->RequiredManufacturer = NULL;
    this->bRequireHostile = false;
    this->bRequireCrit = false;
    this->bRequireZoom = false;
    this->bRequireNoZoom = false;
    this->bRequireCloseRange = false;
    this->CloseRangeMaxDistance = 0.00f;
    this->bRequireLongRange = false;
    this->LongRangeMinDistance = 0.00f;
    this->bRequireCrouch = false;
    this->bRequireUnaware = false;
    this->bRequireMovingFullSpeed = false;
    this->bRequireSliding = false;
    this->bRequireDirectHit = false;
    this->bRequireIndirectHit = false;
    this->bRequireOneShotHealth = false;
    this->bRequireOneShotShield = false;
    this->bRequireWeaponKill = false;
    this->bRequireGrenadeKill = false;
    this->RequiredGrenadePayloadType = NULL;
}

