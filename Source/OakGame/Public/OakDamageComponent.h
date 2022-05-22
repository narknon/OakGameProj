#pragma once
#include "CoreMinimal.h"
#include "DamageComponent.h"
#include "SecondaryHealthDamageEventDelegate.h"
#include "TakeAnyPipelineDamageDelegateDelegate.h"
#include "HealthTypeEventDelegate.h"
#include "HealthTypeDepletedEventDelegate.h"
#include "ShieldAbsorbedDamageEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "EGoreRegionType.h"
#include "DamageBlockDelegateDelegate.h"
#include "ElementalDeathDelegateDelegate.h"
#include "EOakElementalType.h"
#include "GoreRegionState.h"
#include "UObject/NoExportTypes.h"
#include "GoreRegionEventSummary.h"
#include "OakDamageComponent.generated.h"

class UGoreAoEDamageData;
class UDamageBlockData;
class UHitReactionTag;
class UWeaponShieldComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDamageComponent : public UDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSecondaryHealthDamageEvent OnTakeSecondaryHealthDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHealthTypeEvent OnHealthTypeNormal;
    
    UPROPERTY(BlueprintAssignable)
    FHealthTypeEvent OnHealthTypeLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthTypeEvent OnHealthTypeVeryLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthTypeEvent OnHealthTypeAdded;
    
    UPROPERTY(BlueprintAssignable)
    FHealthTypeDepletedEvent OnHealthTypeDepleted;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat ShieldAbsorptionChance;
    
    UPROPERTY(BlueprintAssignable)
    FShieldAbsorbedDamageEvent OnShieldAbsorbedDamage;
    
    UPROPERTY(BlueprintAssignable)
    FTakeAnyPipelineDamageDelegate OnTakeAnyHealthDamage;
    
    UPROPERTY(EditAnywhere)
    bool bDamageBlockEnabled;
    
    UPROPERTY(EditAnywhere)
    UDamageBlockData* DamageBlockData;
    
    UPROPERTY(BlueprintAssignable)
    FDamageBlockDelegate OnDamageBlock;
    
    UPROPERTY(BlueprintAssignable)
    FElementalDeathDelegate OnDefaultElementalDeath;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* RagdollDeathTag;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bReplenishOnWorldReset;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UWeaponShieldComponent> WeaponShield;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EOakElementalType ElementalDeathType;
    
    UPROPERTY(EditAnywhere)
    bool bDisableElementalDeaths;
    
    UPROPERTY(EditAnywhere)
    float GoreRegionTriggerThreshold;
    
    UPROPERTY(EditAnywhere)
    float GoreRegionLimbScale;
    
    UPROPERTY(EditAnywhere)
    int32 GoreSourceMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    UGoreAoEDamageData* AoEGoreData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGoreRegionState> GoreRegions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UHitReactionTag* GoreDeathOverride;
    
public:
    UOakDamageComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerGoreRegions(UGoreAoEDamageData* GoreData, FVector Origin, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGoreRegion(FName BoneName, FVector HitDirection, bool bIgnoreRestrictions);
    
    UFUNCTION(BlueprintCallable)
    void TriggerDefaultElementalDeath();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void TriggerClientGoreRegion(const FGoreRegionEventSummary& EventSummary);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIgnoreShield(bool IgnoreShield);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDamageBlockEnabled(bool bNewDamageBlockEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsElementalDeath() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGoredRegionType(EGoreRegionType REGION) const;
    
    UFUNCTION(BlueprintPure)
    bool HasGoredAnyRegionType(int32 RegionTypes) const;
    
protected:
    UFUNCTION()
    void GetValidGoreRegionEventFunctionNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSectionPercentagesAtIndex(int32 Index, TArray<float> SectionPercentages);
    
};

