#include "OakMinimapElement.h"

UOakMinimapElement::UOakMinimapElement() {
    this->InRangeAlpha = 0.10f;
    this->OutOfRangeAlpha = 1.00f;
    this->bClampRadarEdge = false;
    this->MaxClampDistance = 0.00f;
    this->bShouldDisplay = false;
    this->WaypointRadius = 0;
    this->TargetActor = NULL;
    this->ElementImage = NULL;
    this->ElementScale = NULL;
}

