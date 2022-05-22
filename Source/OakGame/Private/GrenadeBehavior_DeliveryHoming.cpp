#include "GrenadeBehavior_DeliveryHoming.h"



UGrenadeBehavior_DeliveryHoming::UGrenadeBehavior_DeliveryHoming() {
    this->HomingStartDelay = 0.50f;
    this->HomingRetryDelay = 0.20f;
    this->HomingHitTargetDelay = 0.80f;
    this->HomingBounceDelay = 0.30f;
    this->HomingTemplate = NULL;
    this->HomingMaxSpeed = 1500.00f;
    this->HomingAcceleration = 1000.00f;
    this->HomingGravityScale = 0.40f;
    this->HomingFriction = 0.00f;
    this->HomingBounciness = 1.00f;
    this->EQSRetriggerDelay = 0.50f;
}

