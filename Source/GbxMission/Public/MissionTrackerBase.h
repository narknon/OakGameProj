#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionProgress.h"
#include "GameFramework/Actor.h"
#include "MissionTrackerBase.generated.h"

class UMission;
class UGlobalMissionGraph;

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

