#include "FluidSurface.h"
#include "ProceduralMeshComponent.h"

void AFluidSurface::PerturbSurface(const FVector& Position, float Radius, float Force) {
}

AFluidSurface::AFluidSurface() {
    this->NumberOfFluidParticlesX = 50;
    this->NumberOfFluidParticlesY = 50;
    this->TargetHeight = 100.00f;
    this->FluidStiffness = 0.50f;
    this->FluidPropagation = 0.50f;
    this->IterationCount = 5;
    this->RenderComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("DefaultSurfaceMesh"));
}

