#include "CryoDestructibleComponent.h"
#include "GameFramework/Actor.h"

UCryoDestructibleComponent::UCryoDestructibleComponent() {
    this->BaseMaterial = NULL;
    this->FracturedLifeSpan = 60.00f;
    this->FracturedMaterial = NULL;
    this->FracturedInteriorMaterial = NULL;
    this->FracturedActorClass = AActor::StaticClass();
    this->FreezeRateVariation = 0.10f;
    this->ThawJitterSpeed = 3.50f;
    this->ThawJitterScale = 1.00f;
    this->DissolveTime = 4.00f;
    this->DissolveDelayTime = 5.00f;
    this->DissolvePositionOffsetScale = 1.00f;
    this->LinkedDestructible = NULL;
}

