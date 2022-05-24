#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerMissionComponent.h"
#include "ReplicatedMissionData.h"
#include "MissionDeliveryData.h"
#include "MissionObserverPlayerInterface.h"
#include "ApplyMissionRewardsDelegateDelegate.h"
#include "PlotMissionsCompletedDelegate.h"
#include "GbxMenuInputEvent.h"
#include "OakPlayerMissionComponent.generated.h"

class AActor;
class AWeapon;
class UMission;
class UMissionObjective;
class APawn;
class UGbxGFxDialogBox;
class AOakPlayerController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakPlayerMissionComponent : public UPlayerMissionComponent, public IMissionObserverPlayerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FApplyMissionRewardsDelegate OnApplyMissionRewards;
    
    UPROPERTY(BlueprintAssignable)
    FPlotMissionsCompleted OnAllPlotMissionsCompleted;
    
private:
    UPROPERTY(Transient)
    FMissionDeliveryData CurrentMissionDelivery;
    
    UPROPERTY(Transient)
    int32 CachedPlaythroughIndex;
    
    UPROPERTY(Transient)
    int32 PlaythroughsCompleted;
    
    UPROPERTY(Transient)
    bool bShowNewPlaythroughNotification;
    
public:
    UOakPlayerMissionComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestMissionData();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyMissionDeliveryChoice(bool bMissionAccepted, TSubclassOf<UMission> Mission, AActor* MissionGiver);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGrantStarterGear(UMissionObjective* MissionObjective, TSubclassOf<UMission> MissionClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGrantMissionWeapon(TSubclassOf<UMission> MissionClass);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplyMissionRewards(TSubclassOf<UMission> MissionClass);
    
public:
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon);
    
    UFUNCTION()
    void OnPawnChanged(APawn* Pawn, APawn* OldPawn);
    
    UFUNCTION()
    void OnMissionFastForwardPossible();
    
private:
    UFUNCTION()
    void OnMissionDeliveryChoice(bool bMissionAccepted, bool bEmergencyExit, int32 MissionIndex, AActor* MissionGiver);
    
public:
    UFUNCTION()
    void OnFastForwardDialogClicked(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockAssociatedAchievement(AOakPlayerController* OakPC, int32 AchievementId);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveMissionData(const FReplicatedMissionData& MissionData);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientMissionKickoffPlayed(TSubclassOf<UMission> MissionClass);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientInitiateMissionDelivery(const FMissionDeliveryData& DeliveryData);
    
    
    // Fix for true pure virtual functions not being implemented
};

