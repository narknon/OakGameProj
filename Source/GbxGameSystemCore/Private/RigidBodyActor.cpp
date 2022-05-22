#include "RigidBodyActor.h"
#include "RigidBodyComponent.h"

ARigidBodyActor::ARigidBodyActor() {
    this->RigidBodyComponent = CreateDefaultSubobject<URigidBodyComponent>(TEXT("RigidBodyComponent0"));
}

