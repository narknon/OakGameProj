#pragma once
#include "CoreMinimal.h"
#include "MapIDToPlanetDataMappingData.generated.h"

class UPlanetData;

USTRUCT(BlueprintType)
struct OAKGAME_API FMapIDToPlanetDataMappingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 MapID;
    
    UPROPERTY(EditAnywhere)
    UPlanetData* PlanetData;
    
public:
    FMapIDToPlanetDataMappingData();
};

