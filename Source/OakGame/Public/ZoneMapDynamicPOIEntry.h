#pragma once
#include "CoreMinimal.h"
#include "ZoneMapDynamicPOIEntry.generated.h"

class UZoneMapPOITypeData;

USTRUCT(BlueprintType)
struct FZoneMapDynamicPOIEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* POIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowInMiniMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowInZoneMap;
    
    OAKGAME_API FZoneMapDynamicPOIEntry();
};

