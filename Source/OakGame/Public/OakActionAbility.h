#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbility.h"
#include "ActionSkillFailureCodeDescription.h"
#include "AttributeInitializationData.h"
#include "EOakActionAbilitySecondaryUseActionType.h"
#include "GameResourcePoolReference.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "EOakActionAbilityStopAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "OakActionAbility.generated.h"

class UGameResourcePoolData;
class UOakActionAbilityOwnedResourceInterface;
class IOakActionAbilityOwnedResourceInterface;
class UOakActionAbilityAugmentSlotData;
class USwfMovie;
class AOakPlayerController;
class UOakActionAbilityAugmentData;

UCLASS()
class UOakActionAbility : public UOakPlayerAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FActionSkillFailureCodeDescription> FailureCodeDescriptions;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldDisplayDurationBar;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UOakActionAbilityAugmentSlotData*> SupportedAugmentSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameResourcePoolData* CooldownPoolData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameResourcePoolData* DurationPoolData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString DefaultHUDIconFrameName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* HUDIcon;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesCharges;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ChargeInitializationData;
    
    UPROPERTY(EditDefaultsOnly)
    EOakActionAbilitySecondaryUseActionType SecondaryUseActionType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEndOnDownstate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanBeActivatedWhileAttached;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference CooldownPoolRef;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference DurationPoolRef;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsActive)
    bool bIsActive;
    
    UPROPERTY(Transient)
    AOakPlayerController* OakPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Charges, meta=(AllowPrivateAccess=true))
    int32 Charges;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FGbxAttributeInteger MaxCharges;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IOakActionAbilityOwnedResourceInterface>> OwnedResources;
    
public:
    UOakActionAbility();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopActionAbility();
    
    UFUNCTION(BlueprintCallable)
    void StartActionAbility();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldStopAbilityOnPawnSlotComponentAttach() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool ShouldDisplayDurationBar() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldAbortActivation(uint8& OutAbortCode) const;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopActionAbility(EOakActionAbilityStopAction StopAction);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartActionAbility();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerResetActionAbilityCooldown();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDurationTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionAbilityCooldown();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveScriptingLock(const FName& Reason);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStopActionAbility();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartActionAbility();
    
private:
    UFUNCTION()
    void OnRep_Charges();
    
    UFUNCTION()
    void OnRep_bIsActive();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReady();
    
private:
    UFUNCTION()
    void OnPlayerDeadOrDying();
    
public:
    UFUNCTION()
    void OnOwnerCinematicModeChanged(bool bInCinematicMode);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputHoldTapped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputHoldReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputHoldPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputHoldHeld();
    
    UFUNCTION()
    void OnDurationResourceDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCoolingDown();
    
    UFUNCTION()
    void OnCooldownResourceFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChargeCountChanged(int32 OldCharge);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPendingStop() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDurationTimerRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoolingDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAugmentSlotted(UOakActionAbilityAugmentData* Augment) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAugmentInSlot(UOakActionAbilityAugmentData* Augment, UOakActionAbilityAugmentSlotData* AugmentSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyAugmentInSlot(UOakActionAbilityAugmentSlotData* AugmentSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasChargesAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleInputHoldActivationEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputHoldActivationBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleInputActivationRelease();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputActivationEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputActivationBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleInputActivationAttempt();
    
    UFUNCTION(BlueprintPure)
    UOakActionAbilityAugmentData* GetSlotAugment(UOakActionAbilityAugmentSlotData* AugmentSlot) const;
    
protected:
    UFUNCTION(BlueprintPure)
    AOakPlayerController* GetOakPlayerController() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetMaxDurationModifier(EGbxAttributeModifierType& ModifierType, float& Value) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetMaxCooldownModifier(EGbxAttributeModifierType& ModifierType, float& Value) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetDurationPercent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    uint8 GetDefaultActivationErrorCode() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetCooldownRestartPercent() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetCooldownPercent() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetActionSkillWidgetKeyframe() const;
    
private:
    UFUNCTION(Client, Reliable)
    void ClientNotifyActionSkillActivationFailed(uint8 FailureCode);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void CleanupOnActionSkillDeactivation();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddScriptingLock(const FName& Reason);
    
};

