#include "WeaponTrinketPreviewActor.h"
#include "GbxCustomizationComponent.h"
#include "GbxSkeletalMeshComponent.h"

AWeaponTrinketPreviewActor::AWeaponTrinketPreviewActor() {
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<UGbxSkeletalMeshComponent>(TEXT("SkelMesh"));
}

