#include "OakLoadingSceneMeshActor.h"
#include "Components/StaticMeshComponent.h"

AOakLoadingSceneMeshActor::AOakLoadingSceneMeshActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

