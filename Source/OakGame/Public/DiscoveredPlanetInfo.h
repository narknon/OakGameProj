#pragma once
#include "CoreMinimal.h"
#include "DiscoveredPlanetInfo.generated.h"

class UPlanetData;

USTRUCT(BlueprintType)
struct FDiscoveredPlanetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UPlanetData> DiscoveredPlanet;
    
    UPROPERTY()
    bool bIsNewPlanet;
    
    OAKGAME_API FDiscoveredPlanetInfo();
};

