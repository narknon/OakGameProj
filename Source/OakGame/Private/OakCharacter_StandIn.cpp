#include "OakCharacter_StandIn.h"
#include "GbxSkeletalMeshComponent.h"
#include "OakCustomizationComponent.h"
#include "BodyWeaponHoldManagerComponent.h"

class UGbxCustomizationData;

void AOakCharacter_StandIn::OnCustomizationApplied(UGbxCustomizationData* Customization) {
}

AOakCharacter_StandIn::AOakCharacter_StandIn() {
    this->CustomizationComponent = CreateDefaultSubobject<UOakCustomizationComponent>(TEXT("CustomizationComponent"));
    this->HeadMesh = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("HeadMesh"));
    this->CharacterComponent = NULL;
    this->WeaponHoldComponent = CreateDefaultSubobject<UBodyWeaponHoldManagerComponent>(TEXT("WeaponHoldMgr"));
    this->StandInWeaponBalanceData = NULL;
    this->EquippedEmote = NULL;
    this->EquippedWeaponTemplate = NULL;
    this->Current_EquippedWeaponInstance = NULL;
    this->Pending_PutDownWeaponInstance = NULL;
    this->Pending_EquipWeaponInstance = NULL;
    this->OwningPlayer = NULL;
}

