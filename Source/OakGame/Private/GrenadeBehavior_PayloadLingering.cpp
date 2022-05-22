#include "GrenadeBehavior_PayloadLingering.h"

UGrenadeBehavior_PayloadLingering::UGrenadeBehavior_PayloadLingering() {
    this->LingeringBurstDuration = 1.20f;
    this->LingeringBurstDelay = 1.00f;
    this->FinalExplosionRadius = 50.00f;
    this->MirvChildFinalExplosionRadius = 30.00f;
    this->RainChildFinalExplosionRadius = 30.00f;
    this->LingeringBounceVelocity = 400.00f;
    this->LingeringNumBounces = 3;
    this->LingeringBounciness = 0.45f;
    this->bUseCustomMeshOffset = true;
    this->CustomMeshOffset = 10.00f;
    this->CustomOffsetMesh = NULL;
}

