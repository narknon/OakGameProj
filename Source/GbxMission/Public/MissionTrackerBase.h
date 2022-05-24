#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "MissionProgress.h"
#include "MissionTrackerBase.generated.h"

class UGlobalMissionGraph;
class UMission;

UCLASS(NotPlaceable, Transient)
class GBXMISSION_API AMissionTrackerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FMissionProgress> MissionList;
    
    UPROPERTY()
    TSubclassOf<UMission> TrackedMission;
    
    UPROPERTY()
    bool bDataValidated;
    
    UPROPERTY()
    UGlobalMissionGraph* GlobalMissionGraph;
    
public:
    AMissionTrackerBase();
};

