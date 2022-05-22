#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbility.h"
#include "EPhaseTranceEffectType.h"
#include "SirenArmControllerInterface.h"
#include "GameResourcePoolReference.h"
#include "PhaseTranceActivationComboData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "UObject/NoExportTypes.h"
#include "OakPhaseTranceEffectSpec.h"
#include "OakPhaseTranceLockEffectSpec.h"
#include "EPhaseTranceAttackFamilyType.h"
#include "EPhaseTranceElementalType.h"
#include "AttributeInitializationData.h"
#include "OakActionAbility_PhaseTrance.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData_PhaseTrance_Element;
class UDamageSource;
class UGbxDamageType;
class UGameResourcePoolData;
class UOakActionAbility_PhaseTrance;
class UOakDamageType;
class UOakAction_Anim_ActionAbility_PhaseTrance;

UCLASS()
class UOakActionAbility_PhaseTrance : public UOakActionAbility, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentSlotData* AttackSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentSlotData* EffectSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentSlotData* ElementSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentData_PhaseTrance_Element* DefaultElementalAugmentData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> PhasetranceDamageSourceClass;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxDamageType* DefaultDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameResourcePoolData* PhaseGraspDurationPoolData;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference PhaseGraspDurationPoolRef;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPhaseTranceActivationComboData ActivationCombo;
    
    UPROPERTY(Replicated, Transient)
    FGbxAttributeInteger bCanActivateDuringCooldown;
    
public:
    UOakActionAbility_PhaseTrance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintPure)
    static FPhaseTranceActivationComboData UnpackActivationComboDataFromReplication(TSubclassOf<UOakActionAbility_PhaseTrance> PhaseTranceClass, const FVector& PackedComboData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryEffect(const FOakPhaseTranceEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void SetPhaseGraspTimerRunning(bool bIsRunning);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEffectsLocked(const FOakPhaseTranceLockEffectSpec& Spec);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRecallOrb();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RecallOrb();
    
    UFUNCTION(BlueprintPure)
    static FVector PackActivationComboDataForReplication(TSubclassOf<UOakActionAbility_PhaseTrance> PhaseTranceClass, const FPhaseTranceActivationComboData& ComboData);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOrbActive() const;
    
    UFUNCTION(BlueprintPure)
    static bool HasPhaseTranceElementType(EPhaseTranceElementalType ElementType, const FPhaseTranceActivationComboData& ComboData);
    
    UFUNCTION(BlueprintPure)
    static bool HasPhaseTranceEffectType(EPhaseTranceEffectType EffectType, const FPhaseTranceActivationComboData& ComboData);
    
    UFUNCTION(BlueprintPure)
    static EPhaseTranceElementalType GetPhaseTranceElementType(const FPhaseTranceActivationComboData& ComboData);
    
    UFUNCTION(BlueprintPure)
    static EPhaseTranceEffectType GetPhaseTranceEffectType(const FPhaseTranceActivationComboData& ComboData);
    
    UFUNCTION(BlueprintPure)
    UOakActionAbilityAugmentData_PhaseTrance_Element* GetCurrentlyAttunedElementData() const;
    
    UFUNCTION(BlueprintPure)
    EPhaseTranceElementalType GetCurrentlyAttunedElement() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool DoEffect(const FOakPhaseTranceEffectSpec& Spec) const;
    
    UFUNCTION(BlueprintPure)
    static void BreakPhaseTranceElementData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceElementalType& ElementType, TSubclassOf<UOakDamageType>& DamageType, FAttributeInitializationData& DamageCoefficientData);
    
    UFUNCTION(BlueprintPure)
    static void BreakPhaseTranceEffectData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceEffectType& EffectType, FAttributeInitializationData& DamageCoefficientData);
    
    UFUNCTION(BlueprintPure)
    static void BreakPhaseTranceAttackData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceAttackFamilyType& AttackFamilyType, TSubclassOf<UOakAction_Anim_ActionAbility_PhaseTrance>& AttackClass, FAttributeInitializationData& DamageCoefficientData, FAttributeInitializationData& CooldownCoefficientData);
    
    
    // Fix for true pure virtual functions not being implemented
};

