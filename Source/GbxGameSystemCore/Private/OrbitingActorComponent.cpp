#include "OrbitingActorComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UOrbitingActorComponent::SetTargetActor(AActor* NewTarget) {
}

void UOrbitingActorComponent::OnRep_TargetActor(AActor* LastTarget) {
}

void UOrbitingActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOrbitingActorComponent, TargetActor);
}

UOrbitingActorComponent::UOrbitingActorComponent() {
    this->TargetActor = NULL;
    this->ApproachSpeed = 0.00f;
    this->SmoothingDistance = 200.00f;
    this->SmoothingDuration = 1.00f;
    this->bIsInOrbit = false;
    this->SmoothingAlpha = 0.00f;
}

