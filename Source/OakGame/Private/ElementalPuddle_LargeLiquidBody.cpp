#include "ElementalPuddle_LargeLiquidBody.h"
#include "ProceduralMeshComponent.h"

AElementalPuddle_LargeLiquidBody::AElementalPuddle_LargeLiquidBody() {
    this->PuddleMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("PuddleMesh"));
}

