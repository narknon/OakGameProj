#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EIronBearExitReason.h"
#include "OakCharacter.h"
#include "EIronBearSpawnStyle.h"
#include "IronBearHardPointData.h"
#include "EIronBearDamageLevel.h"
#include "EIronBearCoreType.h"
#include "WwisePlaybackInstance.h"
#include "GameResourcePoolReference.h"
#include "EIronBearHardPointOrientation.h"
#include "OakCharacter_IronBear.generated.h"

class UGbxAbility;
class UOakActionAbilityAugmentData_IronBear;
class UOakActionAbilityAugmentSlotData;
class ASeatPawn;
class UWwiseEvent;
class UWwiseRtpc;
class UWwiseAuxBus;
class UOakPlayerAbilityManagerComponent;
class UOakActionAbility_IronBear;
class AOakCharacter_Player;
class AOakPlayerController;
class UGameResourceData;
class UPawnAttachSlotComponent;
class UGbxCustomizationComponent;
class UWwiseAudioEffect;
class UAIWeaponUserComponent;
class APawn;
class AController;
class UOakActionAbilityAugmentData;
class UWeaponSlotData;
class AOakWeapon_IronBearHardPoint;

UCLASS()
class AOakCharacter_IronBear : public AOakCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIronBearExitEvent);
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIronBearHardPointData> HardPointSlots;
    
    UPROPERTY(BlueprintAssignable)
    FIronBearExitEvent OnExitStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIronBearExitEvent OnExitCanceledEvent;
    
private:
    UPROPERTY()
    UOakActionAbilityAugmentSlotData* CoreSlot;
    
    UPROPERTY()
    TArray<UOakActionAbilityAugmentSlotData*> CoreSlots;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakActionAbilityAugmentData_IronBear*> CoreAugments;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableIronBearCapsuleCollisionOnExit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ManualExitTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float GundamCoreCooldownTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASeatPawn> GunnersNestClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName GunnersNestAttachSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGbxAbility> IronBearUberAbilityClass;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartEngineEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartEngineEventQuick;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StopEngineEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartManualExitEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StopManualExitEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* RtpcManualExit;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartTimeLeftEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StopTimeLeftEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* RtpcTimeLeft;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* RtpcRelativeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* RtpcDamage;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseAuxBus* DriverEffectsBus;
    
    UPROPERTY(EditDefaultsOnly)
    float DriverEffectBusWetVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float DriverEffectBusDryVolume;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_IronBear* IronBearActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* Gunner;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    EIronBearSpawnStyle SpawnStyle;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    EIronBearExitReason ExitReason;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    float DurationTimeRemainingOnExit;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OakPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASeatPawn* GunnersNest;
    
    UPROPERTY(Replicated, Transient)
    TArray<EIronBearCoreType> ActiveCoreTypes;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* BubbleShieldResource;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance EngineLoop;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance ManualExitLoop;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance TimeLeftLoop;
    
    UPROPERTY(Export, Transient)
    UPawnAttachSlotComponent* PrimarySeatComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentDamageLevel, meta=(AllowPrivateAccess=true))
    EIronBearDamageLevel CurrentDamageLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bBubbleShieldEnabled, meta=(AllowPrivateAccess=true))
    bool bBubbleShieldEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bBubbleShieldFiring, meta=(AllowPrivateAccess=true))
    bool bBubbleShieldFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bIsExiting, meta=(AllowPrivateAccess=true))
    bool bIsExiting;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference BubbleShieldResourcePool;
    
    UPROPERTY(Transient)
    UWwiseAudioEffect* AppliedAudioEffect;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UAIWeaponUserComponent*> AIWeaponSlotComponents;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bIronCub;
    
public:
    AOakCharacter_IronBear();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartManualExit();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartDigistructIn();
    
private:
    UFUNCTION()
    void OnRep_CurrentDamageLevel();
    
    UFUNCTION()
    void OnRep_bIsExiting();
    
    UFUNCTION()
    void OnRep_bBubbleShieldFiring();
    
    UFUNCTION()
    void OnRep_bBubbleShieldEnabled();
    
    UFUNCTION()
    void OnPlayerLevelChanged(int32 OldLevel, int32 NewLevel);
    
    UFUNCTION()
    void OnHealthMinMaxValueChanged(FGameResourcePoolReference& HealthPool, float NewMin, float NewMax);
    
    UFUNCTION()
    void OnHealthCurrentValueChanged(FGameResourcePoolReference& HealthPool, float NewValue);
    
    UFUNCTION()
    void OnHardPointUseStateChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExiting(bool bInstantExit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExited(AController* OldController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEntering(AOakCharacter_Player* InGunner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEntered();
    
private:
    UFUNCTION()
    void OnDriverDetachFinished(APawn* InPawn, AController* InController);
    
    UFUNCTION()
    void OnDriverAttachFinished(APawn* InPawn, AController* InController);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageLevelChanged();
    
private:
    UFUNCTION()
    void OnBubbleShieldResourceNowNotDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnBubbleShieldResourceNowDepleted(FGameResourcePoolReference ResourcePool);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBubbleShieldFireStateChanged();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBubbleShieldEnabledStateChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ManualExitStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ManualExitCancelled();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCoreActive(EIronBearCoreType CoreType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAugmentInModSlot(UOakActionAbilityAugmentSlotData* Slot, UOakActionAbilityAugmentData* Augment) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool HasBubbleShield() const;
    
    UFUNCTION()
    void HandleOnDead();
    
    UFUNCTION(BlueprintImplementableEvent)
    UAIWeaponUserComponent* GetWeaponUserForWeaponSlot(UWeaponSlotData* SlotData) const;
    
    UFUNCTION(BlueprintPure)
    UOakPlayerAbilityManagerComponent* GetPlayerAbilityManagerComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetIronBearTimeLeftPercent() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    float GetIronBearAutoSlideCooldownRefund() const;
    
public:
    UFUNCTION(BlueprintPure)
    AOakWeapon_IronBearHardPoint* GetHardPointWeaponByOrientation(EIronBearHardPointOrientation Orientation) const;
    
    UFUNCTION(BlueprintPure)
    AOakWeapon_IronBearHardPoint* GetHardPointWeapon(UOakActionAbilityAugmentSlotData* Slot) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ExitIronBear(EIronBearExitReason InExitReason);
    
    UFUNCTION(BlueprintCallable)
    void EndHardPointAction(UOakActionAbilityAugmentSlotData* Slot);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientFaceRotation(float Yaw);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelManualExit();
    
    UFUNCTION(BlueprintCallable)
    void BeginHardPointAction(UOakActionAbilityAugmentSlotData* Slot);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateGundamCore();
    
};

