#include "GbxAnimNode_ForwardDynamics.h"

FGbxAnimNode_ForwardDynamics::FGbxAnimNode_ForwardDynamics() {
    this->ForwardDynamicsProfile = NULL;
    this->ForwardDynamicsActivation = EForwardDynamicsActivation::PhysicsAssetSimulated;
    this->TargetSimulationFrequency = 0;
    this->MaxSubstepCount = 0;
    this->MaxTranslationDistanceUntilReset = 0.00f;
    this->WorldSpaceVelocityBlend = 0.00f;
    this->WorldSpaceAngularVelocityBlend = 0.00f;
    this->JointAnchorPoseAlpha = 0.00f;
    this->LinearJointDivergentTolerence = 0.00f;
    this->bBypassSkelMeshSimulatePhysOption = false;
    this->bStripAnimationFromNonSimulationRelevantBones = false;
}

