#pragma once
#include "CoreMinimal.h"
#include "ZoneMapPOIEntry.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGFxMinimapWidgetIconTrackedType.h"
#include "GFxMinimapWidgetIcon.generated.h"

class AActor;
class UGbxGFxObject;
class UObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMinimapWidgetIcon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FZoneMapPOIEntry ZoneMapPOIData;
    
    UPROPERTY(EditAnywhere)
    bool bIsAreaWaypoint;
    
    UPROPERTY(EditAnywhere)
    bool bClampRadarEdge;
    
    UPROPERTY(EditAnywhere)
    float MaxClampDistance;
    
    UPROPERTY(Transient)
    bool bShouldBeVisibleIfInRange;
    
    UPROPERTY(Transient)
    FVector IconLocation;
    
    UPROPERTY(Transient)
    bool bStaticIconLocation;
    
    UPROPERTY(Transient)
    uint32 WaypointRadius;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(Transient)
    FGuid TargetGuid;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> TargetMinimapIconComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconInstance;
    
    UPROPERTY(Transient)
    bool bCachedVisible;
    
    UPROPERTY(Transient)
    EGFxMinimapWidgetIconTrackedType TrackedType;
    
    UPROPERTY(Transient)
    float AreaWaypointIconSize;
    
    UPROPERTY(Transient)
    float CurrentTransitionTime;
    
    UPROPERTY(Transient)
    FVector2D TransitionStartingLocation;
    
    UPROPERTY(Transient)
    FString IconFrameName;
    
    FGFxMinimapWidgetIcon();
};

