#include "GrenadeBehavior_PayloadMirv.h"

UGrenadeBehavior_PayloadMirv::UGrenadeBehavior_PayloadMirv() {
    this->MinSpawnOffsetAngle = 10.00f;
    this->MaxSpawnOffsetAngle = 35.00f;
    this->MirvSpeed = 850.00f;
    this->MirvGravityScale = 1.50f;
    this->MirvChildSpawnDelay = 0.00f;
    this->MirvBeginAudioEvent = NULL;
    this->MirvChildSpawnAudioEvent = NULL;
    this->bMirvAlongSurfaceHitNormal = true;
    this->bMirvOnFirstBounce = true;
}

