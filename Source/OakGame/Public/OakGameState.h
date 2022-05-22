#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGameState.h"
#include "BossbarEventData.h"
#include "EKilledEnemyFriendEventType.h"
#include "ENewGameState.h"
#include "MayhemModeState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "OakMayhemModeUpdatedBlueprintDelegateDelegate.h"
#include "EMultiplayerLootMode.h"
#include "EOakGameStateUIGroupMode.h"
#include "EffectivePlayerCountData.h"
#include "EOakLeague.h"
#include "MapIDData.h"
#include "GlobalScreenParticleData.h"
#include "Engine/LatentActionManager.h"
#include "EMatchmakingState.h"
#include "OakGameState.generated.h"

class ATravelStationTracker;
class AElementalInteractionManager;
class AMissionTrackerBase;
class AOakInventoryItemPickup;
class ADuelManager;
class AOakModifierManagerActor;
class AOakMusicProvider;
class UObject;
class UGbxHUDStateData;
class AActor;
class AOakProjectile;
class AOakCharacter;
class UTutorialMessageDataAsset;
class UMission;
class UGameStatData;

UCLASS()
class OAKGAME_API AOakGameState : public AGbxGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNameTaggedCharactersChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLastTravelIDsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossBarEvent, const FBossbarEventData&, EventData);
    
    UPROPERTY(Replicated, Transient)
    AMissionTrackerBase* MissionTracker;
    
    UPROPERTY(Replicated, Transient)
    ATravelStationTracker* TravelStationTracker;
    
    UPROPERTY(Replicated, Transient)
    ADuelManager* DuelManager;
    
    UPROPERTY(Replicated, Transient)
    AOakModifierManagerActor* ModifierManager;
    
    UPROPERTY()
    FOnBossBarEvent BossBarEvent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BossBarData)
    FBossbarEventData BossBarData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakMusicProvider* MusicProvider;
    
    UPROPERTY(Transient)
    AElementalInteractionManager* ElementalInteractionManager;
    
    UPROPERTY(Replicated, Transient)
    ENewGameState StartGameState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StartGameTimer)
    int32 StartGameTimer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ServerMapLoadComplete)
    bool bServerMapLoadComplete;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MayhemModeState)
    FMayhemModeState MayhemModeState;
    
    UPROPERTY(BlueprintAssignable)
    FOakMayhemModeUpdatedBlueprintDelegate OnMayhemModeUpdatedForBlueprint;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bForceDisableLevelSync;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bSyncDamageToExpSyncLevel;
    
    UPROPERTY(EditAnywhere, Replicated)
    EMultiplayerLootMode MultiplayerLootMode;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bPreventDestroyedItemsToLostLoot;
    
    UPROPERTY(Replicated, Transient)
    EOakGameStateUIGroupMode CurrentGroupMode;
    
    UPROPERTY(EditAnywhere)
    float InventoryShopResetPeriod;
    
    UPROPERTY(Replicated, Transient)
    FEffectivePlayerCountData EffectivePlayerCountData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EffectiveExpSyncLevel)
    int32 EffectiveExpSyncLevel;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SecondsBeforeShopsReset)
    float ReplicatedSecondsBeforeShopsReset;
    
    UPROPERTY(Transient)
    float LocalSecondsBeforeShopsReset;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentHUDState)
    UGbxHUDStateData* CurrentHUDState;
    
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ServerSkippedIntroMovie)
    bool bServerSkippedIntroMovie;
    
    UPROPERTY(Replicated, Transient)
    bool bServerFinishedRockNRollIntro;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveLeague)
    TEnumAsByte<EOakLeague> ActiveLeague;
    
    UPROPERTY(Replicated, Transient)
    uint8 ActiveLeagueInstance;
    
    UPROPERTY(Replicated, Transient)
    int32 CurrentPlayThrough;
    
    UPROPERTY(Replicated, Transient)
    TArray<AActor*> PlayerTargetingActors;
    
    UPROPERTY(Replicated, Transient)
    bool bInfiniteAmmo;
    
    UPROPERTY(Transient)
    bool bPlayerWeaponsRestricted;
    
    UPROPERTY(Replicated, Transient)
    int32 PlayerGlobalInputLocks;
    
    UPROPERTY(Config)
    int32 CleanupPickupTriggerCount;
    
    UPROPERTY(Config)
    int32 CleanupPickupRemainderCount;
    
    UPROPERTY(Transient)
    TArray<AOakInventoryItemPickup*> PickupList;
    
    UPROPERTY(Transient)
    TArray<AOakInventoryItemPickup*> PickupCleanupList;
    
    UPROPERTY(Transient)
    TArray<AOakProjectile*> GrenadeList;
    
    UPROPERTY(Transient)
    int32 CachedNumProjectilesForQuickPop;
    
    UPROPERTY(Replicated, Transient)
    TArray<AOakCharacter*> NameTaggedCharacters;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentTutorialMessages)
    TArray<UTutorialMessageDataAsset*> CurrentTutorialMessages;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LastTraveledMapID)
    FMapIDData LastTraveledMapID;
    
    UPROPERTY(Transient)
    TArray<FGlobalScreenParticleData> GlobalScreenParticles;
    
    UPROPERTY(Replicated, Transient)
    bool bClientJoining;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnNameTaggedCharactersChanged OnNameTaggedCharactersChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnLastTravelIDsChanged OnLastTravelIDsChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FGbxAttributeInteger SpawnOptionLevel;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MicropatchSwitches)
    uint32 MicropatchSwitches;
    
public:
    AOakGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void StaticUnregisterGlobalScreenParticle(UObject* WorldContextObject, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void StaticRegisterGlobalScreenParticle(UObject* WorldContextObject, FGlobalScreenParticleData ScreenParticle);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapTravelIDs(UObject* WorldContextObject, uint8 ZoneNameID, uint8 MapNameID, float MinWaitTime, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNameTaggedCharacter(AOakCharacter* CharacterToRemove);
    
private:
    UFUNCTION()
    void OnRep_StartGameTimer();
    
public:
    UFUNCTION()
    void OnRep_ServerSkippedIntroMovie();
    
protected:
    UFUNCTION()
    void OnRep_ServerMapLoadComplete();
    
private:
    UFUNCTION()
    void OnRep_SecondsBeforeShopsReset();
    
protected:
    UFUNCTION()
    void OnRep_MicropatchSwitches(uint32 OldMicropatchSwitches);
    
public:
    UFUNCTION()
    void OnRep_MayhemModeState();
    
private:
    UFUNCTION()
    void OnRep_LastTraveledMapID();
    
    UFUNCTION()
    void OnRep_EffectiveExpSyncLevel();
    
    UFUNCTION()
    void OnRep_CurrentTutorialMessages();
    
public:
    UFUNCTION()
    void OnRep_CurrentHUDState();
    
    UFUNCTION()
    void OnRep_BossBarData();
    
private:
    UFUNCTION()
    void OnRep_ActiveLeague();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<AOakCharacter*> GetNameTaggedCharacters() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentTravelIDs(UObject* WorldContextObject, FMapIDData& OutTravelIDs);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientMatchmakingStateChanged(EMatchmakingState MatchmakingState);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientMatchmakingBackup();
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBroadcastKilledEnemyFriendEvent(EKilledEnemyFriendEventType KilledEnemyFriendEventType, uint32 EnemyUINameHash);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBroadcastFriendEvent_PropagateRareSpawnMission(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass, UGameStatData* StatData);
    
    UFUNCTION(BlueprintCallable)
    void ClearNameTaggedCharacters();
    
    UFUNCTION(BlueprintPure)
    static void BreakMapIDData(FMapIDData InMapIDData, uint8& ZoneNameID, uint8& MapNameID);
    
    UFUNCTION(BlueprintCallable)
    void AddNameTaggedCharacter(AOakCharacter* CharacterToAdd);
    
};

