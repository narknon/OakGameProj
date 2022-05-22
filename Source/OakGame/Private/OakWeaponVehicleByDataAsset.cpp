#include "OakWeaponVehicleByDataAsset.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "OakDamageComponent.h"

void AOakWeaponVehicleByDataAsset::StopIdleEffects() {
}

void AOakWeaponVehicleByDataAsset::StartIdleEffects() {
}

void AOakWeaponVehicleByDataAsset::OnRep_SecondaryUse() {
}

bool AOakWeaponVehicleByDataAsset::IsSecondaryInUse() {
    return false;
}

void AOakWeaponVehicleByDataAsset::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakWeaponVehicleByDataAsset, bIsSecondaryInUse);
}

AOakWeaponVehicleByDataAsset::AOakWeaponVehicleByDataAsset() {
    this->WeaponMesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh3P"));
    this->OakDamage = CreateDefaultSubobject<UOakDamageComponent>(TEXT("OakDamage"));
    this->LeftWeaponMesh3P = NULL;
    this->RightWeaponMesh3P = NULL;
    this->Vehicle = NULL;
    this->bIsSecondaryInUse = false;
}

