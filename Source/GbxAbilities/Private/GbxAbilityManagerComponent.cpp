#include "GbxAbilityManagerComponent.h"
#include "Templates/SubclassOf.h"

class UGbxAbility;

bool UGbxAbilityManagerComponent::RemoveAbility(TSubclassOf<UGbxAbility> AbilityClass) {
    return false;
}

bool UGbxAbilityManagerComponent::HasAbility(TSubclassOf<UGbxAbility> AbilityClass) const {
    return false;
}

UGbxAbility* UGbxAbilityManagerComponent::FindAbility(TSubclassOf<UGbxAbility> AbilityClass) const {
    return NULL;
}

UGbxAbility* UGbxAbilityManagerComponent::AddAbility(const FGbxAbilitySpec& Spec) {
    return NULL;
}

UGbxAbilityManagerComponent::UGbxAbilityManagerComponent() {
}

