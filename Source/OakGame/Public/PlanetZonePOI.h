#pragma once
#include "CoreMinimal.h"
#include "PlanetZonePOI.generated.h"

class UZoneMapData;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPlanetZonePOI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UZoneMapData* ZoneReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* ZoneMeshOnPlanet;
    
    OAKGAME_API FPlanetZonePOI();
};

