#include "GbxNavMeshLayer.h"

UGbxNavMeshLayer::UGbxNavMeshLayer() {
    this->MaxAgentHalfHeight = 100.00f;
    this->MaxAgentRadius = 100.00f;
    this->bSetRadiusManually = false;
    this->UserEdgeDistance = 100.00f;
    this->bSetUserEdgeDistanceManually = false;
}

