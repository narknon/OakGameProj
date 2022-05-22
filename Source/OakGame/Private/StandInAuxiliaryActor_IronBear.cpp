#include "StandInAuxiliaryActor_IronBear.h"
#include "GbxSkeletalMeshComponent.h"

AStandInAuxiliaryActor_IronBear::AStandInAuxiliaryActor_IronBear() {
    this->MainMesh = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("MainMesh"));
    this->LeftHardPointMeshComponent = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("LeftHardPointMesh"));
    this->RightHardPointMeshComponent = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("RightHardPointMesh"));
    this->GunnersNestMeshComponent = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("GunnersNest"));
    this->GenericEquippedCE = NULL;
    this->bOnlyPlayInitialHardPointFlourishOnLeftSlot = true;
    this->DelayBetweenInitialHardPointFlourishAnimations = 0.30f;
    this->LastSlottedLeftHardPoint = NULL;
    this->LastSlottedRightHardPoint = NULL;
}

