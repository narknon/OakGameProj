#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakCharacter_Default.h"
#include "EDuelClassification.h"
#include "EDuelLoseReason.h"
#include "UObject/NoExportTypes.h"
#include "VaultRewardReceivedDelegate.h"
#include "OnPlayerTossedGrenadeSignatureDelegate.h"
#include "OnPlayerCrouchEventSignatureDelegate.h"
#include "TakeAnyPipelineDamageDelegateDelegate.h"
#include "InventorySlotContainer.h"
#include "GrenadeThrowFailedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "PlayerEchoDeviceState.h"
#include "OakSDUContainer.h"
#include "ReplicatedPlayerEchoDeviceState.h"
#include "EVaultRewardType.h"
#include "ResourceLock.h"
#include "PlayerPainSoundData.h"
#include "WeaponSlotContainer.h"
#include "EWeaponEquipType.h"
#include "HitFriendlyEventDetails.h"
#include "OakCharacter_Player.generated.h"

class AEchoDevice;
class AOakCharacter_Player;
class UParticleSystem;
class APhotoModeController;
class UGFxPhotoModeMenu;
class UOakCustomizationComponent;
class AActor;
class UFeedbackData;
class UWwiseEvent;
class UOakHUDSkillIconWidget;
class UGbxAction;
class UGameResourceData;
class UOakCustomizationData;
class AOakPlayerController;
class UGbxCustomizationTypeData;
class UGFxSkillScreenTree;
class UInventorySlotData;
class UEchoLogData;
class UPlayerBalanceStateComponent;
class UGbxAttributeData;
class UHavokNavObstacleComponent;
class UOakPlayerAbilityManagerComponent;
class UCapsuleComponent;
class AGrenade;
class UOakSDUData;
class UOakActionAbility;
class AOakCharacter;
class UInventoryCategoryData;

UCLASS()
class OAKGAME_API AOakCharacter_Player : public AOakCharacter_Default {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWonDuelDelegate, EDuelClassification, Classification);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDuelDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLostDuelDelegate, EDuelLoseReason, LoseReason, EDuelClassification, Classification);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDuelInstigatorDelegate, AOakCharacter_Player*, Other);
    
    UPROPERTY(ReplicatedUsing=OnRep_bSanctuaryZeroGravity)
    bool bSanctuaryZeroGravity;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ConnectEffectTemplate;
    
    UPROPERTY(EditAnywhere)
    FName ConnectEffectBoneName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DisconnectEffectTemplate;
    
    UPROPERTY(EditAnywhere)
    FName DisconnectEffectBoneName;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate DuelInitatedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate DuelTimedOutEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDuelInstigatorDelegate DuelMeleeInstigatedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDuelInstigatorDelegate AcceptedCompetitorDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDuelInstigatorDelegate UnacceptedCompetitorDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDuelInstigatorDelegate CompetitorAcceptedDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDuelInstigatorDelegate CompetitorUnacceptedDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate StartedDuelSetupEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate StartedDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FLostDuelDelegate LostDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FWonDuelDelegate WonDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate TimeElapsedDuelEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDuelDelegate DuelCanceledEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    APhotoModeController* PhotoModeController;
    
    UPROPERTY()
    UGFxPhotoModeMenu* PhotoModeView;
    
    UPROPERTY(Transient)
    FVector AdditionalInput;
    
    UPROPERTY(Transient)
    float AdditionalRoll;
    
private:
    UPROPERTY(Transient)
    bool bIsRaidSpectating;
    
protected:
    UPROPERTY(Replicated, Transient)
    uint8 bHasMenuOpen_Replicated: 1;
    
public:
    UPROPERTY(BlueprintAssignable)
    FVaultRewardReceived OnVaultRewardReceived;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerCrouchEventSignature PlayerCrouchStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerCrouchEventSignature PlayerCrouchEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerTossedGrenadeSignature GrenadeTossed;
    
    UPROPERTY(BlueprintAssignable)
    FTakeAnyPipelineDamageDelegate OnAlliedPlayerTookDamage;
    
    UPROPERTY(BlueprintAssignable)
    FGrenadeThrowFailed GrenadeThrowFailed;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bInterruptFriendlyTargeting;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bIsWeaponLowered;
    
    UPROPERTY(EditAnywhere)
    float FriendlyTargetRange;
    
    UPROPERTY(EditAnywhere)
    float WeaponLowerDelay;
    
    UPROPERTY(EditAnywhere)
    float WeaponRaiseDelay;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* FriendlyTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FName LadderCameraMode;
    
    UPROPERTY(EditDefaultsOnly)
    float LadderCameraBlendOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UFeedbackData* LadderSlidingFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    UFeedbackData* LadderSlideLandingFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* LadderSlideAudioLoop;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction> GrenadeThrowAction;
    
    UPROPERTY(EditDefaultsOnly)
    float GrenadeThrowCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* GrenadeResource;
    
    UPROPERTY(Transient)
    TArray<UOakCustomizationData*> EquippedEmotes;
    
public:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<TSoftObjectPtr<UOakCustomizationData>> DefaultEmotes;
    
    UPROPERTY(EditDefaultsOnly)
    FPlayerEchoDeviceState EchoDeviceState;
    
    UPROPERTY(Replicated, Transient)
    FOakSDUContainer PlayerSDUs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxCustomizationTypeData* HeadCustomizationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxCustomizationTypeData* BodyCustomizationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxCustomizationTypeData* SkinCustomizationType;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(EditAnywhere)
    FString CharacterIconFrameName;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGFxSkillScreenTree> SkillTreeSubMenuClass;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EchoDeviceRepState)
    FReplicatedPlayerEchoDeviceState EchoDeviceRepState;
    
    UPROPERTY(Transient)
    UEchoLogData* PendingInsertPlayEchoLog;
    
private:
    UPROPERTY(Export, Transient)
    UPlayerBalanceStateComponent* PlayerBalanceComponent;
    
    UPROPERTY(Export, Transient)
    UHavokNavObstacleComponent* HavokNavObstacleComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UOakPlayerAbilityManagerComponent* PlayerAbilityManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* FFYLCapsuleComponent;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat AmmoRegenRate;
    
    UPROPERTY(Replicated, Transient)
    FResourceLock GrenadeFFYLRestrictionLock;
    
    UPROPERTY(Replicated, Transient)
    uint8 ClientWeaponsRestrictedRestoreSlots;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPlayerPainSoundData> PlayerPainSounds;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintExhaustionStartThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintExhaustionStopThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOakHUDSkillIconWidget> HUDSkillIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTired;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCustomizationData> DefaultHeadCustomization;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCustomizationData> DefaultBodyCustomization;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCustomizationData> DefaultSkinCustomization;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bUsesSecondaryActionSkill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bUsesActionSkillHoldOverrideAction;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OakPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UOakHUDSkillIconWidget* HUDSkillIconWidget;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* GrenadeAmmoAttribute;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bCanWeaponZoomWhileInjured;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> TeleportAction;
    
    UPROPERTY(Replicated, Transient)
    FInventorySlotContainer EquippedInventoryForSaveGame;
    
    UPROPERTY(Replicated, Transient)
    FWeaponSlotContainer ActiveWeaponsForSaveGame;
    
    AOakCharacter_Player();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void UpdateFriendStatusSystemOfInventoryChange(AActor* InInventory, UInventorySlotData* SlotData);
    
    UFUNCTION(BlueprintCallable)
    void UnlockPlayerFFYLGrenadeRestriction(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void UnequipEchoDevice(bool bInstant, FName Reason, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    bool TryThrowGrenade();
    
    UFUNCTION(BlueprintCallable)
    void TickFriendlyTarget(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    AGrenade* SpawnAndThrowGrenade();
    
    UFUNCTION(BlueprintCallable)
    AGrenade* SpawnAmmoOptionalGrenadeFromSource(AActor* SourceActor, bool bUseAmmo, FName ThrowSocketName);
    
    UFUNCTION(BlueprintCallable)
    AGrenade* SpawnAmmoOptionalGrenade(bool bUseAmmo);
    
    UFUNCTION(NetMulticast, Reliable)
    void ShowDisconnectEffect();
    
    UFUNCTION(NetMulticast, Reliable)
    void ShowConnectEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetFriendlyTarget(AActor* NewFriendly);
    
    UFUNCTION(BlueprintCallable)
    void SetEchoDeviceIdleScreen(FName NewScreenName);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnequipEchoDevice(bool bInstant);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryThrowGrenade();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryInitiateDuel();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryExitPhotoMode();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTryEnterPhotoMode();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetHasMenuOpen(bool bNewValue);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetEquippedEmote(uint32 Slot, UOakCustomizationData* EmoteData);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayTeleportEffectsOnly();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayEchoDeviceScreen(FName NewScreenName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyPhotoModeFailed();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerInterruptEmote();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEquipEchoDevice(EWeaponEquipType EquipType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResumeFriendlyTargeting();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void PlayEquippedEmote(uint32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void PlayEchoDeviceScreen(FName NewScreenName);
    
private:
    UFUNCTION()
    void OnStartDead();
    
public:
    UFUNCTION()
    void OnSDUListUpdated(UOakSDUData* InSDUData, int32 InSDULevel);
    
private:
    UFUNCTION()
    void OnRep_EchoDeviceRepState();
    
public:
    UFUNCTION()
    void OnRep_bSanctuaryZeroGravity();
    
private:
    UFUNCTION()
    void OnMaxHealthChanged(float OldValue, float NewValue);
    
protected:
    UFUNCTION()
    void OnLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKilledHostile();
    
public:
    UFUNCTION()
    void OnCinematicStopped_RetryTeleportEffects();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPickedUpEchoDeviceLog(AActor* EchoActor);
    
    UFUNCTION()
    void NotifyHitFriendly(const FHitFriendlyEventDetails& Details);
    
    UFUNCTION()
    void NotifyEchoPutDownFinished();
    
    UFUNCTION()
    void NotifyEchoEquipFinished();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayEchoDeviceInsert(TSubclassOf<UGbxAction> InsertAction, UEchoLogData* EchoLogData);
    
    UFUNCTION(BlueprintCallable)
    void LockPlayerFFYLGrenadeRestriction(FName Reason);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingEmote() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptFriendlyTargeting();
    
    UFUNCTION(BlueprintCallable)
    void InterruptEmote();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void InterruptAndPlayNewEmote(UOakCustomizationData* EmoteData);
    
    UFUNCTION(BlueprintCallable)
    bool HasProjectedShield();
    
    UFUNCTION(BlueprintPure)
    bool HasEnoughAmmoToThrowGrenade() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UOakActionAbility* GetSecondaryActionAbility() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSDULevel(UOakSDUData* InSDUData);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UOakActionAbility* GetPrimaryActionAbility() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    AOakCharacter* GetPet() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextSDULevelInfo(UOakSDUData* InSDUData, int32& NextSDULevel, int32& OutSDUPrice, UInventoryCategoryData*& OutPriceCurrenty, float& ModifyAmount);
    
    UFUNCTION(BlueprintPure)
    AEchoDevice* GetEchoDevice() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteTeleport();
    
    UFUNCTION(BlueprintCallable)
    void EquipEchoDevice(EWeaponEquipType EquipType, FName Reason, bool bOutsideOfMenu, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void EnableComboGuardianRankPerk(float DamageBonusPerShot, float Duration, int32 MaxStacks);
    
    UFUNCTION(BlueprintCallable)
    void DisableComboGuardianRankPerk();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientNotifyVaultRewardGiven(EVaultRewardType VaultRewardType);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientExitPhotoMode();
    
    UFUNCTION(Client, Reliable)
    void ClientEnterPhotoMode();
    
    UFUNCTION(BlueprintPure)
    bool CanStartThrowingGrenade() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCurrentlyThrowGrenades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNotify_SpawnGrenade();
    
    UFUNCTION(BlueprintCallable)
    void AddSDU(UOakSDUData* InSDUData);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    UOakHUDSkillIconWidget* AddHUDSkillIconWidget();
    
};

