#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "AttributeInitializationData.h"
#include "AttributeEffectData.h"
#include "GbxAttributeModifierHandle.h"
#include "WeaponRegisterAttachmentEffectData.h"
#include "GameResourcePoolReference.h"
#include "EWeaponShieldActivationTrigger.h"
#include "EWeaponZoomState.h"
#include "DamageCompTakeShieldDamageDelegateDelegate.h"
#include "WeaponShieldEventDelegate.h"
#include "EWeaponShieldState.h"
#include "WeaponShieldComponent.generated.h"

class UGameResourcePoolData;
class UHitRegionData;
class UCurveFloat;
class UParticleSystem;
class UWwiseEvent;
class UFeedbackData;
class UOakStatusEffectManagerComponent;
class UWwiseAudioComponent;
class UWeaponScopeComponent;
class AWeapon;
class UStatusEffectData;
class AOakPlayerController;
class APawn;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponShieldComponent : public UActorComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* ShieldData;
    
    UPROPERTY(EditAnywhere)
    float BlockAngle;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> AttributeEffects;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGbxAttributeFloat MaxShield;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxShieldFormula;
    
    UPROPERTY(EditAnywhere)
    UHitRegionData* HitRegionData;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponRegisterAttachmentEffectData> EffectsData;
    
    UPROPERTY(EditAnywhere)
    float HitConfirmDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HitConfirmCurve;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenHitEffect;
    
    UPROPERTY(EditAnywhere)
    int32 ShieldStartEffectId;
    
    UPROPERTY(EditAnywhere)
    int32 ShieldStopEffectId;
    
    UPROPERTY(EditAnywhere)
    int32 ShieldBreakEffectId;
    
    UPROPERTY(Replicated, Transient)
    FGameResourcePoolReference ShieldPool;
    
    UPROPERTY(EditAnywhere)
    EWeaponShieldActivationTrigger ActivationTrigger;
    
    UPROPERTY(EditAnywhere)
    EWeaponZoomState ActivationZoomState;
    
    UPROPERTY(EditAnywhere)
    EWeaponZoomState DeactivationZoomState;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldStartAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldStopAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldBreakAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldHitAudio;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldNovaAudio;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ShieldStartFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ShieldStopFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ShieldBreakFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ShieldHitFeedback;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponShieldEvent OnShieldActivated;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponShieldEvent OnShieldDeactivated;
    
    UPROPERTY(BlueprintAssignable)
    FDamageCompTakeShieldDamageDelegate OnTakeDamage;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponShieldEvent OnShieldNowFull;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponShieldEvent OnShieldNowDepleted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponShieldEvent OnShieldNowRegenerating;
    
protected:
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> AttributeModifiers;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bNotifyWeaponUsed: 1;
    
    UPROPERTY(Transient)
    uint8 bShieldCreated: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsShieldActive)
    uint8 bIsShieldActive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayShieldHitAction: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ShieldState)
    EWeaponShieldState ShieldState;
    
    UPROPERTY(EditDefaultsOnly)
    FName ImpactOffsetSocket;
    
    UPROPERTY(EditDefaultsOnly)
    FName HitConfirmParamName;
    
    UPROPERTY(EditDefaultsOnly)
    float ShieldHitActionDuration;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UOakStatusEffectManagerComponent* OwnerStatusEffectComponent;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* AudioComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponScopeComponent* ActiveScopeComponent;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponShieldComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void StopShieldEffect();
    
    UFUNCTION(BlueprintNativeEvent)
    void StartShieldEffect();
    
    UFUNCTION()
    void ResourceNowRegenerating(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void ResourceNowFull(FGameResourcePoolReference ResourcePool);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void PlayHitConfirm();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayFeedbackSoundEvent(UWwiseEvent* Event, bool bReplicated);
    
    UFUNCTION()
    void OnZoomingOut(uint8 Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponUsed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldCreated();
    
    UFUNCTION()
    void OnRep_ShieldState(EWeaponShieldState PreviousState);
    
    UFUNCTION()
    void OnRep_IsShieldActive(bool bWasShieldActive);
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnDeactivationTrigger();
    
    UFUNCTION()
    void OnAttached();
    
    UFUNCTION()
    void OnActivationTrigger();
    
    UFUNCTION(BlueprintPure)
    AWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStatusEffectStackCount(UStatusEffectData* StatusEffect) const;
    
    UFUNCTION(BlueprintPure)
    AOakPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetInstigator() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateShield();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientPlayFeedbackSoundEvent(UWwiseEvent* Event);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateShield();
    
    
    // Fix for true pure virtual functions not being implemented
};

