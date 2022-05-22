#include "ProjectedMeshOptions.h"

FProjectedMeshOptions::FProjectedMeshOptions() {
    this->Shape = EProjectedMeshShape::Circle;
    this->Size = 0.00f;
    this->Complexity = 0;
    this->NumRings = 0;
    this->bFlipNormals = false;
    this->bGenerateUVs = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->StartTraceDistance = 0.00f;
    this->EndTraceDistance = 0.00f;
    this->PushAwayDistance = 0.00f;
    this->bIgnoreActor = false;
}

