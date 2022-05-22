#include "GrenadeBehavior_PayloadBouncy.h"

UGrenadeBehavior_PayloadBouncy::UGrenadeBehavior_PayloadBouncy() {
    this->TrailSystemTemplate = NULL;
    this->BouncyForwardBounceVelocity = 700.00f;
    this->BouncyUpdwardBounceVelocity = 500.00f;
    this->BouncyBounceEvent = NULL;
}

