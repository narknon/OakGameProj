#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionObjectiveReferenceWeak.h"
#include "UObject/NoExportTypes.h"
#include "GbxUIFormattedText.h"
#include "ZoneMapMissionWaypointEntry.generated.h"

class UZoneMapPOITypeData;
class UMission;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FZoneMapMissionWaypointEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UZoneMapPOITypeData* PointOfInterestType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString MissionWaypointObjectName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform MissionWaypointTransform;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MissionWaypointRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FMissionObjectiveReferenceWeak> MissionObjectives;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGbxUIFormattedText MissionDirectorName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSoftClassPtr<UMission>> DirectorMissions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BlacklistIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bOutOfMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHideMissionAreaWaypoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UPrimitiveComponent> AreaComponentClassOverride;
    
    OAKGAME_API FZoneMapMissionWaypointEntry();
};

