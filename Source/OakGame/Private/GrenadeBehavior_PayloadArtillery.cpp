#include "GrenadeBehavior_PayloadArtillery.h"

UGrenadeBehavior_PayloadArtillery::UGrenadeBehavior_PayloadArtillery() {
    this->ArtilleryDamageData = NULL;
    this->StatusEffectChance = 0.50f;
    this->StatusEffectDuration = 0.50f;
    this->StatusEffectDamage = 0.20f;
    this->ArtilleryRadius = 500.00f;
    this->ArtilleryAdditionalDuration = 4.00f;
    this->ArtilleryExplosionRadius = 50.00f;
    this->ArtilleryLastBounceVelocity = 400.00f;
    this->ArtilleryLastBounceBounciness = 0.60f;
    this->ArtilleryLastBounceFriction = 0.20f;
    this->bUseCustomMeshOffset = true;
    this->CustomMeshOffset = 10.00f;
    this->CustomOffsetMesh = NULL;
}

