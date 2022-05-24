#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClientExpectedSaveGameValues.h"
#include "GbxPlayerController.h"
#include "UIAccessors.h"
#include "OrphanedUIStandIn.h"
#include "SaveGameActorInterface.h"
#include "ETravelStatus.h"
#include "GameplayTagContainer.h"
#include "UsabilityInfo.h"
#include "UObject/NoExportTypes.h"
#include "OakCARMenuVehicleConfig.h"
#include "PlayerCombatEncounterData.h"
#include "EPlayerDifficultySetting.h"
#include "OutstandingActivityFeedData.h"
#include "AimControlParameters.h"
#include "EPlayerExperienceType.h"
#include "TriggerFeedbackState.h"
#include "InventoryReplicationData.h"
#include "UObject/NoExportTypes.h"
#include "OakReticleFeedbackDelegateDelegate.h"
#include "ELateJoinState.h"
#include "MessageHandle.h"
#include "ReplicatedCameraModeState.h"
#include "UObject/NoExportTypes.h"
#include "OakPlayerPath.h"
#include "EPOIActivationResult.h"
#include "OakCustomizationInfo.h"
#include "OakInventoryCustomizationPartInfo.h"
#include "CrewQuartersDecorationInfo.h"
#include "CrewQuartersRoomInfo.h"
#include "UnlockedPlayerEchoLogData.h"
#include "PremiumCurrencyManager.h"
#include "ActiveFastTravelData.h"
#include "VaultCardManager.h"
#include "OnReRolledInventoryActorReadyDelegate.h"
#include "GFxMissionTrackerRewardDisplayData.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPatternResult.h"
#include "ETradeRequestReceptionType.h"
#include "SelectedInventoryInfo.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GearSoldByFriendData.h"
#include "EInventoryListType.h"
#include "ProcessedReward.h"
#include "Engine/Scene.h"
#include "EPlayerExperienceSource.h"
#include "UObject/NoExportTypes.h"
#include "EKickReason.h"
#include "ECanReRollInventoryResult.h"
#include "Perception/AIPerceptionTypes.h"
#include "Engine/DataTable.h"
#include "OakNPCMailDataEntry.h"
#include "OakPlayerController.generated.h"

class ACatchARide;
class AOakPlayerState;
class UGFxSkillScreenTree;
class UPlayerGuardianRankComponent;
class UCrewQuartersDecorationItemData;
class UWwiseListenerEffectComponent;
class UTravelStationData;
class UInputComponent;
class UOakSaveGameChannel;
class UOakInventoryCustomizationPartData;
class APawn;
class UFogOfDiscoveryComponent;
class UUsableComponent;
class UCinematicModeData;
class UGbxMenuInput;
class AOakCharacter;
class UOakFirstPersonComponent;
class UOakSaveGame;
class UPlayerClassIdentifier;
class AZoneMapViewer;
class AOakHUD;
class UGFxModalTutorialDataAsset;
class UGbxMenuStack;
class AActor;
class UDiscoveryComponent;
class UOakUseComponent;
class ANewGameFlow;
class UOakPlayerMissionComponent;
class UGFxItemTradingMenu;
class APlayerStandIn;
class UGbxMenuData;
class UGbxGFxDialogBox;
class UEchoLogData;
class UGameStatsComponent;
class UVehicleSpawnerComponent;
class UObject;
class URecoilControlComponent;
class UPlayerShopManagerComponent;
class UOakChallengesComponent;
class AOakPlayerController;
class UTextureRenderTarget2D;
class UOakCustomizationData;
class AOakProjectile;
class UGbxAction_CoordinatedEffect;
class UOakAimAssistStrategy;
class UOakAimAssistParameters;
class AGbxCharacter;
class UOakProfile;
class UUIManager;
class AOakPlayerCameraManager;
class APlayerTradeManager;
class UFocusableComponent;
class UActivityFeedReward;
class UParticleSystemComponent;
class AAdvancedInteractiveObject;
class UGameStatChannel;
class UParticleSystem;
class UGbxZoneMapFODSaveGameData;
class UGbxDialogComponent;
class UMission;
class UOakCARVehicleData;
class UOakCARVehiclePartData;
class UGbxInventoryCategoryData;
class UGbxHUDStateData;
class ACrewQuartersRoom;
class UDynamicRoomBaseData;
class AOakInventoryItemPickup;
class AGalaxyMapStation;
class UPlanetData;
class UGameStatData;
class AOakVehicle;
class UDialogEvent;
class UGFxPCTextChatBuffer;
class UTravelStationComponentBase;
class UChallengesComponent;
class UChallenge;
class UCrewQuartersRoomItemData;
class ACatchARidePlatform;
class UInventoryCategoryData;
class UWeatherTemplate;
class APlayerState;
class URegionData;
class UTutorialMessageDataAsset;
class UOakLostLootComponent;
class UInventoryData;

UCLASS()
class OAKGAME_API AOakPlayerController : public AGbxPlayerController, public IUIAccessors, public ISaveGameActorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerStateRemovedEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateAddedEvent, AOakPlayerState*, EventPlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTravelCountdownUpdate, UTravelStationData*, DestinationTravelStation, int32, RemainingTime, ETravelStatus, CurrentStatus);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveGameEvent, const FString&, SlotName, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnChanged, APawn*, NewPawn, APawn*, OldPawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentUsableUsabilityChanged, UUsableComponent*, CurrentUsable, const FUsabilityInfo&, InUsabilityInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCurrentUsableChanged, UUsableComponent*, CurrentUsable, const FUsabilityInfo&, InUsabilityInfo, FVector, UsableComponentImpactPoint, float, UsableComponentDistanceAway);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakTextChatOptionChangedDelegate, bool, bIsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakPCUsableLookedAwayFromSignature, UUsableComponent*, NewUsable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakPCUsableLookedAtSignature, UUsableComponent*, NewUsable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLastNearbyGrenadeRemoved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLagStatusChanged, bool, bIsLagging);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryCustomizationUnlockedDelegate, UOakInventoryCustomizationPartData*, CustomizationPart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFirstNearbyGrenadeAdded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatEncounterEndedDelegate, const FPlayerCombatEncounterData&, CombatEncounterData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicModeUpdated, UCinematicModeData*, InCinematicMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicModeChanged, bool, bInCinematicMode);
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakCharacter* OakCharacter;
    
    UPROPERTY(Export, Transient)
    UOakFirstPersonComponent* OakFirstPersonComponent;
    
    UPROPERTY(Transient)
    UOakSaveGame* CurrentSavegame;
    
    UPROPERTY(Transient)
    UOakSaveGameChannel* SaveGameChannel;
    
    UPROPERTY(Transient)
    bool bClientWaitingForFullSaveGameInitialization;
    
    UPROPERTY(Transient)
    FClientExpectedSaveGameValues ExpectedSaveGameValues;
    
    UPROPERTY(Transient)
    int32 ExperiencePointsLoadedFromSaveGame;
    
    UPROPERTY(Transient)
    uint32 TimePlayedSecondsLoadedFromSaveGame;
    
    UPROPERTY(Transient)
    uint32 TimePlayedSeconds;
    
    UPROPERTY(Transient)
    UPlayerClassIdentifier* CurrentPlayerClass;
    
    UPROPERTY(Transient)
    UGFxSkillScreenTree* SkillTreeSubMenuClassPtr;
    
    UPROPERTY(Transient)
    FString PreferredCharacterName;
    
    UPROPERTY(Transient)
    AOakHUD* OakHUD;
    
    UPROPERTY(Transient)
    UGbxMenuStack* MenuStack;
    
    UPROPERTY(Transient)
    EPlayerDifficultySetting DifficultySetting;
    
    UPROPERTY()
    bool bHasActivityFeedRequestInFlight;
    
    UPROPERTY()
    float NextAllowedActivityFeedPostTime;
    
    UPROPERTY(Transient)
    TArray<FOutstandingActivityFeedData> OutstandingActivityFeedQueue;
    
public:
    UPROPERTY(Transient)
    ANewGameFlow* NewGameFlow;
    
    UPROPERTY(Transient)
    UGFxItemTradingMenu* TradingMenu;
    
    UPROPERTY(Transient)
    AOakPlayerState* CurrentRaidSpectatorTarget;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentUsableChanged CurrentUsableChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentUsableUsabilityChanged CurrentUsabilityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOakPCUsableLookedAtSignature OnLookedAt;
    
    UPROPERTY(BlueprintAssignable)
    FOakPCUsableLookedAwayFromSignature OnLookedAwayFrom;
    
    UPROPERTY(BlueprintAssignable)
    FOnPawnChanged OnPawnChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveGameEvent OnSaveGameStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveGameEvent OnSaveGameComplete;
    
    UPROPERTY(Transient)
    FPlayerStateAddedEvent OnPlayerStateAdded;
    
    UPROPERTY(Transient)
    FPlayerStateRemovedEvent OnPlayerStateRemoved;
    
    UPROPERTY(Transient)
    FCinematicModeChanged OnCinematicModeChanged;
    
    UPROPERTY(Transient)
    FLagStatusChanged OnLagStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFirstNearbyGrenadeAdded OnFirstNearbyGrenadeAdded;
    
    UPROPERTY(BlueprintAssignable)
    FLastNearbyGrenadeRemoved OnLastNearbyGrenadeRemoved;
    
    UPROPERTY(Transient)
    UEchoLogData* CachedEchoLogData;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UOakUseComponent* UseComponent;
    
    UPROPERTY(Export)
    UGameStatsComponent* GameStatsComponent;
    
    UPROPERTY(Export)
    UOakPlayerMissionComponent* PlayerMissionComponent;
    
    UPROPERTY(Export)
    UDiscoveryComponent* DiscoveryComponent;
    
    UPROPERTY(Export)
    UVehicleSpawnerComponent* VehicleSpawnerComponent;
    
    UPROPERTY(Export)
    UPlayerGuardianRankComponent* PlayerGuardianRankComponent;
    
    UPROPERTY(Export)
    UFogOfDiscoveryComponent* FoDComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    URecoilControlComponent* RecoilControlComponent;
    
    UPROPERTY(Export)
    UPlayerShopManagerComponent* ShopManagerComponent;
    
    UPROPERTY(Export)
    UOakChallengesComponent* ChallengesComponent;
    
    UPROPERTY(Export)
    UWwiseListenerEffectComponent* WwiseListenerEffectComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxMenuInput> MenuInput;
    
    UPROPERTY(Transient)
    bool bBoundaryWarningActive;
    
    UPROPERTY(Export, Transient)
    UUsableComponent* CachedUsableTarget;
    
    UPROPERTY(Transient)
    FUsabilityInfo CachedUsabilityInfo;
    
    UPROPERTY(Transient)
    FVector CachedUsableImpactPoint;
    
    UPROPERTY(Transient)
    float CachedUsableDistanceAway;
    
    UPROPERTY(Transient)
    FVector CachedPlayerAlertLocation;
    
public:
    UPROPERTY()
    uint8 bAddDefaultBindings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bJumpingUncrouchesThenJumps: 1;
    
    UPROPERTY(EditAnywhere)
    float MantleAnalogInputThreshold;
    
    UPROPERTY(EditAnywhere)
    float MinPassiveMantleButtonHoldDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RaidSpectatorCameraMode;
    
    UPROPERTY()
    TWeakObjectPtr<AOakPlayerController> RaidSpectatorTarget;
    
    UPROPERTY(Export)
    UInputComponent* RaidSpectatorInputComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AZoneMapViewer* SpawnedZoneMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* CurrentLevelFogOfDiscovery;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* MissionDeliveryMenuData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AOakProjectile*> NearbyGrenades;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GearSoldByFriendActor)
    AActor* GearSoldByFriendActor;
    
private:
    UPROPERTY(Transient)
    TArray<AActor*> GearSoldByMe;
    
public:
    UPROPERTY(Transient)
    TArray<FOrphanedUIStandIn> OrphanedStandIns;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> LateJoinStandIn_DigistructEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> LateJoinStandIn_DigistructOutEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> LateJoinStandIn_HoloEffect;
    
    UPROPERTY(Transient)
    APlayerStandIn* LateJoinStandIn;
    
protected:
    UPROPERTY(Transient)
    TArray<FTriggerFeedbackState> TriggerFeedbackStates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAimControlParameters AimControlParameters;
    
protected:
    UPROPERTY(Transient)
    UOakAimAssistStrategy* OakAimAssistStrategy;
    
public:
    UPROPERTY(Transient)
    UOakAimAssistParameters* AimAssistParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOakAimAssistParameters* DefaultAimAssistParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAxialDeadZoneBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAxialDeadZoneRatio;
    
    UPROPERTY(EditAnywhere)
    FVector2D SafeFrameScalingMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D HDRBrightnessMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector HDRMenuBrightnessMinMaxTick;
    
    UPROPERTY(EditAnywhere)
    FVector2D BrightnessMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D BlackLevelMinMax;
    
private:
    UPROPERTY(Transient)
    UOakProfile* CurrentOakProfile;
    
protected:
    UPROPERTY(Transient)
    TArray<UOakAimAssistParameters*> WeaponSlotOverrideAimAssistParameters;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFullyAimingAtTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAimingAtShootableObject;
    
    UPROPERTY()
    FOakReticleFeedbackDelegate OnReticleFeedback;
    
    UPROPERTY()
    UUIManager* UIManager;
    
    UPROPERTY(Transient)
    AOakPlayerCameraManager* OakPlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D CrosshairScreenPosition;
    
    UPROPERTY(EditAnywhere)
    TArray<UClass*> MenusToPreserveInDownState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAllowForegroundFocusEffect;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TradeManager)
    APlayerTradeManager* TradeManager;
    
protected:
    UPROPERTY(Transient)
    FMessageHandle PendingTradeMessage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedCameraModeState)
    FReplicatedCameraModeState ReplicatedCameraModeState;
    
    UPROPERTY(Export, Transient)
    UFocusableComponent* CurrentFocusObject;
    
    UPROPERTY(Config, EditAnywhere)
    float GamepadViewScale;
    
    UPROPERTY(Config, EditAnywhere)
    float GamepadZoomScale;
    
    UPROPERTY(Config, EditAnywhere)
    float MouseViewScale;
    
    UPROPERTY(Config, EditAnywhere)
    float MouseZoomScale;
    
public:
    UPROPERTY(EditAnywhere)
    FOakPlayerPath PlayerPath;
    
private:
    UPROPERTY(Replicated, Transient)
    bool bInfiniteAmmo;
    
    UPROPERTY(EditAnywhere)
    float CombatEncounterEndedDelay;
    
    UPROPERTY(Transient)
    AGbxCharacter* CachedPrimaryCharacter;
    
    UPROPERTY(Transient)
    bool bBeingTargeted;
    
    UPROPERTY(Transient)
    FPlayerCombatEncounterData ActiveCombatEncounterData;
    
    UPROPERTY(Transient)
    bool bOverrideCrosshairScreenPosition;
    
    UPROPERTY(Transient)
    FVector2D OverrideCrosshairScreenPosition;
    
    UPROPERTY(Transient)
    UGbxGFxDialogBox* LoadingCharacterDialog;
    
public:
    UPROPERTY(Transient)
    FCombatEncounterEndedDelegate OnCombatEncounterEnded;
    
private:
    UPROPERTY(Transient)
    float TimeSinceLastMovement;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* EchoNetParticleBackdrop;
    
    UPROPERTY(Transient)
    AAdvancedInteractiveObject* CurrentAIO;
    
public:
    UPROPERTY(Transient)
    AAdvancedInteractiveObject* PendingFinalizeAIO;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FOakCustomizationInfo> UnlockedCustomizationData;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryCustomizationPartInfo> UnlockedInventoryCustomizationParts;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FCrewQuartersDecorationInfo> UnlockedCrewQuartersDecorations;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FCrewQuartersRoomInfo> UnlockedCrewQuartersRooms;
    
    UPROPERTY(Transient)
    TMap<FName, FString> NicknameMappings;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* WorldSpaceWeatherEffect;
    
    UPROPERTY(Transient)
    TArray<FUnlockedPlayerEchoLogData> UnlockedEchoLogs;
    
public:
    UPROPERTY(Transient)
    FMessageHandle PendingSwapSeat;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CustomReplicatedActor)
    AActor* CustomReplicatedActor;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 MoxxisEventTier;
    
protected:
    UPROPERTY(Transient)
    UGameStatChannel* GameStatChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ScreenLiquidParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float ScreenLiquidOpacityBlendInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ScreenLiquidOpacityBlendOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ScreenLiquidColorTransitionTime;
    
private:
    UPROPERTY(Export, Transient)
    UInputComponent* PausedStateInputComponent;
    
    UPROPERTY(Config)
    float LateJoinFadeDuration;
    
public:
    UPROPERTY(Transient)
    FPremiumCurrencyManager PremiumCurrencyManager;
    
private:
    UPROPERTY(Transient)
    UGbxZoneMapFODSaveGameData* ZoneMapFODSavedData;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ScreenFadeInParticleTemplate;
    
    UPROPERTY(Transient)
    TArray<FActiveFastTravelData> PlayerDiscoveredFastTravel;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringInterpolationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringMinMovementSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringCurrentDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringEaseInDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoCenteringEaseOutDuration;
    
public:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* MinimapRenderTarget;
    
    UPROPERTY(Transient)
    FCinematicModeUpdated OnCinematicModeUpdated;
    
    UPROPERTY(Transient)
    FVaultCardManager VaultCardManager;
    
protected:
    UPROPERTY(Transient)
    AActor* ReRolledInventoryActorSource;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReRolledInventoryActor)
    AActor* ReRolledInventoryActor;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnReRolledInventoryActorReady OnReRolledInventoryActorReady;
    
    UPROPERTY(BlueprintAssignable)
    FOnReRolledInventoryActorReady OnReRolledInventorySourceSet;
    
    UPROPERTY(Transient)
    uint32 PlayerSelectedLeague;
    
    AOakPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteProfile();
    
protected:
    UFUNCTION()
    void UnregisterSavegameDelegates();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnlockEchoLog(UEchoLogData* EchoLog);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void UnlockAllVehiclesAndParts();
    
    UFUNCTION(BlueprintCallable)
    void TryTradeWithRadialMenuTarget();
    
    UFUNCTION(BlueprintCallable)
    void TryInitiateDuel();
    
    UFUNCTION(Client, Reliable)
    void TriggerDisplayMissionRewardsDelegate(TSubclassOf<UMission> Mission, FGFxMissionTrackerRewardDisplayData Reward, FGFxMissionTrackerRewardDisplayData OptionalReward);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLookingForHelp();
    
    UFUNCTION(Exec)
    void TextChat(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void TempGrantActivityFeedChallengeReward(UActivityFeedReward* Reward, int32 ChallengeLevelTargetValue, int32 ChallengeLevelCompleted);
    
    UFUNCTION(BlueprintCallable, Exec)
    AZoneMapViewer* SpawnZoneMap();
    
    UFUNCTION(BlueprintCallable)
    void SpawnVehicleFromConfig(int32 GameStage, FOakCARMenuVehicleConfig VehicleConfig, ACatchARide* CARConsole);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SpawnVehicle(int32 GameStage, const UOakCARVehicleData* Vehicle, const TArray<UOakCARVehiclePartData*>& Parts, UObject* CarMenuInterface, FColor Color1, FColor Color2, FColor Color3);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SpawnMissionVehicle(ACatchARide* Console);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SpawnCustomReplicatedActor(AOakPlayerController* PlayerOwner, UClass* ClassToSpawn, const FTransform& ActorTransform);
    
    UFUNCTION(BlueprintPure)
    bool ShouldSpectateOnDeath() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCameraForRaidSpectator();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetReRollSourceInventory(AActor* InventoryActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkState(bool bPushing);
    
    UFUNCTION(BlueprintCallable)
    void SetNonMovementInputLocked(bool bLocked, FName Reason);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SetMoxxiEventTier(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedCanUseObjects(bool bLocked, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetInputLocked(bool bLocked, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetHasPlayedSpecialEchoLogInsertAnimationAlready(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusObject(AActor* FocusActor);
    
    UFUNCTION(BlueprintCallable)
    void SetFastTravelLocks(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetEchoMenuLocked(bool bLocked, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomViewportViewFlags(int32 ViewFlags, bool bEnabled);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePremiumCurrency(const UGbxInventoryCategoryData* Category, int32 Quantity);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSwitchPlayerClass(UPlayerClassIdentifier* NewPlayerClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnLostLoot(const FString& GearSerialNumber, FSpawnPatternResult SpawnResult);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetWaitingForSaveGameInitialization(bool bWaiting);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetTradeRequestReceptionType(ETradeRequestReceptionType NewTradeRequestReceptionType);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetRemoteViewportInfo(int32 ViewportWidth, int32 ViewportHeight);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetRemoteDefaultFOV(float DefaultFOV);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetRemoteCrosshairPosition(FVector2D ClientCrosshairPosition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetRemoteCameraInfo(bool bIsFirstPerson);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReadyForSaveGameChannel();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetReadyForGameStatChannel();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetMaxSpawnCost(int32 InMaxSpawnCost);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetLateJoinState(ELateJoinState InLateJoinState);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetFullyAimingAtTarget(bool bInClientFullyAimingAtTarget);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDuelingEnabled(bool bNewDuelingEnabled);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDifficultySetting(EPlayerDifficultySetting NewDifficulty);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCrewQuartersRoomMood(ACrewQuartersRoom* InRoom, UDynamicRoomBaseData* RoomToLoad);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetBulletMagnetismSettings(bool bDoBulletMagnetism);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetActiveVaultCardID(uint32 VaultCardID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendTradeOfferToPlayer(AOakPlayerState* PlayerReceivingTradeOffer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRotateRaidSpectatorTarget(bool bNextTarget);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestSwitchSeats(APawn* Occupant);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestMayhemReload(int32 NewMayhemLevel, int32 NewRandomSeed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestActivateCustomPOI(UObject* CustomPOIData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveSecondaryStreamerBooster(const int32 EffectIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemovePrimaryStreamerBooster(const int32 EffectIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveCitizenScienceBooster(const int32 EffectIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRedeemVaultCardGearReward(uint32 VaultCardID, int32 GearIndex, bool bRepurchase);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerProcessVaultCardChestReward(uint32 VaultCardID, FSelectedInventoryInfo SelectedInventory);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayItemCallout(AOakInventoryItemPickup* Pickup);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayIdleDialogInMenu(UGbxMenuData* MenuData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayIdleDialog();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayerSelectedCharacter(const FUniqueNetIdRepl& TargetPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayerOpenedCharacterSelect();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlaceChosenObject(ACrewQuartersRoom* InRoom, UObject* InIO, UObject* ChosenObject);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOnUIMenuActivated();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOnPlanetSelected(AGalaxyMapStation* GalaxyMapStation, UPlanetData* PlanetData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyTrackedEchoLogPlaybackState(UEchoLogData* SetPlayingTrackedEchoLog, bool bPlaying);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyLoadingMoviesShown_ForSonyRTMP();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyLoadingMoviesHidden_ForSonyRTMP();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLostLootChanged();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerJoinedPresenceSession(const FString& SessionId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerInterruptTravelToStation(ETravelStatus CancelStatus);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerInitializeLostLootMachine(AActor* Actor, int32 Current, int32 Max);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerIncrementSendMailStat(UGameStatData* Stat);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerIncrementPhotoModeStylizeStat(UGameStatData* Stat);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerIncrementGameStat(UGameStatData* Stat, int32 Amount);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerHintPlayerForNextDialog();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGearSoldByFriendDataSelected(FGearSoldByFriendData SeletedData);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDumpPlayerDebugInfo();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCreatePlayerAlert(const FUniqueNetIdRepl& InInstigator, AActor* InTargetedActor, FVector InAlertLocation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCreatedPresenceSession(const FString& SessionId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerClearCurrentAIO(bool bImmediate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplySecondaryStreamerBooster(const int32 EffectIndex, const float Duration);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplyPrimaryStreamerBooster(const int32 EffectIndex, const float Duration);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplyCitizenScienceBooster(const int32 EffectIndex, const float Duration);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddGearToInventoryFromSelectedInfo(const FSelectedInventoryInfo SelectedInventoryInfo);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddGearToInventory(const FString& GearSerialNumber, EInventoryListType InventoryListType);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddCurrency(int32 Amount, UGbxInventoryCategoryData* CurrencyType);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAcceptVehicleSeatSwapRequest(AOakVehicle* VehicleFrom, int32 FromSeat, int32 ToSeat);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAcceptPendingTradeOffer(AOakPlayerState* PlayerOfferingTradeState);
    
    UFUNCTION(BlueprintCallable)
    void RotateRaidSpectatorTarget(bool bNextTarget);
    
private:
    UFUNCTION()
    void ResurrectedDuringCombat(bool bStarted);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreCameraModeFocus(float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void ResourceLockHideFirstPerson(bool bHide, FName Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReRollInventoryForNewPart(AActor* InventoryActor, const FGameplayTagContainer& DesiredPartTags, bool bMustHaveAllTags);
    
protected:
    UFUNCTION()
    void RegisterSavegameDelegates();
    
public:
    UFUNCTION()
    void ReceiveMissionRewards(TSubclassOf<UMission> MissionClass, const FProcessedReward& Reward, const FProcessedReward& OptionalReward);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReadProfile();
    
protected:
    UFUNCTION()
    void RaidSpectatorProcessMouseYawInput(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessMouseScrollInput(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessMousePitchInput(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessGamepadYawInput(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessGamepadRightTrigger(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessGamepadPitchInput(float Val);
    
    UFUNCTION()
    void RaidSpectatorProcessGamepadLeftTrigger(float Val);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void QuickSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QuickLoad();
    
    UFUNCTION(Client, Unreliable)
    void PlaySwappedSeatDialog();
    
    UFUNCTION(BlueprintCallable)
    void PlayEquippedEmote(int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseGame();
    
    UFUNCTION(BlueprintCallable)
    void OverrideCameraModeFocus(float BlendInTime, FPostProcessSettings PPSettings);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenStatusMenu(const FName SubMenuId, UObject* SelectionObject);
    
    UFUNCTION(Exec)
    void OpenShiftFirstBoot();
    
    UFUNCTION(BlueprintCallable)
    void OpenQuickMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenPCTextChatMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenMissionLogMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenMapMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenInventoryMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenEchoNetMenu(FName SubmenuName);
    
    UFUNCTION()
    void OnUIMenuActivated(UObject* MenuObject);
    
    UFUNCTION()
    void OnTextChatLogChanged(UGFxPCTextChatBuffer* TextChatBuffer);
    
    UFUNCTION()
    void OnRep_TradeManager();
    
protected:
    UFUNCTION()
    void OnRep_ReRolledInventoryActor();
    
    UFUNCTION()
    void OnRep_ReplicatedCameraModeState();
    
public:
    UFUNCTION()
    void OnRep_GearSoldByFriendActor();
    
    UFUNCTION()
    void OnRep_CustomReplicatedActor();
    
protected:
    UFUNCTION()
    void OnMissionDataChanged();
    
    UFUNCTION()
    void OnLevelChanged(const int32 OldLevel, const int32 NewLevel);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnJokeEULAClosedByPlayer();
    
protected:
    UFUNCTION()
    void OnExperienceAdded(const int32 ExperienceAdded);
    
    UFUNCTION()
    void OnCurrentUsableUsabilityChanged(UUsableComponent* NewUseComponent, const FUsabilityInfo& InUsabilityInfo);
    
    UFUNCTION()
    void OnCurrentUsableImpactDataChanged(UUsableComponent* NewUsableComponent, FVector NewUsableImpactPoint, float NewUsableDistanceAway);
    
    UFUNCTION()
    void OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
    
public:
    UFUNCTION()
    void OnConfirmSeatSwap();
    
    UFUNCTION()
    void OnCinematicStopped_RetryFadeIn();
    
    UFUNCTION()
    void OnCharacterSpawnedInLevel(UTravelStationComponentBase* SpawnedAtStation);
    
    UFUNCTION()
    void OnCharacterDied();
    
    UFUNCTION()
    void OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
protected:
    UFUNCTION()
    void OnCameraStyleChanged(FName NewCameraStyle);
    
public:
    UFUNCTION()
    void NotifyUncappedExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type);
    
private:
    UFUNCTION()
    void NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyNotIdle();
    
private:
    UFUNCTION()
    void NotifyLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void NotifyExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkInventoryCustomizationPartAsViewed(UOakInventoryCustomizationPartData* CustomizationToTest);
    
    UFUNCTION(BlueprintCallable)
    void MarkCustomizationAsViewed(UOakCustomizationData* CustomizationToTest);
    
    UFUNCTION(BlueprintCallable)
    void MantleReleased();
    
    UFUNCTION(BlueprintCallable)
    void MantlePressed();
    
    UFUNCTION(BlueprintCallable)
    void JumpReleased();
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
    UFUNCTION(BlueprintPure)
    bool IsStreamerBuffActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemAnointed(AActor* InventoryActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryCustomizationPartUnlocked(UOakInventoryCustomizationPartData* CustomizationToTest) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryCustomizationPartNew(UOakInventoryCustomizationPartData* CustomizationToTest) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractingWithAIO() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsIdle();
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomizationUnlocked(UOakCustomizationData* CustomizationToTest);
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomizationNew(UOakCustomizationData* CustomizationToTest);
    
    UFUNCTION(BlueprintPure)
    bool IsCrosshairOffCenter() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCrewQuartersRoomUnlocked(UCrewQuartersRoomItemData* RoomToTest);
    
    UFUNCTION(BlueprintCallable)
    bool IsCrewQuartersDecorationUnlocked(UCrewQuartersDecorationItemData* DecorationToTest);
    
    UFUNCTION(BlueprintPure)
    bool HasPlayedSpecialEchoLogInsertAnimationAlready() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnySDUs() const;
    
    UFUNCTION(BlueprintCallable)
    AZoneMapViewer* GetZoneMapViewer();
    
    UFUNCTION(BlueprintPure)
    UVehicleSpawnerComponent* GetVehicleSpawnerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    AOakHUD* GetOakHUD();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfDiscoveredEridianWritings();
    
    UFUNCTION(BlueprintCallable)
    UGbxMenuStack* GetMenuStack();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxLostLootSize();
    
    UFUNCTION(BlueprintPure)
    UFogOfDiscoveryComponent* GetFogOfDiscoveryComponent() const;
    
    UFUNCTION(BlueprintPure)
    UDiscoveryComponent* GetDiscoveryComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerClassIdentifier* GetCurrentPlayerClass() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLostLootCount();
    
    UFUNCTION(BlueprintPure)
    AAdvancedInteractiveObject* GetCurrentAIO() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCostToReRollInventoryForNewPart(AActor* InventoryActor) const;
    
    UFUNCTION(BlueprintCallable)
    void EnterPhotoMode();
    
    UFUNCTION()
    void EnsureValidSpectatorTarget();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DisplayRolloutNotification(const FText& Title, const FText& MESSAGE, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void DisplayHUDErrorNotification(const FText MESSAGE);
    
    UFUNCTION(Exec)
    bool DebugLoadGame(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void CreatePlayerAlert();
    
    UFUNCTION(Client, Reliable)
    void ClientVehicleUnlock(FSoftObjectPath Vehicle);
    
    UFUNCTION(Client, Reliable)
    void ClientVehicleSpawned(UObject* CarMenuInterface, ACatchARidePlatform* Platform, AOakVehicle* Vehicle);
    
    UFUNCTION(Client, Reliable)
    void ClientVehiclePartUnlock(FSoftObjectPath Part);
    
    UFUNCTION(Client, Reliable)
    void ClientVaultCardChestNoReward(uint32 VaultCardID);
    
    UFUNCTION(Client, Reliable)
    void ClientVaultCardChestInventoryReward(uint32 VaultCardID, AActor* InventoryActor, FInventoryReplicationData InventoryData);
    
    UFUNCTION(Client, Reliable)
    void ClientVaultCardChestCurrencyReward(uint32 VaultCardID, UInventoryCategoryData* CurrencyCategory, int32 Amount);
    
    UFUNCTION(Client, Reliable)
    void ClientUseClientSideCameraUpdates(bool bEnabled);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockInventoryCustomizationPart(UOakInventoryCustomizationPartData* CustomizationToUnlock);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientUnlockEchoLog(UEchoLogData* EchoLog);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientUnlockCustomization(UOakCustomizationData* CustomizationToUnlock);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockCrewQuartersRoom(UCrewQuartersRoomItemData* RoomToUnlock);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockCrewQuartersDecoration(UCrewQuartersDecorationItemData* DecorationToUnlock);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockAllVehiclesAndParts();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopWeatherEffects();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartWeatherEffects(const UWeatherTemplate* Template);
    
    UFUNCTION(Client, Reliable)
    void ClientStartOnlineSessionInProgress();
    
    UFUNCTION(Client, Reliable)
    void ClientStartCameraFadeAuthoritative(float FromAlpha, float ToAlpha, float Duration, FColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(Client, Reliable)
    void ClientShowPlaceObjectsMenu(UGbxMenuData* MenuData, ACrewQuartersRoom* InRoom, UObject* InIO);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowMayhemMenu();
    
    UFUNCTION(Client, Reliable)
    void ClientShowGamerCardUI(APlayerState* RequesteePS);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowFastTravelMenu();
    
    UFUNCTION(Client, Reliable)
    void ClientShowCrewQuartersMoodMenu(UGbxMenuData* MenuData, ACrewQuartersRoom* InRoom);
    
    UFUNCTION(Client, Reliable)
    void ClientShowAllPlayersRequiredMessage(bool bIsAlreadyPresentInArea);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSessionInviteFlags(bool bAllowInvites, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly);
    
    UFUNCTION(Client, Reliable)
    void ClientSetMenuStackHidden(bool bInStackHidden);
    
    UFUNCTION(Client, Reliable)
    void ClientSetHasSeenFastTravelPrompt(bool HasSeen);
    
    UFUNCTION(Client, Reliable)
    void ClientSetCustomViewportViewFlags(int32 ViewFlags, bool bEnabled);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSetCurrentAIO(AAdvancedInteractiveObject* NewAIO, bool bInstant);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetBoundaryWarningState(bool bWarningActive);
    
    UFUNCTION(Client, Reliable)
    void ClientSelectGearSoldByFriendData();
    
    UFUNCTION(Client, Reliable)
    void ClientResetRegionStage(URegionData* REGION);
    
    UFUNCTION(Client, Reliable)
    void ClientRequestVehicleSeatSwap(AOakVehicle* VehicleFrom, int32 FromSeat, int32 ToSeat);
    
    UFUNCTION(Client, Reliable)
    void ClientRemoveTutorialMessage(UTutorialMessageDataAsset* MessageData);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPushHUDState(UCinematicModeData* InCinematicMode);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientProcessLostLoot(UOakLostLootComponent* LostLootComponent);
    
    UFUNCTION(Client, Reliable)
    void ClientPostChallengeUnlockActivityFeed(UActivityFeedReward* FeedData, int32 ChallengeLevelTargetValue, int32 ChallengeLevelCompleted);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlayLocalCallout(UDialogEvent* CalloutEvent);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerSelectedCharacter(const FUniqueNetIdRepl& TargetPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerJoinedPresenceSession(const FUniqueNetIdRepl& JoinedPlayerId, const FString& SessionId);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlayerDisplayDataChanged(AOakPlayerState* InPlayerState);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayAndTrackEchoLog(UEchoLogData* EchoLog, UGbxDialogComponent* PlayOnSpeaker);
    
    UFUNCTION(Client, Reliable)
    void ClientPartyKick(EKickReason Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenMenu(UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenItemInspect(AOakInventoryItemPickup* Item, UInventoryData* InventoryData);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientOnHandleNewPlayer();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientNotifyVaultCardGearRewardRedeemed(uint32 VaultCardID, int32 GearIndex);
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyNewGameStarted();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyLoadPlayerClass(UPlayerClassIdentifier* NewPlayerClass);
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyKilledActor();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyClassSwitch(UPlayerClassIdentifier* NewPlayerClass);
    
    UFUNCTION(Client, Reliable)
    void ClientMissionVehicleSpawned(ACatchARidePlatform* Platform, AOakVehicle* Vehicle);
    
    UFUNCTION(Client, Reliable)
    void ClientLostLootSpawned(const FString& GearSerialNumber);
    
    UFUNCTION(Client, Reliable)
    void ClientJoinPresenceSession(const FString& SessionId);
    
    UFUNCTION(Client, Reliable)
    void ClientInitializeLostLootMachine(AActor* Actor);
    
    UFUNCTION(Client, Reliable)
    void ClientGotoPreviousState();
    
    UFUNCTION(Client, Reliable)
    void ClientGoToHUDState(const UGbxHUDStateData* State);
    
    UFUNCTION(Client, Reliable)
    void ClientDoLateJoinFadeIn();
    
    UFUNCTION(Client, Reliable)
    void ClientDisplayTravelFailureMessage(const EPOIActivationResult& TravelFailureMessage, AOakPlayerState* BlockerPlayerState);
    
    UFUNCTION(Client, Reliable)
    void ClientDisplaySentTradeOffer(bool Success, AOakPlayerState* PlayerReceivingTradeOffer);
    
    UFUNCTION(Client, Reliable)
    void ClientDisplayPendingTradeOffer(AOakPlayerState* PlayerOfferingTradeState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDisplayHUDErrorNotification(const FText& MESSAGE);
    
    UFUNCTION(Client, Reliable)
    void ClientCreatePresenceSession(const FString& SparkFriendPasscode);
    
    UFUNCTION(Client, Reliable)
    void ClientCreatePlayerAlert(const FUniqueNetIdRepl& InInstigator, AActor* InTargetedActor, FVector InAlertLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCloseMenu(UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCloseAllMenus();
    
    UFUNCTION(Client, Reliable)
    void ClientClearToDefaultHUDState();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearMenus();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCleanCinematicState(UCinematicModeData* InCinematicMode);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientCancelCameraFadeAuthoritative();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastSlotMachineJackpotFriendEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOpenedGoldenChestFriendEvent();
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcastFriendGearPurchasedFriendEvent();
    
    UFUNCTION(Client, Reliable)
    void ClientApplyCachedSaveGame(float OptionalFadeOutDuration);
    
    UFUNCTION(Client, Reliable)
    void ClientAddTutorialMessage(UTutorialMessageDataAsset* MessageData);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientAddPremiumCurrency(int32 Amount, UGbxInventoryCategoryData* CurrencyType);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientAddModalTutorialMessage(UGFxModalTutorialDataAsset* MessageData);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_NotifyCombatEncounterEnded(const FPlayerCombatEncounterData& CombatEncounterData) const;
    
public:
    UFUNCTION(Exec)
    void ClearSavegame();
    
    UFUNCTION()
    void CheckDebugMenuIsOpen(bool bIsBeingDestroyed);
    
    UFUNCTION()
    void ChallengesRegistered();
    
    UFUNCTION(BlueprintPure)
    ECanReRollInventoryResult CanReRollInventoryForNewPart(AActor* InventoryActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanOpenStatusMenu(FText& Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void CancelReRolledInventory();
    
    UFUNCTION()
    void BroadcastGearSoldByMe(bool bOverrideDelay);
    
private:
    UFUNCTION()
    void AttemptSpottedEnemyCalloutForTargetPerceptionChange(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddUnlockedInventoryCustomizationPart(UOakInventoryCustomizationPartData* CustomizationToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedCustomization(UOakCustomizationData* CustomizationToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedCrewQuartersRoom(UCrewQuartersRoomItemData* RoomToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedCrewQuartersDecoration(UCrewQuartersDecorationItemData* DecorationToAdd);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddNPCMailItemFromTableRowHandle(const FDataTableRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddNPCMailItemFromTableRow(const FOakNPCMailDataEntry& NPCMailData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AcceptReRolledInventory();
    
    
    // Fix for true pure virtual functions not being implemented
};

