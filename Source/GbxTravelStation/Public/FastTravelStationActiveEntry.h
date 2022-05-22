#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FastTravelStationActiveEntry.generated.h"

class UFastTravelStationData;

USTRUCT(BlueprintType)
struct FFastTravelStationActiveEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UFastTravelStationData* FastTravelData;
    
    GBXTRAVELSTATION_API FFastTravelStationActiveEntry();
};

