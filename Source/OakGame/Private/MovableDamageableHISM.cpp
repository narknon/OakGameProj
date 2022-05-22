#include "MovableDamageableHISM.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

void AMovableDamageableHISM::StopMovable() {
}

void AMovableDamageableHISM::StartMovable() {
}

AMovableDamageableHISM::AMovableDamageableHISM() {
    this->Speed = 200.00f;
    this->NumberbOfSM = 10;
    this->MyHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("MovableDamageableHISM"));
}

