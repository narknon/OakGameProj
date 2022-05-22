#pragma once
#include "CoreMinimal.h"
#include "CachedPlanetZonePOI.generated.h"

class UZoneMapData;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FCachedPlanetZonePOI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UZoneMapData* ZoneReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> ZoneMeshOnPlanet;
    
    OAKGAME_API FCachedPlanetZonePOI();
};

