#include "GbxNavFlySectionComponent.h"

UGbxNavFlySectionComponent::UGbxNavFlySectionComponent() {
    this->FlyLayer = NULL;
    this->BuildFlyLayer = NULL;
    this->bDrawBoundingFaces = false;
    this->bDrawCells = true;
    this->bDrawFaces = false;
    this->DrawBoxSize = 10000.00f;
    this->DrawCullDistance = 10000.00f;
    this->NavVolume = NULL;
    this->Layer = NULL;
    this->BuildLayer = NULL;
}

