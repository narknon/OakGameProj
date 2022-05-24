#include "Agonizer9kFollowSpot.h"
#include "Components/SpotLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

class AActor;

void AAgonizer9kFollowSpot::TurnOn() {
}

void AAgonizer9kFollowSpot::TurnOff() {
}

void AAgonizer9kFollowSpot::StartRotating(float RotationTime, FRotator RotationDelta) {
}

void AAgonizer9kFollowSpot::LookAtTarget(float RotationTime, AActor* Target) {
}

AAgonizer9kFollowSpot::AAgonizer9kFollowSpot() {
    this->SceneRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->LightConeComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightCone"));
    this->SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
}

