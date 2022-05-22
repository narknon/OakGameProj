#include "OakActionAbility_Cloak.h"
#include "Net/UnrealNetwork.h"

class AWeapon;
class AActor;

void UOakActionAbility_Cloak::TrackTarget(AActor* NewTarget) {
}


void UOakActionAbility_Cloak::OnTrackedTargetDied() {
}

void UOakActionAbility_Cloak::OnRep_TrackedTargetState() {
}

void UOakActionAbility_Cloak::OnModifiedWeaponShot(AWeapon* Weapon, const FWeaponShotModifierData& Data) {
}

void UOakActionAbility_Cloak::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_Cloak, TrackedTargetState);
}

UOakActionAbility_Cloak::UOakActionAbility_Cloak() {
    this->CriticalShotCountModifier = NULL;
}

