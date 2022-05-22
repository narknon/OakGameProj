#include "EscortLocationComponent.h"

class UEscortLocationComponent;
class AActor;
class AOakVehicle;

void UEscortLocationComponent::SetOccupation(AOakVehicle* Vehicle) {
}

bool UEscortLocationComponent::IsOccupied() const {
    return false;
}

void UEscortLocationComponent::InitEscort(AOakVehicle* Target, AActor* ActorToEscort, bool bUseNearest) {
}

TArray<UEscortLocationComponent*> UEscortLocationComponent::FindEscortLocation(AActor* ActorToEscort, bool bIsFree) {
    return TArray<UEscortLocationComponent*>();
}

UEscortLocationComponent* UEscortLocationComponent::FindEscortComponent(AOakVehicle* Target, AActor* ActorToEscort, bool bUseNearest) {
    return NULL;
}

void UEscortLocationComponent::ClearEscortOccupation(AOakVehicle* Target) {
}

UEscortLocationComponent::UEscortLocationComponent() {
    this->SnapToGroundDistance = 1000.00f;
    this->Escorter = NULL;
    this->bSnapToGround = true;
}

