#include "ElementalPuddleSimpleSpawnData.h"
#include "ElementalPuddle_Decal.h"

UElementalPuddleSimpleSpawnData::UElementalPuddleSimpleSpawnData() {
    this->PuddleClass = AElementalPuddle_Decal::StaticClass();
    this->PuddleConfiguration = NULL;
    this->PuddleSpawnData = NULL;
    this->AutoAlignTraceDistance = 128.00f;
    this->OverrideFullSizeScale = 0.00f;
}

