#include "CoordinatedConditionalMaterialData.h"

FCoordinatedConditionalMaterialData::FCoordinatedConditionalMaterialData() {
    this->BaseMaterial = NULL;
    this->MeshElementIndex = 0;
    this->OverrideMaterial = NULL;
    this->bMatchMaterialStaticParameters = false;
    this->bUseGlobalInheritedMaterialParameters = false;
    this->bInheritAllMaterialParameters = false;
}

