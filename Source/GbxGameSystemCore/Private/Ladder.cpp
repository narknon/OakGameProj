#include "Ladder.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/BoxComponent.h"

ALadder::ALadder() {
    this->Mobility = EComponentMobility::Static;
    this->SegmentMesh = NULL;
    this->TopMesh = NULL;
    this->BottomAndTopMeshLDMaxDrawDistance = 0.00f;
    this->bBottomAndTopMeshNeverDistanceCull = false;
    this->BottomMesh = NULL;
    this->SegmentSpacing = 0.00f;
    this->SegmentRotation = 0.00f;
    this->TopRotation = 0.00f;
    this->BottomRotation = 0.00f;
    this->VolumeDepth = 50.00f;
    this->VolumeWidth = 45.00f;
    this->VolumeExtraTopHeight = 50.00f;
    this->VolumeExtraBottomHeight = 0.00f;
    this->TopVolumeDepth = 25.00f;
    this->CharacterOffset = 40.00f;
    this->NumSegments = 1;
    this->bHideTopMesh = false;
    this->bHideBottomMesh = false;
    this->SegmentMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SegmentMeshComponent"));
    this->TopMeshComponent = NULL;
    this->BottomMeshComponent = NULL;
    this->VolumeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumePreviewComponent"));
    this->TopVolumeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TopVolumePreviewComponent"));
}

