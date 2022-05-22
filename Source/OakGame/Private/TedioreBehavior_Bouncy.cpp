#include "TedioreBehavior_Bouncy.h"

UTedioreBehavior_Bouncy::UTedioreBehavior_Bouncy() {
    this->BouncyLifeSpan = 6.00f;
    this->MaxNumBounces = 10;
    this->Bounciness = 0.90f;
    this->Friction = 0.10f;
    this->ProjectileGravityScale = 1.30f;
    this->TriggerTime = 6.00f;
    this->BounceVelocity = 1400.00f;
    this->BouncyTrail = NULL;
    this->BounceEvent = NULL;
    this->MirvBounceEvent = NULL;
}

