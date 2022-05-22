#include "ZoneMapGlobalsData.h"

UZoneMapGlobalsData::UZoneMapGlobalsData() {
    this->FriendPOIType = NULL;
    this->CustomWaypointPOIType = NULL;
    this->ZoneMeshMaterial = NULL;
    this->ZoneMapDisplayMaterial = NULL;
    this->POIZOffset = 200.00f;
    this->BasePOISelectionDistance = 0.00f;
    this->CustomWaypointRemoveDistance = 1000.00f;
    this->FoDWorldPositionTransformMaterial = NULL;
    this->FoDMasterMaterial = NULL;
    this->FoDTranslucentMasterMaterial = NULL;
    this->FODMeshMaterialExternal = NULL;
    this->FODMeshTranslucentMaterialExternal = NULL;
    this->FoDSolverMaterial = NULL;
    this->FoDLoaderMaterial = NULL;
    this->FoDMoveDistanceTestSquared = 10000.00f;
    this->TestFoDRenderTexture = NULL;
    this->PlayerUnfogRadius = 0.00f;
    this->VehicleUnfogRadius = 0.00f;
    this->DefaultUnfogHeight = 0.00f;
    this->DefaultVehicleUnfogHeight = 0.00f;
}

