#include "OakZoneMapSettings.h"

UOakZoneMapSettings::UOakZoneMapSettings() {
    this->ZoneMapLists.AddDefaulted(1);
    this->bMiniMapFacePlayerDirection = true;
    this->bShowLegendariesOnMiniMap = true;
    this->MiniMapPitchAngle = 60.00f;
    this->bGenerateFogTexture = true;
}

