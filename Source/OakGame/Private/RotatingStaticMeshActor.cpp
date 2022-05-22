#include "RotatingStaticMeshActor.h"
#include "GameFramework/RotatingMovementComponent.h"

ARotatingStaticMeshActor::ARotatingStaticMeshActor() {
    this->RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
}

