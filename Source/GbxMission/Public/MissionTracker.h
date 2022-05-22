#pragma once
#include "CoreMinimal.h"
#include "MissionTrackerBase.h"
#include "DefendMissionTargetData.h"
#include "ActiveMissionIconData.h"
#include "MissionTracker.generated.h"

class UMission;
class UMissionIconObserverInterface;
class IMissionIconObserverInterface;
class UMissionObjectiveSet;
class UMissionObserverInterface;
class IMissionObserverInterface;
class AActor;
class UGameStatData;

UCLASS(NonTransient)
class GBXMISSION_API AMissionTracker : public AMissionTrackerBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMission* DebugActivatedMission;
    
    UPROPERTY(Transient)
    UMissionObjectiveSet* JumpedTooObjectiveSet;
    
private:
    UPROPERTY(Replicated)
    FDefendMissionTargetData DefendTarget;
    
    UPROPERTY(ReplicatedUsing=OnRep_LevelLoadEventsIssued)
    bool bLevelLoadEventsIssued;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IMissionObserverInterface>> AllMissionsObservers;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IMissionIconObserverInterface>> MissionIconObservers;
    
    UPROPERTY(ReplicatedUsing=OnRep_ActiveIcons)
    TArray<FActiveMissionIconData> ActiveIcons;
    
public:
    AMissionTracker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnStatIncrement(AActor* StatContext, UGameStatData* StatId, int32 Amount);
    
    UFUNCTION()
    void OnRep_LevelLoadEventsIssued();
    
    UFUNCTION()
    void OnRep_ActiveIcons();
    
};

