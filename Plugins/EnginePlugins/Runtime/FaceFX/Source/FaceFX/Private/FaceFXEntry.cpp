#include "FaceFXEntry.h"

FFaceFXEntry::FFaceFXEntry() {
    this->SkelMeshComp = NULL;
    this->AudioComp = NULL;
    this->Character = NULL;
    this->bIsAutoPlaySound = false;
    this->bIsDisableMorphTargets = false;
    this->bHasBonesFromMultipleSkeletons = false;
}

