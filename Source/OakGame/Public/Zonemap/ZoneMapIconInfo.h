#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapPOIEntry.h"
#include "ZoneMapMissionWaypointEntry.h"
#include "ZoneMapChallengeEntry.h"
#include "EZoneMapMissionStatus.h"
#include "EZoneMapChallengeStatus.h"
#include "ZoneMapIconInfo.generated.h"

class UChallengeLevelActorComponent;
class AActor;
class UMapIconAnchor;
class UPrimitiveComponent;
class AOakZoneMapIcon_POI;
class AOakVehicle;
class UChallenge;

USTRUCT(BlueprintType)
struct FZoneMapIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(Export, Transient)
    UMapIconAnchor* IconAnchor;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* IconPOIComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AOakZoneMapIcon_POI> IconActor;
    
    UPROPERTY(BlueprintReadOnly)
    UClass* IconClass;
    
    UPROPERTY(Transient)
    FGuid IconGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FVector IconLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator IconRotation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UChallengeLevelActorComponent* ChallengeComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(Transient)
    FString IconFrameName;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDynamic;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowDynamicInNonCurrentMap;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsPlayer;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowInMiniMap;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowInZoneMap;
    
    UPROPERTY(BlueprintReadOnly)
    FZoneMapPOIEntry POIEntry;
    
    UPROPERTY(BlueprintReadOnly)
    FZoneMapMissionWaypointEntry MissionWaypointEntry;
    
    UPROPERTY(BlueprintReadOnly)
    FZoneMapChallengeEntry ChallengeEntry;
    
    UPROPERTY(BlueprintReadOnly)
    AOakVehicle* TargetedVehicle;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EZoneMapMissionStatus> WaypointStatus;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMissionTrackerIcon;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOutOfMapWaypoint;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EZoneMapChallengeStatus> ChallengeStatus;
    
    UPROPERTY()
    uint32 ChallengeRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UChallenge> ChallengeClass;
    
    OAKGAME_API FZoneMapIconInfo();
};

