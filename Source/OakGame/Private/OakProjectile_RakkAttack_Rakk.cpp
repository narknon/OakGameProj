#include "OakProjectile_RakkAttack_Rakk.h"
#include "Net/UnrealNetwork.h"




void AOakProjectile_RakkAttack_Rakk::OnRep_RuntimeMods() {
}

bool AOakProjectile_RakkAttack_Rakk::HasRuntimeMod(EOakActionAbilityPetModType ModType) const {
    return false;
}

void AOakProjectile_RakkAttack_Rakk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakProjectile_RakkAttack_Rakk, RuntimeMods);
}

AOakProjectile_RakkAttack_Rakk::AOakProjectile_RakkAttack_Rakk() {
    this->OwnerAbilityRakkAttack = NULL;
}

