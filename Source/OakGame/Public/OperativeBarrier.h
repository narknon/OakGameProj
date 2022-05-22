#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EOperativeBarrierModType.h"
#include "InteractiveObject.h"
#include "EnvQueryParams.h"
#include "OakThroughCollisionHandlerInterface.h"
#include "DataTableValueHandle.h"
#include "Engine/EngineTypes.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "ShieldBarrierInterface.h"
#include "AttributeInitializationData.h"
#include "ShieldBarrierTrackedBuffTarget.h"
#include "AttributeEffectData.h"
#include "OperativeBarrierStatusEffectInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "OakActionAbilityEnumMaskHelper.h"
#include "OperativeBarrierState.h"
#include "EOperativeBarrierState.h"
#include "OperativeBarrier.generated.h"

class UOakDamageComponent;
class UStatusEffectData;
class UGbxCustomizationComponent;
class UShieldAugment;
class UGbxDamageType;
class UPrimitiveComponent;
class UUsableComponent;
class AShield;
class UOakActionAbility_Barrier;
class UWeaponShotModifier;
class AActor;
class UDamageSource;
class UObject;

UCLASS()
class AOperativeBarrier : public AInteractiveObject, public IOakThroughCollisionHandlerInterface, public IShieldBarrierInterface, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEnvQueryParams FindNewDeployLocationParams;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* BarrierMod1EffectData;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* BarrierMod5EffectData;
    
    UPROPERTY(EditAnywhere)
    FDataTableValueHandle BarrierMod5DecayDuration;
    
    UPROPERTY(EditAnywhere)
    FDataTableValueHandle TurboDuration;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* TurbochargeDefault;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScalarFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BeginAuraBuffDurationFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData EndAuraBuffDurationFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OwningCharacterBuffMagnitudeScale;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* AuraOverlapPrimitive;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* BarrierTouchComponent;
    
    UPROPERTY(Transient)
    TArray<FShieldBarrierTrackedBuffTarget> TrackedBuffTargets;
    
    UPROPERTY(Transient)
    TArray<FAttributeEffectData> PersistentAuraAttributeEffects_Owner;
    
    UPROPERTY(Transient)
    TArray<FAttributeEffectData> PersistentAuraAttributeEffects_Default;
    
    UPROPERTY(Transient)
    FOperativeBarrierStatusEffectInfo BeginAuraStatusEffect;
    
    UPROPERTY(Transient)
    FOperativeBarrierStatusEffectInfo EndAuraStatusEffect;
    
    UPROPERTY(Replicated, Transient)
    AShield* Shield;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGbxAttributeFloat DamageScalar;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> ProjectileOverlapComponents;
    
    UPROPERTY(BlueprintReadOnly)
    UOakActionAbility_Barrier* OwnerActionAbility;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RuntimeMods)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsTurbocharged)
    bool bIsTurbocharged;
    
    UPROPERTY(Transient)
    UWeaponShotModifier* CarriedShotModifier;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_BarrierState, meta=(AllowPrivateAccess=true))
    FOperativeBarrierState BarrierState;
    
    UPROPERTY(Transient)
    TMap<AActor*, int32> ShieldOverlappingActors;
    
public:
    AOperativeBarrier();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterProjectileOverlapComponent(UPrimitiveComponent* Component);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ToggleBarrierState();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetupBarrierMods();
    
    UFUNCTION(BlueprintCallable)
    void SetIsTransitioningStates(bool InbIsTransitioningStates);
    
    UFUNCTION(BlueprintCallable)
    void RegisterProjectileOverlapComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurbochargedStateChanged(bool InbIsTurbocharged);
    
private:
    UFUNCTION()
    void OnRep_RuntimeMods();
    
    UFUNCTION()
    void OnRep_bIsTurbocharged();
    
    UFUNCTION()
    void OnRep_BarrierState();
    
    UFUNCTION()
    void OnDamageScalarChanged(float OldValue, float NewValue);
    
    UFUNCTION()
    void OnBarrierAbsorbedDamage(const UDamageSource* DamageSource, const UGbxDamageType* InDamageType);
    
    UFUNCTION()
    void NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayEffectsOnAugment(TSubclassOf<UShieldAugment> AugmentClass, FName AugmentName, UObject* AdditionalContext);
    
    UFUNCTION(BlueprintPure)
    bool HasBarrierMod(EOperativeBarrierModType ModType) const;
    
    UFUNCTION()
    void HandleProjectileOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleBarrierStateChange(EOperativeBarrierState OldState, EOperativeBarrierState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyDeterrenceFieldToEnemy(AActor* Enemy);
    
    
    // Fix for true pure virtual functions not being implemented
};

