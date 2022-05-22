#pragma once
#include "CoreMinimal.h"
#include "ZoneMapMeshDataLoadedDelegate.generated.h"

class UZoneMapData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FZoneMapMeshDataLoaded, UZoneMapData*, LoadedMeshZoneMap);

