#include "OakActionAbility_Beastmaster.h"
#include "Net/UnrealNetwork.h"

class AOakCharacter;

bool UOakActionAbility_Beastmaster::HasRuntimeMod(EOakActionAbilityPetModType ModType) const {
    return false;
}

AOakCharacter* UOakActionAbility_Beastmaster::GetCurrentPet() const {
    return NULL;
}

void UOakActionAbility_Beastmaster::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_Beastmaster, RuntimeMods);
}

UOakActionAbility_Beastmaster::UOakActionAbility_Beastmaster() {
    this->AbilityPetType = EOakActionAbilityPetType::None;
    this->BeastmasterComponent = NULL;
}

