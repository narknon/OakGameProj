#pragma once
#include "CoreMinimal.h"
#include "UserStatesRuntimeData.h"
#include "DamageableInterface.h"
#include "InspectionInfoProvider.h"
#include "UserStatesInterface.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxBlueprintActionInterface -FallbackName=GbxBlueprintActionInterface
#include "MissionObserverInterface.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "PlayerAlertableInterface.h"
#include "NameplateInfoProviderInterface.h"
#include "CompiledUserStatesData.h"
#include "UserStatesReplicationData.h"
#include "EInteractiveObjectState.h"
#include "EInteractiveObjectLockState.h"
#include "EInteractiveObjectInteractiveState.h"
#include "InteractiveObjectTrapEntry.h"
#include "EPlayerAlertType.h"
#include "InteractiveObject.generated.h"

class UOakDamageComponent;
class UTargetableComponent;
class USkeletalMeshComponent;
class UAnimationAsset;

UCLASS()
class OAKGAME_API AInteractiveObject : public AActor, public IMissionObserverInterface, public IDamageableInterface, public IOakElementalEffectBucketProviderInterface, public IPlayerAlertableInterface, public IGbxBlueprintActionInterface, public IUserStatesInterface, public IInspectionInfoProvider, public INameplateInfoProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, VisibleDefaultsOnly)
    FCompiledUserStatesData CompiledUserStatesData;
    
    UPROPERTY(Transient)
    FUserStatesRuntimeData RuntimeUserStatesData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedUserStatesData)
    FUserStatesReplicationData ReplicatedUserStatesData;
    
    UPROPERTY(EditAnywhere)
    bool bRegisterAsTargetable;
    
    UPROPERTY(EditAnywhere)
    bool bShouldDisplayNameplate;
    
private:
    UPROPERTY(Export, Transient)
    UOakDamageComponent* CachedDamageComponent;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* CachedTargetableComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepCurrentState)
    EInteractiveObjectState RepCurrentState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepCurrentLockState)
    EInteractiveObjectLockState RepCurrentLockState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepCurrentInteractiveState)
    EInteractiveObjectInteractiveState RepCurrentInteractiveState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveObjectState CurrentState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveObjectLockState CurrentLockState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveObjectInteractiveState CurrentInteractiveState;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 bShouldShowLevelSyncedNameplate: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ShouldColorCrosshairRed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideWhenAttachedToHiddenCharacter: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanNotifyKillersOfDeath: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsTrapTrigger: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bTrapBreaker: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bReverseTriggerInstructionWhenTriggerDeactivates: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bTrapIsBroken: 1;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FInteractiveObjectTrapEntry> TrapsList;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* PrimarySkeletalMeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* OnEnablingAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* OnEnabledAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* OnDisablingAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* OnDisabledAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* OnLockedAnimation;
    
    UPROPERTY(EditAnywhere)
    EPlayerAlertType PlayerAlertType;
    
    AInteractiveObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void SetGbxUserState(FName VariableName, uint8 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTrapBrokenState();
    
    UFUNCTION(BlueprintCallable)
    void OnTrapTriggerStateChanged(bool bTriggerActivated);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTrapDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTrapActivated();
    
private:
    UFUNCTION()
    void OnRep_ReplicatedUserStatesData();
    
    UFUNCTION()
    void OnRep_RepCurrentState();
    
    UFUNCTION()
    void OnRep_RepCurrentLockState();
    
    UFUNCTION()
    void OnRep_RepCurrentInteractiveState();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnLStateUnlocked();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLStateLocked();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLocked();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnIStateNonInteractive();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnIStateInteractive();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnabling();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDisabling();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDisabled();
    
    UFUNCTION()
    void OnAnimationEnded(const UAnimationAsset* Asset);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(EInteractiveObjectState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeLockState(EInteractiveObjectLockState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeInteractiveState(EInteractiveObjectInteractiveState NewState);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasEnableConditionsSetForAnyUserState() const override PURE_VIRTUAL(HasEnableConditionsSetForAnyUserState, return false;);
    
};

