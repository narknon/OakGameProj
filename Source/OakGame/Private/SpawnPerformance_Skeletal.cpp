#include "SpawnPerformance_Skeletal.h"
#include "Components/SkeletalMeshComponent.h"

ASpawnPerformance_Skeletal::ASpawnPerformance_Skeletal() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

