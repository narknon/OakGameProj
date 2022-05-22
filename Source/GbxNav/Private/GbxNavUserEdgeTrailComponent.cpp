#include "GbxNavUserEdgeTrailComponent.h"

UGbxNavUserEdgeTrailComponent::UGbxNavUserEdgeTrailComponent() {
    this->GbxUserEdge = NULL;
    this->EdgeWidth = 50.00f;
    this->AgentRadius = 100.00f;
    this->AgentHalfHeight = 75.00f;
    this->NavCheckDistance = 200.00f;
    this->MaxActiveEdges = 5;
    this->TraceRadius = 10.00f;
    this->GbxNavWorld = NULL;
    this->UserEdge = NULL;
}

