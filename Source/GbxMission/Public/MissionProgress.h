#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DialogScriptPinnedRef.h"
#include "EMissionStatus.h"
#include "MissionProgress.generated.h"

class UMission;
class UMissionObjectiveSet;
class UMissionObjective;

USTRUCT(BlueprintType)
struct FMissionProgress {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMission* Mission;
    
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    TEnumAsByte<EMissionStatus> Status;
    
    UPROPERTY()
    TArray<uint32> ObjectivesProgress;
    
    UPROPERTY()
    UMissionObjectiveSet* ActiveObjectiveSet;
    
    UPROPERTY()
    TArray<UMissionObjective*> DormantObjectives;
    
    UPROPERTY()
    TArray<UMissionObjective*> PausedObjectiveChains;
    
    UPROPERTY()
    bool bActivateScriptWhenDependenciesMet;
    
    UPROPERTY()
    FDialogScriptPinnedRef ActivatedDialogScript;
    
    UPROPERTY()
    bool bKickoffPlayed;
    
    UPROPERTY()
    bool bHasMissionFailed;
    
    UPROPERTY()
    bool bReplicationError;
    
    GBXMISSION_API FMissionProgress();
};

