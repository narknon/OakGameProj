#include "VehicleAttachMeshAspectData.h"

UVehicleAttachMeshAspectData::UVehicleAttachMeshAspectData() {
    this->bUseAttachParentBound = false;
    this->RevolverOffsetMode = ERevolverOffsetMode::None;
    this->bWeldSimulatedBodies = false;
    this->bWeldedBodiesShouldModifyPhysicalProperties = false;
    this->bUseParentPoseComponent = false;
    this->AnimMode = EAnimationMode::AnimationBlueprint;
}

