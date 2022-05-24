#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidget.h"
#include "MissionObserverInterface.h"
#include "Engine/EngineTypes.h"
#include "GFxMissionTrackerRewardSlot.h"
#include "GFxMissionTrackerRewardQueueData.h"
#include "GFxMissionTrackerHUDWidget.generated.h"

class UGFxMissionTrackerSlot;
class UGbxGFxObject;
class UHUDNotificationAsset;
class UMission;
class AOakMissionTracker;
class UInventoryCategoryData;
class UMissionObjectiveSet;

UCLASS()
class UGFxMissionTrackerHUDWidget : public UGbxGFxHUDWidget, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* NewMissionNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* MissionCompletedNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    FText RestartMissionText;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeTillReturnToTrackedMission;
    
protected:
    UPROPERTY(EditAnywhere)
    float MissionActivateCheatSuppressionDuration;
    
    UPROPERTY(EditAnywhere)
    float MaxNormalRewardsDisplayTime;
    
    UPROPERTY(EditAnywhere)
    float MaxBonusRewardsDisplayTime;
    
    UPROPERTY(Transient)
    TSubclassOf<UMission> TempTrackedMission;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle;
    
    UPROPERTY(Transient)
    AOakMissionTracker* MissionTracker;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TaskContainer;
    
    UPROPERTY(Transient)
    TArray<UGFxMissionTrackerSlot*> ObjectiveSlots;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MissionTrackerContainerInner;
    
    UPROPERTY(Transient)
    TArray<FGFxMissionTrackerRewardSlot> RewardSlots;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* MoneyCurrency;
    
    UPROPERTY(EditAnywhere, Transient)
    UInventoryCategoryData* EridiumCurrency;
    
    UPROPERTY()
    TArray<FGFxMissionTrackerRewardQueueData> RewardsToDisplay;
    
    UPROPERTY(Transient)
    UMissionObjectiveSet* CachedMissionObjectiveSet;
    
    UPROPERTY(Transient)
    UGFxMissionTrackerSlot* CurrentTimerFieldSlot;
    
    UPROPERTY(Transient)
    UGFxMissionTrackerSlot* CurrentProgressBarSlot;
    
public:
    UGFxMissionTrackerHUDWidget();
    UFUNCTION()
    void UpdateTracker(TSubclassOf<UMission> TrackedMission) const;
    
protected:
    UFUNCTION()
    void SetTrackerAfterDelay() const;
    
    UFUNCTION()
    void OnMissionActivatedCheatStop() const;
    
    UFUNCTION()
    void OnMissionActivatedCheatStart() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void extRewardPanelFadeOutFinished() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

