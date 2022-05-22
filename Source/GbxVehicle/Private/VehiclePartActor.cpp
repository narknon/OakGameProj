#include "VehiclePartActor.h"
#include "Net/UnrealNetwork.h"

class AActor;

void AVehiclePartActor::WeldActorToVehicle(AActor* SpawnedPart) {
}


void AVehiclePartActor::OnRep_ParentSocket() {
}

void AVehiclePartActor::OnRep_OwningVehicle() {
}

void AVehiclePartActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehiclePartActor, OwningVehicle);
    DOREPLIFETIME(AVehiclePartActor, ParentSocket);
}

AVehiclePartActor::AVehiclePartActor() {
    this->bWeldSimulatedBodies = false;
    this->bWeldedBodiesShouldModifyPhysicalProperties = false;
    this->bForwardDamageToParent = false;
    this->OwningVehicle = NULL;
}

