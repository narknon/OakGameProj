#include "AmbientSoundSphere.h"
#include "Components/SphereComponent.h"

AAmbientSoundSphere::AAmbientSoundSphere() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent0"));
}

