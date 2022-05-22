#include "HavokNavObstacle.h"

UHavokNavObstacle::UHavokNavObstacle() {
    this->SphereRadius = 50.00f;
    this->bUseSphere = true;
    this->bUseBox = false;
    this->NavArea = NULL;
    this->PrimitiveBase = NULL;
}

