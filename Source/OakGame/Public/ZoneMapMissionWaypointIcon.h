#pragma once
#include "CoreMinimal.h"
#include "OakZoneMapIcon_POI.h"
#include "ZoneMapMissionWaypointEntry.h"
#include "EZoneMapMissionStatus.h"
#include "ZoneMapMissionWaypointIcon.generated.h"

UCLASS()
class OAKGAME_API AZoneMapMissionWaypointIcon : public AOakZoneMapIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FZoneMapMissionWaypointEntry WaypointEntry;
    
    AZoneMapMissionWaypointIcon();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnWaypointUpdated();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapMissionStatus> GetMissionStatus();
    
};

