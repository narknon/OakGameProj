#include "GbxNavMeshSection.h"
#include "GbxNavMeshSectionComponent.h"

AGbxNavMeshSection::AGbxNavMeshSection() {
    this->MeshSectionComponent = CreateDefaultSubobject<UGbxNavMeshSectionComponent>(TEXT("SectionComponent"));
}

