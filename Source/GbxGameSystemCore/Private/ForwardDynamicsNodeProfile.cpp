#include "ForwardDynamicsNodeProfile.h"

FForwardDynamicsNodeProfile::FForwardDynamicsNodeProfile() {
    this->ForwardDynamicsProfile = NULL;
    this->ForwardDynamicsActivation = EForwardDynamicsActivation::PhysicsAssetSimulated;
    this->TargetSimulationFrequency = 0;
    this->MaxSubstepCount = 0;
    this->MaxTranslationDistanceUntilReset = 0.00f;
    this->LinearJointDivergentTolerence = 0.00f;
    this->WorldSpaceVelocityBlend = 0.00f;
    this->WorldSpaceAngularVelocityBlend = 0.00f;
    this->bBypassSkelMeshSimulatePhysOption = false;
    this->bStripAnimationFromNonSimulationRelevantBones = false;
    this->OverridePhysicsAsset = NULL;
    this->OverlapChannel = ECC_WorldStatic;
    this->bEnableWorldGeometry = false;
    this->SimulationSpace = ESimulationSpace::ComponentSpace;
    this->bOverrideWorldGravity = false;
    this->CachedBoundsScale = 0.00f;
    this->bTransferBoneVelocities = false;
    this->bFreezeIncomingPoseOnStart = false;
    this->LODThreshold = 0;
    this->LODInterpolationSpeed = 0.00f;
}

