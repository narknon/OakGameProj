#pragma once
#include "CoreMinimal.h"
#include "ZoneIdToMapIdMappingData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FZoneIdToMapIdMappingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 MapNameEnumIdx;
    
public:
    FZoneIdToMapIdMappingData();
};

