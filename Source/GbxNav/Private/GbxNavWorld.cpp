#include "GbxNavWorld.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=HavokNavVolumeGenerationSettings -FallbackName=HavokNavVolumeGenerationSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=HavokNavMeshGenerationSettings -FallbackName=HavokNavMeshGenerationSettings

AGbxNavWorld::AGbxNavWorld() {
    this->ReachabilityBuilding = NULL;
    this->MaxClearanceFillsPerStep = 10;
    this->MaxClearanceChecksPerStep = 1000;
    this->bAsyncProcessingEnabled = true;
    this->bAsyncAgentUpdatesEnabled = true;
    this->AllNavAreas.AddDefaulted(10);
    this->MeshGenSettings = CreateDefaultSubobject<UHavokNavMeshGenerationSettings>(TEXT("MeshGenSettings"));
    this->VolumeGenSettings = CreateDefaultSubobject<UHavokNavVolumeGenerationSettings>(TEXT("VolumeGenSettings"));
}

