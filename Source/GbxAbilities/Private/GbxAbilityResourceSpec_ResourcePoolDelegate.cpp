#include "GbxAbilityResourceSpec_ResourcePoolDelegate.h"

FGbxAbilityResourceSpec_ResourcePoolDelegate::FGbxAbilityResourceSpec_ResourcePoolDelegate() {
    this->ResourcePoolComponent = NULL;
    this->ResourcePoolData = NULL;
    this->DelegateType = EAbilityResourceDelegateType::None;
    this->DelegateEventProperty = NULL;
}

