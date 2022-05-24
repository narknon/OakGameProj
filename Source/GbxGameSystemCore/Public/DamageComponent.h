#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerMeleeHitDelegateDelegate.h"
#include "DamageBaseComponent.h"
#include "DamageCompHealthDepletedDelegateDelegate.h"
#include "InspectionInfoProvider.h"
#include "TakeAnyPipelineDamageDelegateDelegate.h"
#include "GameResourcePoolReference.h"
#include "TakeAnyPipelineHealingDelegateDelegate.h"
#include "EDamageComponentHealthMode.h"
#include "DamageCompDiedDelegateDelegate.h"
#include "HitByFriendlyDelegateDelegate.h"
#include "SimpleHealthInfo.h"
#include "HitReactionPlayedDelegateDelegate.h"
#include "Engine/NetSerialization.h"
#include "HitReactionState.h"
#include "HealthType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "StatusEffectModifiers.h"
#include "SyncedHitReactionData.h"
#include "DamageGoreModifiers.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "DamageReactionEvent_DamageComponent.h"
#include "ReceivedDamageDetails.h"
#include "Engine/NetSerialization.h"
#include "DamageComponent.generated.h"

class UHitRegionComponent;
class UDeathData;
class UImpactData;
class AActor;
class AController;
class APlayerController;
class UGbxDamageType;
class UConditionalDamageModifier;
class UDamageComponent;
class UPhysicalMaterial;
class UDamageCauserComponent;
class UDamageSource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDamageComponent : public UDamageBaseComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTakeAnyPipelineDamageDelegate OnTakeAnyDamage;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerMeleeHitDelegate OnPlayerMeleeHit;
    
    UPROPERTY(BlueprintAssignable)
    FTakeAnyPipelineHealingDelegate OnTakeAnyHealing;
    
    UPROPERTY(BlueprintAssignable)
    FDamageCompHealthDepletedDelegate OnHealthDepleted;
    
    UPROPERTY(BlueprintAssignable)
    FDamageCompDiedDelegate OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FHitByFriendlyDelegate OnHitByFriendly;
    
    UPROPERTY(BlueprintAssignable)
    FHitReactionPlayedDelegate OnHitReaction;
    
    UPROPERTY(EditAnywhere)
    FHitReactionState HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShowDamageNumbers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShowImmuneFeedbackInGodMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlwaysBlockWeapons: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreDamageAreaVisibilityChecks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDieWhenHealthDepleted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDeathData* DeathData;
    
    UPROPERTY(EditDefaultsOnly)
    EDamageComponentHealthMode HealthMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_HealthInformation)
    TArray<FHealthType> HealthInformation;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    FSimpleHealthInfo SimpleHealthInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat DamageTakenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat RadiusDamageTakenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat StatusEffectChanceModifierScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat StatusEffectDamageModifierScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat StatusEffectDurationModifierScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStatusEffectModifiers> StatusEffectModifiers;
    
    UPROPERTY(EditAnywhere)
    float MinimumDamageLaunchVelocity;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBoundForCylinderTest: 1;
    
    UPROPERTY(EditAnywhere)
    float LaunchVerticalDampening;
    
    UPROPERTY(EditAnywhere)
    float MaxSelfInflictedLaunchVelocity;
    
    UPROPERTY(EditAnywhere)
    UImpactData* SplatterEffect;
    
    UPROPERTY()
    bool bUseProtectionTimer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DeathHitReaction)
    FSyncedHitReactionData DeathHitReaction;
    
    UPROPERTY(BlueprintReadOnly)
    FDamageGoreModifiers DeathGoreModifiers;
    
    UPROPERTY(Transient)
    APlayerController* LastHitByPlayer;
    
private:
    UPROPERTY()
    float AvertDeathChance;
    
    UPROPERTY()
    float IntrinsicArmor;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat SelfReflectionChance;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat SelfReflectionDamageTakenScale;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat SelfReflectionDamageScale;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeInteger SelfReflectionTowardsAttacker;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> SelfReflectionDamageType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bPassDamageToParent: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDamageOnlyAppliesToParent: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanDamageCorpse: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UConditionalDamageModifier*> DefaultConditionalDamageModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDamageReactionEvent_DamageComponent> DamageEvents;
    
    UPROPERTY(Export, Transient)
    UHitRegionComponent* CachedHitRegionComponent;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* ParentDamageComponent;
    
    UPROPERTY(Transient)
    AController* LastHitBy;
    
    UPROPERTY()
    uint8 bGodMode: 1;
    
    UPROPERTY()
    uint8 bDemigodMode: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bCurrentlyDead)
    uint8 bCurrentlyDead: 1;
    
    UPROPERTY(Transient)
    UPhysicalMaterial* ImpactPhysicalMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressOnDeathCall;
    
public:
    UDamageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfReflectedDamageType(const TSubclassOf<UGbxDamageType>& DamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetGodMode(bool bInGodMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDemiGodMode(bool bInDemiGodMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentShield(float NewCurrentShield);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float NewCurrentHealth);
    
    UFUNCTION(BlueprintCallable)
    void RegisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveHealthDepleted(UDamageCauserComponent* DamageCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveAnyHealing(float Healing, AActor* HealInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveAnyDamage(float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, const FReceivedDamageDetails& Details);
    
protected:
    UFUNCTION()
    void OnRep_HealthInformation();
    
    UFUNCTION()
    void OnRep_DeathHitReaction();
    
private:
    UFUNCTION()
    void OnRep_bCurrentlyDead();
    
    UFUNCTION()
    void OnOwnerExperienceLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void OnHealthResourceNowNotDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnHealthResourceNowDepleted(FGameResourcePoolReference ResourcePool);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInGodMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDemiGodMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDamageOverkill(float DamageAmount, float OverkillThreshold) const;
    
private:
    UFUNCTION()
    void GetValidDamageEventFunctionNames(TArray<FName>& Names) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetTotalMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentShield() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealthPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHealth() const;
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void BroadcastPlayImpactSplatterEffect(UImpactData* ImpactData, FVector_NetQuantize100 HitLocation, FVector_NetQuantizeNormal HitDirection, float DamageSeverity);
    
    
    // Fix for true pure virtual functions not being implemented
};

