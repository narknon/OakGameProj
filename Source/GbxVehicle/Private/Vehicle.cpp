#include "Vehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

class UTargetableComponent;
class UTeam;
class UVehiclePartData;
class UTargetingComponent;
class UTeamComponent;

void AVehicle::SetTeam(UTeam* Team) const {
}

void AVehicle::RemoveVehiclePart(UVehiclePartData* CharacterPart) {
}

void AVehicle::OnRep_VehicleParts() {
}

bool AVehicle::IsPowerSliding() const {
    return false;
}

bool AVehicle::IsInAir() const {
    return false;
}

UTeamComponent* AVehicle::GetTeamComponent() const {
    return NULL;
}

UTeam* AVehicle::GetTeam() const {
    return NULL;
}

UTargetingComponent* AVehicle::GetTargetingComponent() const {
    return NULL;
}

UTargetableComponent* AVehicle::GetTargetableComponent() const {
    return NULL;
}

int32 AVehicle::GetNumWheelsInAir() const {
    return 0;
}

TArray<UVehiclePartData*> AVehicle::GetEquipedParts() const {
    return TArray<UVehiclePartData*>();
}

void AVehicle::AddVehiclePart(UVehiclePartData* CharacterPart) {
}

void AVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehicle, VehicleParts);
}

AVehicle::AVehicle() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DefaultVehicleMesh"));
    this->bUnpushable = false;
    this->CachedTargetableComponent = NULL;
    this->CachedDamageComponent = NULL;
    this->CachedDamageCauserComponent = NULL;
    this->CachedTargetingComponent = NULL;
    this->VehiclePartSelectionData = NULL;
    this->CharacterCollidingResistance = 100000000.00f;
}

