#pragma once
#include "CoreMinimal.h"
#include "PlanetMapDataToPlanetIdMappingData.generated.h"

class UPlanetData;

USTRUCT(BlueprintType)
struct OAKGAME_API FPlanetMapDataToPlanetIdMappingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPlanetData* PlanetData;
    
    UPROPERTY(EditAnywhere)
    uint8 PlanetID;
    
public:
    FPlanetMapDataToPlanetIdMappingData();
};

