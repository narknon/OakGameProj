#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCharacter.h"
#include "InventoryOwnerInterface.h"
#include "CameraViewTargetInterface.h"
#include "GbxWeaponUserInterface.h"
#include "AudioParametersProviderInterface.h"
#include "NameplateInfoProviderInterface.h"
#include "HealthBarInfoProviderInterface.h"
#include "OakCoordinatedEffectSwitch.h"
#include "DialogSpeakerInterface.h"
#include "HUDDataProviderInterface.h"
#include "CorpseableInterface.h"
#include "PickupFlyToTargetInterface.h"
#include "ShieldProviderInterface.h"
#include "WeaponReloadEndedEventDelegate.h"
#include "StatusEffectEventProviderInterface.h"
#include "SpawnedActorInterface.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "ShieldUnequippedEventDelegate.h"
#include "GbxAttributeModifierHandle.h"
#include "PlayerAlertableInterface.h"
#include "ShieldEquippedEventDelegate.h"
#include "VehicleContactPtModifierInterface.h"
#include "EZoomEventType.h"
#include "InventoryItemPickUpEventDelegate.h"
#include "HealthDamagePassthroughInterface.h"
#include "WwiseImplementerInterface.h"
#include "EHealthState.h"
#include "StaticRagdollReplicationData.h"
#include "EDeathType.h"
#include "HealthBarEventDelegate.h"
#include "CharacterCorpseState.h"
#include "WeaponReloadStartedEventDelegate.h"
#include "WeaponSelfEventDelegate.h"
#include "InventoryUnequippedEventDelegate.h"
#include "ETargetedNameplateType.h"
#include "InventoryEquippedEventDelegate.h"
#include "CausedElementalEffectEventDelegate.h"
#include "CausedMaxResourceEffectEventDelegate.h"
#include "WeaponSlotContainer.h"
#include "HolsteredWeaponData.h"
#include "InventorySlotContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "InWorldIconEventDelegate.h"
#include "OakGenderData.h"
#include "EOakGender.h"
#include "OakCharacterCustomizationData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponPutDownType.h"
#include "EWeaponEquipType.h"
#include "SelectedInventoryInfo.h"
#include "InventoryListEntryHandle.h"
#include "HUDInWorldIconTargetInfo.h"
#include "HealthType.h"
#include "EAIDodgeType.h"
#include "EWeaponActionChannel.h"
#include "UObject/NoExportTypes.h"
#include "EValidIndex.h"
#include "EHealthAdded.h"
#include "ItemPoolInfo.h"
#include "OakCharacter.generated.h"

class AWeapon;
class UWadingEffectsComponent;
class UOakCharacterAbilityManagerComponent;
class UOakStatusEffectManagerComponent;
class UOakCharacterMovementComponent;
class AGbxAIController;
class UGameResourcePoolManagerComponent;
class UFightForYourLifeComponent;
class UOakInventoryBalanceStateComponent;
class UPawnAttachSlotComponent;
class UOakAIActionComponent;
class UOakDamageComponent;
class UOakDamageCauserComponent;
class UInventoryListComponent;
class UBodyWeaponHoldManagerComponent;
class UAIWeaponUserComponent;
class UAnimSequence;
class UTravelStationSpawnPointInterface;
class ITravelStationSpawnPointInterface;
class UCameraModeSetData;
class UPlayerStandInData;
class UBalanceStateComponent;
class USprintData;
class UGbxHUDData;
class AInteractiveObject;
class UInventoryBalanceData;
class UInventorySlotData;
class UWeaponSlotData;
class UInventoryCategoryData;
class AHolsteredGearSlot;
class AOakCharacter;
class USlideModifierAspectData;
class UGbxAction_CoordinatedEffect;
class UWwiseAudioComponent;
class UParticleSystem;
class UDamageSource;
class AActor;
class UActorComponent;
class UVehicleClassIdentifier;
class UVehicleSeatComponent;
class UAICloakComponent;
class AOakVehicle;
class UOakPawnAttachSlotComponent;
class UAIAction;
class UEnum;
class UWorld;
class UWeaponTrinketPartData;
class AInventoryItemPickup;
class UImpactData;
class UWwiseEvent;
class UCharacterSoundTag;
class UHealthTypeData;
class AOakPlayerController;
class AOakAIController;
class USkeletalMeshComponent;
class UAnimNotify;
class UGameResourcePoolData;
class UItemPoolListData;
class UItemPoolData;

UCLASS()
class OAKGAME_API AOakCharacter : public AGbxCharacter, public ICameraViewTargetInterface, public IInventoryOwnerInterface, public IGbxWeaponUserInterface, public IAudioParametersProviderInterface, public INameplateInfoProviderInterface, public IDialogSpeakerInterface, public IHealthBarInfoProviderInterface, public IHUDDataProviderInterface, public ICorpseableInterface, public IPickupFlyToTargetInterface, public IShieldProviderInterface, public IStatusEffectEventProviderInterface, public ISpawnedActorInterface, public IOakElementalEffectBucketProviderInterface, public IPlayerAlertableInterface, public IVehicleContactPtModifierInterface, public IHealthDamagePassthroughInterface, public IWwiseImplementerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoomEvent, EZoomEventType, IsZooming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponChangedEvent, AWeapon*, NewWeapon, AWeapon*, LastWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostLoadGameEvent, bool, SaveGameFound);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthStateChangeEvent, EHealthState, HealthState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGenericEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndCompareToEquippedItemEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompareToEquippedItemEvent, UOakInventoryBalanceStateComponent*, EquippedItem, UOakInventoryBalanceStateComponent*, OtherItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeSeat, const UPawnAttachSlotComponent*, FromSeat, const UPawnAttachSlotComponent*, ToSeat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttachDetachSeat, const UPawnAttachSlotComponent*, PawnAttachSlotComponent);
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxAIController* OwnerGbxAIController;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UOakAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakCharacterMovementComponent* OakCharacterMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGameResourcePoolManagerComponent* ResourcePoolComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* OakDamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageCauserComponent* OakDamageCauserComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOakCharacterAbilityManagerComponent* AbilityManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakStatusEffectManagerComponent* StatusEffectManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInventoryListComponent* OakCharacterInventory;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInventoryListComponent* OakCharacterBankInventory;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWadingEffectsComponent* WadingEffectsComponent;
    
    UPROPERTY(Export, Transient)
    UBodyWeaponHoldManagerComponent* CachedBodyWeaponHoldManager;
    
    UPROPERTY(Export, Transient)
    UAIWeaponUserComponent* AIWeaponUser;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_HealthState)
    EHealthState HealthState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EDeathType DeathType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    bool IsDeadAttached;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    bool bIsDeadInSeatedTurret;
    
    UPROPERTY(BlueprintAssignable)
    FHealthStateChangeEvent OnHealthStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthy;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthVeryLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnInjured;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnDead;
    
    UPROPERTY(EditAnywhere)
    bool CanGoToInjuredState;
    
    UPROPERTY(EditAnywhere)
    FCharacterCorpseState CorpseState;
    
    UPROPERTY(BlueprintAssignable)
    FZoomEvent OnZoomChange;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChangedEvent OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadStartedEvent OnWeaponReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadEndedEvent OnWeaponReloadEnded;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponSelfEvent OnWeaponUsed;
    
    UPROPERTY(BlueprintAssignable)
    FCompareToEquippedItemEvent OnCompareToEquippedItem;
    
    UPROPERTY(BlueprintAssignable)
    FEndCompareToEquippedItemEvent OnEndCompareToEquippedItem;
    
    UPROPERTY(BlueprintAssignable)
    FGenericEvent OnTransported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCameraModeSetData* CameraModesSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCameraModeSetData*> CameraModeSetList;
    
    UPROPERTY(Export, Transient)
    UBalanceStateComponent* BalanceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UFightForYourLifeComponent* FFYLComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USprintData* SprintInfo;
    
    UPROPERTY(BlueprintAssignable)
    FPostLoadGameEvent OnPostLoadGame;
    
    UPROPERTY(BlueprintReadWrite)
    bool bForcePenetrateOnSelf;
    
    UPROPERTY(EditAnywhere)
    ETargetedNameplateType DesiredNameplateType;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDData* HUDInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FName PlayerGivenNicknameKey;
    
    UPROPERTY(EditDefaultsOnly)
    UPlayerStandInData* StandInData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEligibleForIgnoreCollisionWithPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPushOverlappingPlayersAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bCanUseWeaponWhileSprinting;
    
    UPROPERTY(Transient)
    bool bAutoEquipWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIkOverride;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeRooted;
    
    UPROPERTY(Transient)
    TScriptInterface<ITravelStationSpawnPointInterface> LastSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    float MusicThreatValue;
    
    UPROPERTY(EditAnywhere)
    bool bCopyPlayerCustomizationsFromInstigator;
    
private:
    UPROPERTY(EditAnywhere)
    bool bUseCustomSlidingEyeHeight;
    
    UPROPERTY(EditAnywhere)
    float SlidingEyeHeight;
    
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> SprintingAttributeModifiers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DeadRagdollReplicationData)
    FStaticRagdollReplicationData DeadRagdollReplicationData;
    
public:
    UPROPERTY(BlueprintAssignable)
    FShieldEquippedEvent ShieldEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FShieldUnequippedEvent ShieldUnequipped;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bBlockVehicle;
    
    UPROPERTY(EditAnywhere)
    float VehicleCollisionResistanceFactor;
    
    UPROPERTY(EditAnywhere)
    float DamageToVehicleFactor;
    
public:
    UPROPERTY(BlueprintAssignable)
    FInventoryEquippedEvent OnInventoryEquippedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryUnequippedEvent OnInventoryUnequippedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemPickUpEvent OnInventoryItemPickedUp;
    
    UPROPERTY(BlueprintAssignable)
    FCausedElementalEffectEvent OnCausedElementalEffect;
    
    UPROPERTY(BlueprintAssignable)
    FCausedMaxResourceEffectEvent OnCausedMaxResourceEffect;
    
protected:
    UPROPERTY(Transient)
    TArray<AInteractiveObject*> AttachedHidableIOs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AWeapon> DefaultWeaponClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInventoryBalanceData* DefaultBalanceWeaponData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UInventorySlotData*> EquipmentSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UWeaponSlotData*> ActiveWeaponSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ActiveWeaponScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideBalanceInventory: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDiscardInventoryOnDeath: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bRebuildInventoryOnLevelChange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanShowHolsterableItemsOnBody: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HideWeaponOnSpawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHideWeaponOnSpawn: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FHolsteredWeaponData> WeaponHolsterData;
    
    UPROPERTY(Transient)
    UInventoryCategoryData* WeaponItemType;
    
    UPROPERTY(Transient)
    UInventoryCategoryData* CreditsItemType;
    
    UPROPERTY(Replicated, Transient)
    FInventorySlotContainer EquippedInventory;
    
    UPROPERTY(Transient)
    FWeaponSlotContainer ActiveWeapons;
    
    UPROPERTY(Transient)
    TArray<AHolsteredGearSlot*> HolsteredGear;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HolsteredWeapon)
    AWeapon* HolsteredWeapon;
    
    UPROPERTY(Transient)
    UInventorySlotData* PreferredHolsterWeaponSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat WeaponSwapTimeScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseAccuracyPattern;
    
    UPROPERTY(Replicated, Transient)
    bool bWeaponsRestricted;
    
    UPROPERTY(Replicated, Transient)
    AOakCharacter* InventoryProxy;
    
    UPROPERTY(Transient)
    USlideModifierAspectData* CurrentSlideModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float RecentlyEquippedWeaponInSprintTime;
    
    UPROPERTY(EditAnywhere)
    FName CameraSocket;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* BaseTransformsAnimation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Mech)
    AOakCharacter* Mech;
    
    UPROPERTY(ReplicatedUsing=OnRep_OverrideVisibleCorpseRemovalTime)
    float OverrideVisibleCorpseRemovalTime;
    
    UPROPERTY(Replicated)
    TSubclassOf<UGbxAction_CoordinatedEffect> CorpseRemovalActionOverride;
    
public:
    UPROPERTY(Transient)
    float AudioRandomVariationValue;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* CachedDefaultAudioComponent;
    
    UPROPERTY(BlueprintAssignable)
    FInWorldIconEvent AddInWorldIconEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInWorldIconEvent RemoveInWorldIconEvent;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> LastDamageSourceClass;
    
    UPROPERTY()
    AActor* KillerActor;
    
    UPROPERTY(Export, Transient)
    UActorComponent* CachedFaceFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanStomp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StompDivideModifier;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnEnterVehicleStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnEnterVehicleFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnExitVehicleStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnExitVehicleFinished;
    
    UPROPERTY(BlueprintAssignable)
    FChangeSeat OnChangeVehicleSeat;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnChangeVehicleSeatFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnEnterTurretStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnEnterTurretFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnExitTurretStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAttachDetachSeat OnExitTurretFinished;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UVehicleClassIdentifier* VehicleClassIDBeforeDeath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 VehicleSeatSlotBeforeDeath;
    
private:
    UPROPERTY(Export, Transient)
    UVehicleSeatComponent* LastVehicleSeat;
    
    UPROPERTY(Export, Transient)
    UVehicleSeatComponent* CurrentVehicleSeat;
    
    UPROPERTY(Transient)
    AOakVehicle* OwnedVehicle;
    
    UPROPERTY(Transient)
    AOakVehicle* CARVehicle;
    
    UPROPERTY(Export, Transient)
    UOakPawnAttachSlotComponent* LastTurretSeat;
    
    UPROPERTY(Export, Transient)
    UOakPawnAttachSlotComponent* CurrentTurretSeat;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOakGender Gender;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseGender;
    
private:
    UPROPERTY(EditAnywhere)
    FOakGenderData MaleGenderData;
    
    UPROPERTY(EditAnywhere)
    FOakGenderData FemaleGenderData;
    
    UPROPERTY(EditAnywhere)
    FOakCharacterCustomizationData CustomizationSettings;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Customization)
    int32 CustomizationSeed;
    
public:
    UPROPERTY(EditAnywhere)
    bool bUseSocketsForIconPlacement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIAction> MainAIAction;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_CoordinatedEffectSwitch)
    FOakCoordinatedEffectSwitch CoordinatedEffectSwitch;
    
    UPROPERTY(EditAnywhere)
    UEnum* AnimStyleEnum;
    
    UPROPERTY(EditAnywhere)
    uint8 AnimStyleInitial;
    
    UPROPERTY(Replicated, Transient)
    uint8 AnimStyleCurrent;
    
    UPROPERTY(Export, Transient)
    UAICloakComponent* CloakComp;
    
    AOakCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void WeaponReloadStarted(AWeapon* Weapon, bool bAuto);
    
    UFUNCTION()
    void WeaponReloadEnded(AWeapon* Weapon, bool bCompleted);
    
    UFUNCTION()
    void WeaponPutDown(AWeapon* PutDownWeapon);
    
public:
    UFUNCTION(BlueprintCallable)
    void WeaponPrev();
    
    UFUNCTION(BlueprintCallable)
    void WeaponNext();
    
protected:
    UFUNCTION()
    void WeaponEquipped();
    
public:
    UFUNCTION(BlueprintPure)
    bool WantsToZoom() const;
    
    UFUNCTION(BlueprintPure)
    bool WantsToUseWeapon(UWeaponSlotData* Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreToggleWeaponMode();
    
    UFUNCTION(BlueprintCallable)
    void UnlockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void TryDetachFromAttachSlot(bool bInstant);
    
    UFUNCTION(Client, Reliable)
    void TriggerResurrectEvent(int32 CashLost);
    
    UFUNCTION(BlueprintCallable)
    void ToggleWeaponMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFirstPersonClothSimulation(bool TurnOn);
    
    UFUNCTION(BlueprintCallable)
    void ToggleCrouch();
    
    UFUNCTION(NetMulticast, Reliable)
    void TeleportPawnAndAssociatedVehicle(FVector StartLoc, FRotator StartRot, bool bDisableClientCameraUpdates, bool bIsFastTravel);
    
    UFUNCTION(BlueprintCallable)
    void StopZooming(bool bForcedStop, bool bSkipTransitions);
    
    UFUNCTION(BlueprintCallable)
    void StopWantingToStartSprinting();
    
    UFUNCTION(BlueprintCallable)
    void StopUsingWeapon(UWeaponSlotData* SlotToUse);
    
    UFUNCTION(BlueprintCallable)
    void StopReload(UWeaponSlotData* SlotToUse);
    
    UFUNCTION(BlueprintCallable)
    void StartZooming();
    
    UFUNCTION(BlueprintCallable)
    void StartUsingWeapon(UWeaponSlotData* SlotToUse);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    AWeapon* SpawnDefaultWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWantsToSprint(bool bNewWantsToSprint);
    
    UFUNCTION(BlueprintCallable)
    void SetWantsToSlide(bool bNewWantsToSlide);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryProxy(AOakCharacter* Proxy);
    
    UFUNCTION(BlueprintCallable)
    void SetDead(EDeathType InDeathType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeapon(AWeapon* NewWeapon, UWeaponSlotData* NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentEquippedWeapon(UInventorySlotData* EquippedInventorySlot, UWeaponSlotData* NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType);
    
    UFUNCTION(BlueprintCallable)
    void SetCorpseRemovalOverride(float RemovelTime, TSubclassOf<UGbxAction_CoordinatedEffect> DissolveAction);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRooted(bool bRooted, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetCARVehicle(AOakVehicle* Vehicle);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnlockActiveWeaponActions(FName Reason, int32 ChannelsMask);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnequipInventorySlot(const UInventorySlotData* SlotToEquip);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopWeaponActions(uint8 Slot, int32 ChannelsMask, bool bClearInput);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnDroppedPickup(const FSelectedInventoryInfo& SelectedInventoryInfo, UWorld* World, const FVector& Location, const FVector& LinearVelocity, const FVector& AngularVelocity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetEquippedTrinket(UInventorySlotData* SlotToEquip, UWeaponTrinketPartData* Trinket);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCurrentWeapon(AWeapon* NewWeapon, uint8 Slot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSelectInventoryItem(const UInventoryCategoryData* SelectedCategory, const FInventoryListEntryHandle& SelectedHandle);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEquipInventorySlot(const UInventorySlotData* SlotToEquip, const FInventoryListEntryHandle& SelectedHandle, bool bSwapSlots);
    
    UFUNCTION(BlueprintCallable)
    void SafeRemoveCorpse();
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReplaceInventoryItem(AActor* OldInventoryItem, AActor* NewInventoryItem);
    
    UFUNCTION()
    void RemovingFromInventory(const UInventoryCategoryData* RemovedCategory, AActor* RemovedActor, const FInventoryListEntryHandle& RemovedHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInWorldIcon(const FHUDInWorldIconTargetInfo& TargetInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInventoryItem(const FInventoryListEntryHandle& SelectedHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveHealthTypeAtIndex(int32 Index, FHealthType& ReturnType);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reload(UWeaponSlotData* SlotToUse, bool bAutoReload);
    
    UFUNCTION()
    void RebuildInventory();
    
    UFUNCTION(BlueprintNativeEvent)
    bool PreInventoryItemPickupCheck(AActor* PickupActor, int32 Quantity, bool UsedByInstigator, AInventoryItemPickup* WorldPickupActor);
    
    UFUNCTION()
    void PreAddToFullInventory(const UInventoryCategoryData* Category, AActor* NewActor, int32 Flags, int32 DesiredSlot);
    
    UFUNCTION(BlueprintCallable)
    void PerformMeleeImpact(float MeleeRange, UImpactData* ImpactData);
    
    UFUNCTION()
    void OnZoomedNotifyActions(EZoomEventType IsZooming);
    
    UFUNCTION()
    void OnWeaponResumeUse(UWeaponSlotData* AttachedSlot);
    
    UFUNCTION()
    void OnTrinketUnequippedFromSlot(UWeaponTrinketPartData* InUnequippedTrinket, UInventorySlotData* SlotData);
    
    UFUNCTION()
    void OnTrinketEquippedOnSlot(UWeaponTrinketPartData* InEquippedTrinket, UInventorySlotData* SlotData);
    
    UFUNCTION()
    void OnStartSprinting();
    
protected:
    UFUNCTION()
    void OnRep_OverrideVisibleCorpseRemovalTime();
    
    UFUNCTION()
    void OnRep_Mech();
    
    UFUNCTION()
    void OnRep_HolsteredWeapon();
    
public:
    UFUNCTION()
    void OnRep_HealthState();
    
private:
    UFUNCTION()
    void OnRep_DeadRagdollReplicationData();
    
    UFUNCTION()
    void OnRep_Customization();
    
public:
    UFUNCTION()
    void OnRep_CoordinatedEffectSwitch();
    
protected:
    UFUNCTION()
    void OnRecentlyEquippedWeaponInSprintTimerEnd();
    
public:
    UFUNCTION()
    void OnInventoryUnequippedFromSlot(AActor* InUnequippedInventory, UInventorySlotData* SlotData);
    
protected:
    UFUNCTION()
    void OnInventoryItemReplaced(const FInventoryListEntryHandle& UpdatedItemHandle, AActor* OldInventoryActor);
    
public:
    UFUNCTION()
    void OnInventoryEquippedOnSlot(AActor* InEquippedInventory, UInventorySlotData* SlotData);
    
    UFUNCTION()
    void OnFirstPersonCreated(bool bCreatedArms);
    
    UFUNCTION()
    void OnEndSprinting();
    
    UFUNCTION()
    void OnDodged(EAIDodgeType DodgeType);
    
    UFUNCTION()
    void OnCryoThawing();
    
    UFUNCTION()
    void OnCryoFreezing();
    
    UFUNCTION()
    void OnCharacterTransported(bool bTransportStarted);
    
    UFUNCTION()
    void OnAIUncloaked();
    
    UFUNCTION()
    void OnAICloaked();
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_BroadcastPickedUpShieldBoost(UWwiseEvent* PickupAudioEvent, UParticleSystem* ScreenEffect, float ModifierDuration);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_BroadcastCharacterSoundTag(const UCharacterSoundTag* Tag);
    
    UFUNCTION(BlueprintCallable)
    void LockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput, bool bReplicate);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_CanWeaponZoom() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_CanPerformWeaponAction(EWeaponActionChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingWeapon(UWeaponSlotData* Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSlotOpenInventoryCategory(UInventoryCategoryData* PickupCategory);
    
    UFUNCTION(BlueprintCallable)
    bool IsSlotEnabledForInventoryCategory(UInventoryCategoryData* PickupCategory);
    
    UFUNCTION(BlueprintPure)
    bool IsShowingCrosshair(uint8 Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerformingGroundSlam() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeaping() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInventoryItemEquipped(AActor* InventoryItem);
    
    UFUNCTION(BlueprintPure)
    bool IsFrozenToDeath() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsEquippingWeapon(UWeaponSlotData* SlotToUse) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEchoDeviceActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterRooted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedToSlot();
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedToSeat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasShieldEquipped();
    
    UFUNCTION(BlueprintPure)
    bool HasRecentlyEquippedWeaponInSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool HasInfiniteAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasHealthOfType(UHealthTypeData* HealthTypeToFind);
    
    UFUNCTION(BlueprintCallable)
    void GoFromInjuredToHealed(AOakPlayerController* HealedByPlayer);
    
    UFUNCTION(BlueprintCallable)
    void GoFromInjuredToDead();
    
    UFUNCTION(BlueprintCallable)
    void GoFromDeadToHealed();
    
    UFUNCTION(BlueprintPure)
    bool GetZoomToggle() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetWeaponOffsetRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWeaponOffsetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AWeapon* GetWeapon(UWeaponSlotData* SlotToGet) const;
    
    UFUNCTION(BlueprintPure)
    bool GetWantsToSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWantsToCrouch() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetViewModelOffsetRotation(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetViewModelOffsetLocation(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetVehicle() const;
    
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetOwnedVehicle() const;
    
protected:
    UFUNCTION(BlueprintPure)
    AOakAIController* GetOakAIController() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetMovementDirection(const TEnumAsByte<EAxis::Type> AXIS) const;
    
    UFUNCTION(BlueprintPure)
    UInventoryListComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable)
    FHealthType GetHealthInformationAtIndex(int32 Index, EValidIndex& Branch);
    
    UFUNCTION(BlueprintCallable)
    bool GetFirstHealthInformationByType(UHealthTypeData* HealthTypeToFind, FHealthType& OutHealthType);
    
    UFUNCTION(BlueprintCallable)
    float GetFaceFXBlendWeight(float DeltaTime, float BlendTime, USkeletalMeshComponent* InSkelMeshComp);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEquippedInventoryForSlot(UInventorySlotData* InventorySlot);
    
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetCARVehicle() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryListComponent* GetBankInventoryComponent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UOakAIActionComponent* GetAIActionComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    AWeapon* GetActiveWeapon(uint8 Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void FillAllHealth();
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void ExitTurret(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void EquipInventorySlotDirect(const UInventorySlotData* SlotToEquip, AActor* SelectedActor, bool bSwapSlots);
    
    UFUNCTION(BlueprintCallable)
    void EquipInventorySlot(const UInventorySlotData* SlotToEquip, const FInventoryListEntryHandle& SelectedHandle, bool bSwapSlots);
    
    UFUNCTION(BlueprintCallable)
    void EnableInventorySlot(UInventorySlotData* InventorySlot, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DropCurrentWeapon();
    
    UFUNCTION(BlueprintCallable)
    void DelayWeaponsUse(float DelayTime, bool bForceUseAfterDelay);
    
    UFUNCTION(BlueprintCallable)
    void ControlMech(AOakCharacter* TheMech);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientUnlockActiveWeaponActions(FName Reason, int32 ChannelsMask);
    
    UFUNCTION(Client, Reliable)
    void ClientStopWeaponActions(uint8 Slot, int32 ChannelsMask, bool bClearInput);
    
    UFUNCTION(Client, Reliable)
    void ClientLockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanEquipInventoryItem(AActor* InInventoryToEquip) const;
    
    UFUNCTION(BlueprintCallable)
    bool AttemptGroundSlam();
    
    UFUNCTION(BlueprintNativeEvent)
    void AttachedItemPickedUp(AInventoryItemPickup* InventoryItemPickedUp, AActor* PickedUpBy);
    
    UFUNCTION()
    void AnimNotify_BossClosedCaption(const UAnimNotify* IncomingNotify);
    
    UFUNCTION(BlueprintCallable)
    void AddInWorldIcon(const FHUDInWorldIconTargetInfo& TargetInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddHealthTypeAtIndex(UHealthTypeData* HealthTypeData, UGameResourcePoolData* HealthPoolData, int32 Index, EHealthAdded& Branch);
    
    UFUNCTION(BlueprintCallable)
    void AddHealthType(UHealthTypeData* HealthTypeData, UGameResourcePoolData* HealthPoolData, EHealthAdded& Branch);
    
public:
    UFUNCTION()
    void AddedToInventory(const UInventoryListComponent* InventoryList, const UInventoryCategoryData* AddedCategory, AActor* AddedActor, const FInventoryListEntryHandle& AddedHandle, int32 Flags, int32 DesiredSlot);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultItemPoolsToInventory(TArray<FItemPoolInfo>& ItemPools, bool SingleEquippedItem, bool ClearInventory, bool EquipIfNoInventory);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultItemPoolListInventory(UItemPoolListData* DefaultItemPoolList, bool ClearInventory, bool EquipIfNoInventory);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultItemPoolInventory(UItemPoolData* DefaultItemPoolData, bool ClearInventory, bool EquipIfNoInventory);
    
    
    // Fix for true pure virtual functions not being implemented
};

