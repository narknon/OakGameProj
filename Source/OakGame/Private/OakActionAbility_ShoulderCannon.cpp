#include "OakActionAbility_ShoulderCannon.h"
#include "Net/UnrealNetwork.h"


void UOakActionAbility_ShoulderCannon::SpawnCannon() {
}

void UOakActionAbility_ShoulderCannon::OnRep_Cannon() {
}

bool UOakActionAbility_ShoulderCannon::GetShotData(const FVector& StartLocation, FOakLightProjectileInitializationData& ShotData) {
    return false;
}

void UOakActionAbility_ShoulderCannon::CannonRemoved() {
}

void UOakActionAbility_ShoulderCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_ShoulderCannon, Cannon);
}

UOakActionAbility_ShoulderCannon::UOakActionAbility_ShoulderCannon() {
    this->CannonAimAsset = NULL;
    this->Cannon = NULL;
}

