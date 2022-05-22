#include "GrenadeBehavior_PayloadDivider.h"

UGrenadeBehavior_PayloadDivider::UGrenadeBehavior_PayloadDivider() {
    this->InitialDivideDelay = 0.27f;
    this->MinSpawnOffsetAngle = 1.50f;
    this->MaxSpawnOffsetAngle = 5.00f;
    this->DivideParticleTemplate = NULL;
    this->DividerAudioEvent = NULL;
}

