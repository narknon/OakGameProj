#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGFxMissionLogMissionItemType.h"
#include "EOakMissionType.h"
#include "EGFxMissionLogMissionIconType.h"
#include "GFxMissionLogMissionItem.generated.h"

class UMission;
class UOakMission;
class UEchoLogData;

USTRUCT(BlueprintType)
struct FGFxMissionLogMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bValid;
    
    UPROPERTY(Transient)
    FText DisplayText;
    
    UPROPERTY(Transient)
    EGFxMissionLogMissionItemType Type;
    
    UPROPERTY(Transient)
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY(Transient)
    UOakMission* AsOakMission;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UEchoLogData> EchoLogData;
    
    UPROPERTY(Transient)
    EOakMissionType MissionType;
    
    UPROPERTY(Transient)
    bool bIsTracked;
    
    UPROPERTY(Transient)
    bool bIsBlocked;
    
    UPROPERTY(Transient)
    bool bIsCompleted;
    
    UPROPERTY(Transient)
    bool bIsInCurrentZone;
    
    UPROPERTY(Transient)
    bool bHasBeenViewed;
    
    UPROPERTY(Transient)
    EGFxMissionLogMissionIconType IconType;
    
    UPROPERTY(Transient)
    int32 NumFriendsPlayingThisMission;
    
    OAKGAME_API FGFxMissionLogMissionItem();
};

