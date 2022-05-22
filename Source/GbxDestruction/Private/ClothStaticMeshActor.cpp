#include "ClothStaticMeshActor.h"
#include "Components/StaticMeshComponent.h"

AClothStaticMeshActor::AClothStaticMeshActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

