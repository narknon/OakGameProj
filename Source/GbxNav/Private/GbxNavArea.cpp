#include "GbxNavArea.h"

UGbxNavArea::UGbxNavArea() {
    this->EffectiveArea = NULL;
    this->HavokNavMaterial = EHavokNavMaterial::WalkableAndCutting;
}

