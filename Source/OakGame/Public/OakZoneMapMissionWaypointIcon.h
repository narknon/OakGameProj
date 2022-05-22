#pragma once
#include "CoreMinimal.h"
#include "OakZoneMapIcon.h"
#include "ZoneMapMissionWaypointEntry.h"
#include "OakZoneMapMissionWaypointIcon.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UOakZoneMapMissionWaypointIcon : public UOakZoneMapIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FZoneMapMissionWaypointEntry WaypointEntry;
    
    UOakZoneMapMissionWaypointIcon();
};

