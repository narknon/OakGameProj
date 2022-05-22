#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGameInstance.h"
#include "MissionObserverInterface.h"
#include "DevMapToMapId.h"
#include "PlayerClassToClassId.h"
#include "ConditionalSavegameExpression.h"
#include "LootAudioStinger.h"
#include "GbxMenuInputEvent.h"
#include "OakGameInstance.generated.h"

class UOakManagedActorDefinition;
class UOakUIControllerDisconnectManager;
class UOakSingletons;
class UGbxMenuInput;
class UGFxPCTextChatBuffer;
class UGbxGFxMenu;
class UOakManagedActorManager;
class UPlayerClassIdentifier;
class UWwiseEvent;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;
class UGbxDialogComponent;
class UOakDialogSystemCustomization;
class UMatchmakingTest;
class UOakOnlineStatsHelper;
class UOakModifierManager;
class AActor;
class UOakDiscordManager;
class UGbxMenuData;
class UObject;
class UEchoLogData;
class URegionData;
class UGbxGFxDialogBox;
class AOakInventoryItemPickup;

UCLASS(NonTransient)
class OAKGAME_API UOakGameInstance : public UGbxGameInstance, public IMissionObserverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UOakSingletons* OakSingletons;
    
    UPROPERTY(Transient)
    UGbxMenuInput* GbxMenuInput;
    
    UPROPERTY(Transient)
    UOakUIControllerDisconnectManager* UIControllerDisconnectManager;
    
    UPROPERTY(Transient)
    UGFxPCTextChatBuffer* PCTextChatBuffer;
    
    UPROPERTY()
    TArray<UGbxGFxMenu*> AlwaysLoadedMenuInstances;
    
    UPROPERTY(Config)
    TArray<FDevMapToMapId> DevMapToMapIds;
    
    UPROPERTY(Config)
    TArray<FPlayerClassToClassId> PlayerClassToClassIds;
    
public:
    UPROPERTY(Config)
    float LoadingScreenFadeTime;
    
private:
    UPROPERTY(Transient)
    TArray<UPlayerClassIdentifier*> AllPlayerClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalSavegameExpression> DefaultSaveGameEvaluator;
    
    UPROPERTY(Config)
    FString LobbyBeaconTemplateName;
    
    UPROPERTY(Config)
    FString MatchmakingBeaconTemplateName;
    
    UPROPERTY(Config)
    FName FallbackLaunchSaveGameMapName;
    
    UPROPERTY(Config)
    bool bHideShiftUsersWhenCrossplayIsToggledOff;
    
    UPROPERTY(Config)
    bool bRestrictShiftSessionInvitesWhenCrossplayIsToggledOff;
    
    UPROPERTY(Config)
    bool bRestrictCrossPlatformJoinsWhenCrossplayIsToggledOff;
    
    UPROPERTY()
    UOakManagedActorManager* ManagedActorManager;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<INameplateInfoProviderInterface>> PlayerTargetables;
    
    UPROPERTY(Config)
    bool bIsPlayerVersusPlayerCollisionEnabled;
    
    UPROPERTY(Transient)
    UOakDialogSystemCustomization* OakDialogSystemCustomization;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bHasSelectedInitialPlayer;
    
    UPROPERTY(Transient)
    UMatchmakingTest* MatchmakingTest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOakOnlineStatsHelper> OnlineStatsHelper;
    
    UPROPERTY(Transient)
    UOakOnlineStatsHelper* StatsHelperInst;
    
    UPROPERTY()
    TArray<UOakModifierManager*> ModifierManagers;
    
    UPROPERTY()
    UOakDiscordManager* DiscordManager;
    
    UPROPERTY(Config)
    float PresenceUpdateTimerSeconds;
    
    UPROPERTY(Config)
    bool bRefreshPresenceOnSessionUpdates;
    
    UPROPERTY(Transient)
    TArray<FLootAudioStinger> LootAudioStingers;
    
    UPROPERTY(Transient)
    float CooldownBeforeNextLootAudioStinger;
    
    UPROPERTY(Transient)
    TArray<UGbxMenuData*> TempMenuDataReferences;
    
public:
    UOakGameInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateMainMenuPlayerStandIns();
    
    UFUNCTION(BlueprintCallable)
    void StopMatchmakingTest();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmakingTest(TSubclassOf<UMatchmakingTest> InMatchmakingTest);
    
    UFUNCTION(BlueprintPure)
    static bool ShouldStartNewGameFlow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSplitscreenViewportEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPartyListenToECHOData(UEchoLogData* EchoLogData, UGbxDialogComponent* PlayOnSpeaker);
    
    UFUNCTION(BlueprintCallable)
    static void SendPlayerAreaObjectStartedEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ResetRegionStage(URegionData* REGION);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerAlert(AActor* TargetedActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveManagedActor(AActor* TheActor, bool bDestroyActor);
    
protected:
    UFUNCTION()
    void OnTrialErrorMessageClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION()
    void OnSplitscreenDialogDismissed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
protected:
    UFUNCTION()
    void OnShiftReportReasonSelected(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION()
    void OnRemoveShiftFriendConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnRemoveFriendConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
protected:
    UFUNCTION()
    void OnProfileErrorMessageClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION()
    void OnNATHelpChoiceMade(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnModalDialogChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
protected:
    UFUNCTION()
    void OnHandleUnpairedMenuInput(const FGbxMenuInputEvent& InputEvent);
    
    UFUNCTION()
    void OnControllerDisconnectClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnConfirmSplitscreenLeave(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION()
    void OnConfirmSignIntoAccount(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
protected:
    UFUNCTION()
    void OnConfirmMatchClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnConfirmKickPlayer(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnConfirmKickNetworkedPlayersForJoin(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnConfirmDisconnect(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnConfirmApplyMicropatches(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION()
    void OnBlockUserConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION(BlueprintPure)
    bool IsMenuLevel() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetManagedActorCount(UOakManagedActorDefinition* Type, AActor* TheOwner);
    
    UFUNCTION(Exec)
    void DebugSplitscreenLeave(uint32 ControllerId);
    
    UFUNCTION(Exec)
    void DebugSplitscreenJoin(uint32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void AddPickupAudioStinger(AOakInventoryItemPickup* Pickup, UWwiseEvent* Sound);
    
    UFUNCTION(BlueprintCallable)
    void AddPickupAudioCue(AActor* SoundActor, UWwiseEvent* Sound);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddManagedActor(AActor* TheActor, UOakManagedActorDefinition* Type, AActor* TheOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

