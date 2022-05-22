#include "ClothSkeletalMeshActor.h"
#include "Components/SkeletalMeshComponent.h"

AClothSkeletalMeshActor::AClothSkeletalMeshActor() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

