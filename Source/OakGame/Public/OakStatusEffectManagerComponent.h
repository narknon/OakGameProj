#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectManagerComponent.h"
#include "EFreezeState.h"
#include "CryoFreezeAssetData.h"
#include "ShieldEffectStateData.h"
#include "AttributeInitializationData.h"
#include "EFreezeType.h"
#include "CSBoosterStatus.h"
#include "EOakElementalType.h"
#include "StreamerBoosterStatus.h"
#include "Engine/EngineTypes.h"
#include "ActiveOakResourceEffect.h"
#include "EOakStatusEffectResourceEffectType.h"
#include "OakElementalAuraEffectInstance.h"
#include "OakEffectPresentationManager.h"
#include "EGbxActionEndState.h"
#include "UObject/NoExportTypes.h"
#include "GameResourcePoolReference.h"
#include "OakStatusEffectManagerComponent.generated.h"

class UOakPresentableStatusEffectData;
class AActor;
class UGbxDamageType;
class UDestructibleMesh;
class AController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakStatusEffectManagerComponent : public UStatusEffectManagerComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCryoFreezeEvent);
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bResistCryoFreeze;
    
    UPROPERTY(BlueprintAssignable)
    FCryoFreezeEvent OnCryoFreezing;
    
    UPROPERTY(BlueprintAssignable)
    FCryoFreezeEvent OnCryoFrozen;
    
    UPROPERTY(BlueprintAssignable)
    FCryoFreezeEvent OnCryoThawing;
    
    UPROPERTY(BlueprintAssignable)
    FCryoFreezeEvent OnCryoThawed;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FCryoFreezeAssetData> CryoFreezeAssets;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FreezeFallingDamageScale;
    
    UPROPERTY(EditAnywhere)
    float FreezeNoDamageImpactThreshold;
    
    UPROPERTY(EditAnywhere)
    float FreezeFootDownThreshold;
    
    UPROPERTY(EditAnywhere)
    float FreezeSupportMeshScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FreezeSupportBones;
    
    UPROPERTY(Replicated, Transient)
    uint32 DestructibleSyncID;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FreezeData)
    uint8 RepFreezeData;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportCryoFreezeAssets: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanBuildFreezeSupportMesh: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanCreateFreezeGroundEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFallOnFrozenDeath: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=ClientUpdateFreezePauseState)
    uint8 bFreezePauseAnims: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EFreezeState FreezeState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EFreezeType FreezeType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> FreezeInstigator;
    
    UPROPERTY(EditAnywhere)
    bool bSupportShieldStatusEffects;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ShieldEffectState)
    FShieldEffectStateData ShieldEffectState;
    
    UPROPERTY(Replicated, Transient)
    FCSBoosterStatus CSBoosterStatusState;
    
    UPROPERTY(Replicated, Transient)
    FStreamerBoosterStatus StreamerBoosterStatusState;
    
    UPROPERTY(EditAnywhere)
    bool bShouldShowThirdPersonEffects;
    
    UPROPERTY(EditDefaultsOnly)
    bool bClearAllStatusEffectsOnOwnerDeath;
    
private:
    UPROPERTY(Transient)
    TArray<UOakPresentableStatusEffectData*> UpdatedEffects;
    
    UPROPERTY(Replicated, Transient)
    TArray<FActiveOakResourceEffect> ActiveResourceEffects;
    
    UPROPERTY(Transient)
    TArray<FOakElementalAuraEffectInstance> ElementalAuraEffects;
    
    UPROPERTY(Replicated, Transient)
    FOakEffectPresentationManager PresentationManager;
    
public:
    UOakStatusEffectManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockFreezePauseState(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void UnlockElementalEffects(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void UnlockElementalEffectByType(EOakStatusEffectResourceEffectType Type, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void UnlockElementalEffectByDamageType(TSubclassOf<UGbxDamageType> DamageTypeClass, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void UnlockCryoFreezePauseState(FName Reason);
    
private:
    UFUNCTION()
    void TryToFreezeOnActionEnd(EGbxActionEndState EndState);
    
    UFUNCTION()
    void Thawed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Thaw();
    
    UFUNCTION(BlueprintCallable)
    void Shatter(FVector Origin, float Force, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryFreezeMesh(UDestructibleMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryCryoFreezeMesh(UDestructibleMesh* Mesh);
    
private:
    UFUNCTION()
    void OnShieldNowNotFull(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldNowNotDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldNowFull(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldNowDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnResourceNowNotFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnResourceNowNotDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnResourceNowFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnResourceNowDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnRep_ShieldEffectState(const FShieldEffectStateData& OldState);
    
    UFUNCTION()
    void OnRep_FreezeData();
    
    UFUNCTION()
    void OnOwnerInjured();
    
    UFUNCTION()
    void OnOwnerHealthy();
    
    UFUNCTION()
    void OnOwnerDied();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockFreezePauseState(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockElementalEffects(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockElementalEffectByType(EOakStatusEffectResourceEffectType Type, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockElementalEffectByDamageType(TSubclassOf<UGbxDamageType> DamageTypeClass, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockCryoFreezePauseState(FName Reason);
    
    UFUNCTION(BlueprintPure)
    bool IsFrozen(bool bIncludeTransition) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCryoFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAffectedByElementalType(EOakElementalType Type, float Threshold) const;
    
private:
    UFUNCTION()
    void GetValidFreezePrimitiveComponentNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetThawPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetFreezePercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetCryoThawPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetCryoFreezePercent() const;
    
    UFUNCTION(BlueprintCallable)
    void FrozenDeath(FVector Momentum, FVector HitLocation, FVector HitDirection, float Force, float Radius, int32 BoneIndex);
    
private:
    UFUNCTION()
    void Frozen();
    
public:
    UFUNCTION(BlueprintCallable)
    void Freeze(bool bInstant, EFreezeType Type);
    
    UFUNCTION(BlueprintCallable)
    void CryoThaw();
    
    UFUNCTION(BlueprintCallable)
    void CryoShatter(FVector Origin, float Force, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void CryoFrozenDeath(FVector Momentum, FVector HitLocation, FVector HitDirection, float Force, float Radius, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable)
    void CryoFreeze(bool bInstant);
    
private:
    UFUNCTION()
    void ClientUpdateFreezePauseState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAllTransientEffects();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAllElementalEffects();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastShatter(FVector Origin, float Force);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyResourceEffectValue(AController* Instigator, EOakStatusEffectResourceEffectType Type, float InValue);
    
private:
    UFUNCTION()
    void ApplyFreezeFallDamage(const FHitResult& Hit);
    
};

