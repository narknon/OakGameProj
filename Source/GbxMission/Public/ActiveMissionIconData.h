#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActiveMissionIconData.generated.h"

class UMissionIconInterface;
class IMissionIconInterface;
class UPrimitiveComponent;
class USceneComponent;
class UDataAsset;
class UMission;
class UMissionObjective;

USTRUCT(BlueprintType)
struct GBXMISSION_API FActiveMissionIconData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IMissionIconInterface> Icon;
    
    UPROPERTY()
    FGuid IconGuid;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> IconLocationComponent;
    
    UPROPERTY()
    FVector IconLocation;
    
    UPROPERTY()
    uint32 WaypointRadius;
    
    UPROPERTY()
    UDataAsset* IconData;
    
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    TArray<UMissionObjective*> MissionObjectives;
    
    UPROPERTY()
    float VisibleDistanceOverride;
    
    UPROPERTY()
    float HiddenDistanceOverride;
    
    UPROPERTY()
    bool bHideAreaWaypoint;
    
    UPROPERTY()
    TSubclassOf<UPrimitiveComponent> AreaComponentClassOverride;
    
    FActiveMissionIconData();
};

