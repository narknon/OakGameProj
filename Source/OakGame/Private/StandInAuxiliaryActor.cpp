#include "StandInAuxiliaryActor.h"
#include "GbxActionComponent.h"
#include "GbxCustomizationComponent.h"

class AOakCharacter_StandIn;
class AOakCharacter_Player;

void AStandInAuxiliaryActor::SetHidden(bool bNewHidden, FName Reason) {
}


AOakCharacter_StandIn* AStandInAuxiliaryActor::GetOwningStandIn() const {
    return NULL;
}

AOakCharacter_Player* AStandInAuxiliaryActor::GetOwningPlayer() const {
    return NULL;
}

AStandInAuxiliaryActor::AStandInAuxiliaryActor() {
    this->ActionComponent = CreateDefaultSubobject<UGbxActionComponent>(TEXT("GbxAction"));
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->MeshComponent = NULL;
    this->HeadMeshReference = NULL;
    this->CachedHeadMeshParent = NULL;
    this->bWantsFadeInCoordinatedEffects = true;
    this->EquippedWeaponData = NULL;
    this->EquippedWeaponScale = 1.00f;
    this->EquippedWeaponInstance = NULL;
}

