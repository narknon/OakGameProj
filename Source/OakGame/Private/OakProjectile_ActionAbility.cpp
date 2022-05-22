#include "OakProjectile_ActionAbility.h"
#include "Net/UnrealNetwork.h"
#include "GbxCustomizationComponent.h"

void AOakProjectile_ActionAbility::ReleaseFromActionAbility() {
}



void AOakProjectile_ActionAbility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakProjectile_ActionAbility, bWasShutDownGracefully);
}

AOakProjectile_ActionAbility::AOakProjectile_ActionAbility() {
    this->OwnerActionAbility = NULL;
    this->OwnerPlayer = NULL;
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->bBlocksActionAbilityShutdown = false;
    this->bWasShutDownGracefully = false;
}

