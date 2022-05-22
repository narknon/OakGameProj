#include "GrenadeBehavior_PayloadSingularity.h"

UGrenadeBehavior_PayloadSingularity::UGrenadeBehavior_PayloadSingularity() {
    this->SingularityRadiusScale = 1.50f;
    this->MinSingularityRadius = 560.00f;
    this->MaxSingularityRadius = 900.00f;
    this->SingularityRisingSpeed = 160.00f;
    this->SingularityExplosionData = NULL;
    this->FinalExplosionAudioEvent = NULL;
    this->RainSingularityEndEffect = NULL;
}

