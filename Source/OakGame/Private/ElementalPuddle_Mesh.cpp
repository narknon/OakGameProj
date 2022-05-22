#include "ElementalPuddle_Mesh.h"
#include "Components/StaticMeshComponent.h"

AElementalPuddle_Mesh::AElementalPuddle_Mesh() {
    this->PuddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuddleMesh"));
    this->bSquarePuddle = false;
    this->bMaskEdges = true;
    this->bOverrideDepthFade = false;
    this->DepthFade = 0.00f;
}

