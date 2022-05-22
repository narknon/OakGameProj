#include "ElementalPuddle_Decal.h"
#include "Components/DecalComponent.h"

AElementalPuddle_Decal::AElementalPuddle_Decal() {
    this->PuddleDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("PuddleDecal"));
}

