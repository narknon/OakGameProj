#include "ZoneMapPlanetViewer.h"

class UZoneMapData;
class UStaticMesh;

UStaticMesh* AZoneMapPlanetViewer::GetZoneMeshOnPlanet(UZoneMapData* ZoneMap) {
    return NULL;
}

AZoneMapPlanetViewer::AZoneMapPlanetViewer() {
    this->PlanetData = NULL;
    this->OwningZoneMap = NULL;
}

