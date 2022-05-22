#include "SoundControllerSensor.h"
#include "Components/BoxComponent.h"

ASoundControllerSensor::ASoundControllerSensor() {
    this->Aggregator = NULL;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->FadeDistance = 0.00f;
    this->CurrentValue = 0.00f;
}

