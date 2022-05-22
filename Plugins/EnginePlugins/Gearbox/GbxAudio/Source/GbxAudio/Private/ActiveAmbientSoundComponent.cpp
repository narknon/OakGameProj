#include "ActiveAmbientSoundComponent.h"

void UActiveAmbientSoundComponent::Startle(const FVector& Location, float Radius) {
}

UActiveAmbientSoundComponent::UActiveAmbientSoundComponent() {
    this->StartEvent = NULL;
    this->ExpiredStopEvent = NULL;
    this->ExpiredStopFadeTime = 0.00f;
    this->TargetSimultaneousInstances = 10;
    this->LocationChooser = NULL;
    this->LocationValidator = NULL;
    this->bWaryOfPlayers = false;
    this->WaryDistance = 1000.00f;
    this->WaryStopEvent = NULL;
    this->WaryStopFadeTime = 0.00f;
    this->StartleRecoveryTime = 0.00f;
    this->StartedStopEvent = NULL;
    this->StartledStopFadeTime = 0.00f;
    this->NextSpawnTime = 0.00f;
    this->TimeSinceLastSpawn = 0.00f;
    this->RemainingStartleRecovery = 0.00f;
}

