#pragma once
#include "CoreMinimal.h"
#include "MissionEventReference.h"
#include "ZoneIDToMissionEventReferenceData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FZoneIDToMissionEventReferenceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    FMissionEventReference MissionEventReference;
    
public:
    FZoneIDToMissionEventReferenceData();
};

