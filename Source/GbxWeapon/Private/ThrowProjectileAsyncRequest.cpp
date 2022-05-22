#include "ThrowProjectileAsyncRequest.h"

FThrowProjectileAsyncRequest::FThrowProjectileAsyncRequest() {
    this->Class = NULL;
    this->Source = NULL;
    this->Target = NULL;
    this->MaxPrediction = 0.00f;
    this->Speed = 0.00f;
    this->AnglePercent = 0.00f;
    this->InstanceCount = 0;
    this->InstanceDelay = 0.00f;
}

