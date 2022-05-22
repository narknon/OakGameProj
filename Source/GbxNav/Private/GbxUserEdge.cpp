#include "GbxUserEdge.h"

UGbxUserEdge::UGbxUserEdge() {
    this->ReverseEdge = NULL;
    this->bAlignEdges = false;
    this->bLimitDistanceMin = false;
    this->DistanceMin = 0.00f;
    this->bLimitDistanceMax = false;
    this->DistanceMax = 0.00f;
    this->bLimitHeightMin = false;
    this->HeightMin = 0.00f;
    this->bLimitHeightMax = false;
    this->HeightMax = 0.00f;
    this->bZeroWidthEntry = false;
    this->bZeroWidthExit = false;
    this->bTeleportEntry = false;
    this->bTeleportExit = false;
}

