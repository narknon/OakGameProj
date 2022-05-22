#include "GbxNavMeshSectionComponent.h"

UGbxNavMeshSectionComponent::UGbxNavMeshSectionComponent() {
    this->MeshLayer = NULL;
    this->BuildMeshLayer = NULL;
    this->bAutoAddUserEdges = false;
    this->NavMesh = NULL;
    this->Layer = NULL;
    this->BuildLayer = NULL;
}

