#include "GrenadeBehavior_DeliveryRubberized.h"

UGrenadeBehavior_DeliveryRubberized::UGrenadeBehavior_DeliveryRubberized() {
    this->RubberizedBounceCount = 4;
    this->RubberizedExplosionData = NULL;
    this->RubberizedGrenadeEmitterTemplate = NULL;
    this->RubberizedForwardBounceVelocity = 700.00f;
    this->RubberizedUpdwardBounceVelocity = 500.00f;
    this->RubberizedBounceEvent = NULL;
    this->RubberizedDamageScalePerBounce = 1.10f;
    this->RubberizedRadiusScalePerBounce = 1.25f;
}

