#include "OakMapData.h"

class UEnum;

UEnum* UOakMapData::ZoneNameEnumFunc() {
    return NULL;
}

UEnum* UOakMapData::MapNameEnumFunc() {
    return NULL;
}

UOakMapData::UOakMapData() {
    this->NorthDegreeOffset = 0.00f;
    this->bForceNormalDifficultySetting = false;
    this->MapNameEnumIdx = 0;
    this->ZoneNameEnumIdx = 0;
    this->MapNameEnum = NULL;
    this->ZoneNameEnum = NULL;
    this->bDisableCombatExperienceGains = false;
    this->EchoDeviceScreenDataTable = NULL;
    this->LocalZoneMapMeshData = NULL;
}

