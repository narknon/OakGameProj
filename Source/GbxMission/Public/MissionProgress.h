#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMissionStatus.h"
#include "DialogScriptPinnedRef.h"
#include "MissionProgress.generated.h"

class UMissionObjectiveSet;
class UMission;
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

