#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapPOIEntry.generated.h"

class UZoneMapPOITypeData;
class UObject;

USTRUCT(BlueprintType)
struct FZoneMapPOIEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UZoneMapPOITypeData* PointOfInterestType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString PointOfInterestObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform PointOfInterestTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIntPoint PointOfInterestFODTexelCoords;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* CustomPOIData;
    
    OAKGAME_API FZoneMapPOIEntry();
};

