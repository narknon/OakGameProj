#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxHUD.h"
#include "OakHUDNotificationDelegateDelegate.h"
#include "MissionIconObserverInterface.h"
#include "UObject/NoExportTypes.h"
#include "ETrackedIconOwner.h"
#include "OakHUDGameModeNotificationDelegateDelegate.h"
#include "OakHUDErrorNotificationDelegateDelegate.h"
#include "OakHUDSimpleDelegateDelegate.h"
#include "EHUDInitializationAnimationSet.h"
#include "EVaultRewardType.h"
#include "OakHUD.generated.h"

class UGFxChallengeProgressWidget;
class AOakPlayerController;
class UGFxMinimapWidget;
class UGFxHUDInitializationMovie;
class APawn;
class UGFxActionSkillWidget;
class UGFxBossBar;
class UHUDNotificationAsset;
class UGFxTutorialMessageWidget;
class UFont;
class UGbxGFxHUDWidget;
class UGFxHealthBar;
class UGFxExperienceBar;
class UGFxInWorldIconContainer;
class UGFxAmmoBar;
class UGFxShieldBar;
class UGFxMissionTrackerHUDWidget;
class UGFxGrenadeWidget;
class UGbxHUDStateData;
class UGameInstance;
class AWeapon;
class UOakPlayerAbilitySlotData;
class UWwiseEvent;
class UGbxInventoryCategoryData;
class UGbxAbility;

UCLASS(NonTransient)
class OAKGAME_API AOakHUD : public AGbxHUD, public IMissionIconObserverInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHUDPawnChanged, APawn*, NewPawn, APawn*, OldPawn);
    
protected:
    UPROPERTY(Transient)
    AOakPlayerController* OakPlayerOwner;
    
    UPROPERTY(Transient)
    float DeathFadeToBlackTime;
    
    UPROPERTY(Transient)
    float TimeSinceDeath;
    
    UPROPERTY(Transient)
    TArray<UGFxActionSkillWidget*> AvailableActionSkillWidgets;
    
    UPROPERTY(Transient)
    UGFxChallengeProgressWidget* ChallengeProgressWidget;
    
    UPROPERTY(Transient)
    UGFxTutorialMessageWidget* TutorialMessageWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxHUDInitializationMovie> HUDInitializationMovie;
    
    UPROPERTY(Transient)
    TMap<FGuid, ETrackedIconOwner> TrackedIconAndOwningWidgetMapping;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGbxGFxHUDWidget>> ContextSensitivePromptOrder;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxHUDWidget*> AvailableContextSensitivePromptWidgets;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UHUDNotificationAsset> VaultCardLevelUpNotificationAsset;
    
public:
    UPROPERTY(Transient)
    UFont* CutsceneSkipFont;
    
    UPROPERTY(Transient)
    UGFxBossBar* GFxBossBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxHealthBar> CachedHealthBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxExperienceBar> CachedExperienceBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxMinimapWidget> CachedMinimap;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxInWorldIconContainer> CachedInWorldIconWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxAmmoBar> CachedAmmoBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxShieldBar> CachedShieldBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxMissionTrackerHUDWidget> CachedMissionTrackerWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxGrenadeWidget> CachedGrenadeWidget;
    
    UPROPERTY(Transient)
    FOakHUDNotificationDelegate OnHUDNotification;
    
    UPROPERTY(Transient)
    FOakHUDGameModeNotificationDelegate OnHUDNotificationWithId;
    
    UPROPERTY(Transient)
    FOakHUDErrorNotificationDelegate OnHUDErrorNotification;
    
    UPROPERTY(Transient)
    FOakHUDSimpleDelegate OnActivateCheckpoint;
    
    UPROPERTY(Transient)
    bool bSuppressAllNotifications;
    
    UPROPERTY(VisibleAnywhere)
    bool bListenForDisplayedNotificationMenu;
    
    UPROPERTY(BlueprintAssignable)
    FOnHUDPawnChanged OnHUDPawnChanged;
    
private:
    UPROPERTY(Transient)
    TArray<EHUDInitializationAnimationSet> AnimWidgetTargetQueue;
    
public:
    AOakHUD();
    UFUNCTION(BlueprintCallable)
    void TriggerContextualPrompt();
    
protected:
    UFUNCTION()
    void StateChanged(const UGbxHUDStateData* OldState, const UGbxHUDStateData* NewState);
    
public:
    UFUNCTION(Exec)
    void SetWeaponAsDebugTarget(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetHUDVisible(AOakPlayerController* OakPlayerController, bool bVisible);
    
    UFUNCTION()
    void RegisterGFxBossBar(const UGFxBossBar* NewBossBar);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopCurrentHUDStateForAllPlayers(UGameInstance* GameInstance);
    
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon);
    
    UFUNCTION()
    void OnVaultRewardReceived(EVaultRewardType VaultRewardType);
    
    UFUNCTION()
    void OnPlayerAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData);
    
    UFUNCTION()
    void OnFFYLStopped();
    
    UFUNCTION()
    void OnAreaEntered(FText DisplayText, UWwiseEvent* DiscoverySound);
    
    UFUNCTION()
    void OnAreaDiscovered(FText DisplayText, UWwiseEvent* DiscoverySound);
    
    UFUNCTION()
    void OnAbilityRemoved(UGbxAbility* Ability);
    
    UFUNCTION()
    void OnAbilityAdded(UGbxAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void LoadDisplayedNotificationMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsContextSensitivePromptActive();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GotoHUDStateForAllPlayers(UGameInstance* GameInstance, UGbxHUDStateData* State, bool bSetForLateJoin);
    
    UFUNCTION(BlueprintCallable)
    void DisplayRolloutNotification(const FText& Title, const FText& MESSAGE, float Duration);
    
    UFUNCTION()
    void DisplayNotificationWithId(UHUDNotificationAsset* Asset, const uint8 RaidNotificationId, const FText MessageText, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately, bool bAbortIfNotImmediatelyActive);
    
    UFUNCTION()
    void DisplayNotification(UHUDNotificationAsset* Asset, const FText MessageText, const int32 NotificationPriority, UClass* TracketNotificationTarget, bool bMakeActiveImmediately);
    
    UFUNCTION()
    void DisplayErrorNotification(const FText MessageText);
    
    UFUNCTION()
    void DisplayCurrencyWidget(UGbxInventoryCategoryData* CurrencyType);
    
    UFUNCTION(Exec)
    void DebugShowNotification(const FString& NotificationType, const FString& Text);
    
    UFUNCTION()
    void ClearNotifications();
    
    UFUNCTION(BlueprintCallable)
    void BeginContextSensitivePromptHeld();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void AbortContextSensitivePromptHeld();
    
    
    // Fix for true pure virtual functions not being implemented
};

