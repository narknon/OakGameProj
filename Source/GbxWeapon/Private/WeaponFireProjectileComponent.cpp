#include "WeaponFireProjectileComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class ULightProjectileData;

TSubclassOf<AActor> UWeaponFireProjectileComponent::GetShotProjectileData_Implementation() const {
    return NULL;
}

TSubclassOf<ULightProjectileData> UWeaponFireProjectileComponent::GetShotLightProjectileData_Implementation() const {
    return NULL;
}

void UWeaponFireProjectileComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponFireProjectileComponent, ProjectilesPerShot);
    DOREPLIFETIME(UWeaponFireProjectileComponent, ProjectileSpeedScale);
}

UWeaponFireProjectileComponent::UWeaponFireProjectileComponent() {
    this->ShotStrengthProjectileSpeedCurve = NULL;
    this->ProjectileTemplate = NULL;
    this->LightProjectileData = NULL;
    this->FiringPatternData = NULL;
    this->Range = 16384.00f;
}

