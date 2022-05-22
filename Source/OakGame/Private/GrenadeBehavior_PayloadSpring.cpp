#include "GrenadeBehavior_PayloadSpring.h"

UGrenadeBehavior_PayloadSpring::UGrenadeBehavior_PayloadSpring() {
    this->SpringNumBounces.AddDefaulted(3);
    this->InitialSpringSpeed = 1050.00f;
    this->SpringGravityScale = 1.35f;
    this->SpringTrail = NULL;
    this->SpringAudioEvent = NULL;
    this->LongbowSpringDistance = 600.00f;
    this->LongbowHitTeleportOffset = 100.00f;
}

