#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "WeaponUseComponent.h"
#include "ForceSelection.h"
#include "Engine/EngineTypes.h"
#include "EGbxActionEndState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "GbxParam.h"
#include "SoundPerceptionProperties.h"
#include "EWeaponEffectType.h"
#include "EWeaponFireRateState.h"
#include "Engine/NetSerialization.h"
#include "NumericRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxForceFeedbackEffect -FallbackName=GbxForceFeedbackEffect
#include "WeaponFireComponent.generated.h"

class UGbxDamageType;
class UCurveFloat;
class UDamageSource;
class UImpactData;
class UFeedbackData;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponFireComponent : public UWeaponUseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeInteger AutomaticBurstCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat BurstFireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FireSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> FireSockets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FullFireSocketCycle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinFireRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat FireRateAccelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat FireRateDecelDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinFireRatePercentToFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* FireRateCurve;
    
    UPROPERTY(EditAnywhere)
    bool bUseShotStrengthFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ShotStrengthFormula;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FireSequenceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat ResetFireSequenceTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ResetFireSequenceCompletePercent;
    
    UPROPERTY(EditAnywhere)
    bool bAdvanceFireSequenceAtEndOfBurst;
    
    UPROPERTY(EditAnywhere)
    bool bTotalShotCostRequiredToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeInteger ShotAmmoCost;
    
    UPROPERTY(EditAnywhere)
    int32 MinShotAmmoCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat AccuracyImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat BurstAccuracyImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewModelShotOffsetScale;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGbxAttributeFloat Damage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageFormula;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShotStrengthDamageCurve;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGbxAttributeFloat DamageRadius;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageRadiusFormula;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShotStrengthDamageRadiusCurve;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGbxAttributeFloat ImpactForce;
    
    UPROPERTY(EditAnywhere)
    FForceSelection ImpactForceSelection;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShotStrengthImpactForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(EditAnywhere)
    int32 MuzzleFXSequenceLength;
    
    UPROPERTY(EditAnywhere)
    FSoundPerceptionProperties FireSoundPerception;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* FireFeedback;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayFeedbackAtLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleFeedbackWithFireRate: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* ScaledFeedback;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve FeedbackFireRateScalar;
    
    UPROPERTY(EditAnywhere)
    FName FeedbackSocket;
    
    UPROPERTY(EditAnywhere)
    bool bSyncAnimationToFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FireAnimationBlendSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> SkeletalControlType;
    
    UPROPERTY(EditAnywhere)
    FName SkeletalControlName;
    
    UPROPERTY(EditAnywhere)
    float SkeletalControlFireInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLockOntoBestTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayInitializeAttribute;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FireRateAccelChanged)
    uint8 bFireRateAccelActive: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EWeaponFireRateState FireRateState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentBurstShotCount;
    
    UPROPERTY(Transient)
    uint8 CurrentFireSequenceIndex;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientFireSequenceState)
    uint8 ClientFireSequenceState;
    
    UPROPERTY(Transient)
    float FireRatePercent;
    
    UPROPERTY(Replicated, Transient)
    uint8 FlashSlot;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FlashCount)
    uint8 FlashCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ImpactLocation)
    FVector_NetQuantize ImpactLocation;
    
    UPROPERTY()
    float DamageAmount;
    
public:
    UPROPERTY(EditAnywhere)
    FGbxParam AIBurstCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIBurstFireDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIFireInterval;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIAccuracy;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIProjectileSpeedScale;
    
    UPROPERTY(VisibleAnywhere)
    FNumericRange AIDesiredRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIMinDesiredRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AIMaxDesiredRange;
    
    UPROPERTY(Transient)
    FGbxForceFeedbackEffect ScaledEffect;
    
    UWeaponFireComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerResetFireSequence();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopFireRateDeceleration();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopFireRateAcceleration();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartFireRateDeceleration();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartFireRateAcceleration();
    
    UFUNCTION()
    void OnRep_ImpactLocation();
    
    UFUNCTION()
    void OnRep_FlashCount();
    
    UFUNCTION()
    void OnRep_FireRateAccelChanged();
    
    UFUNCTION()
    void OnRep_ClientFireSequenceState();
    
    UFUNCTION()
    void OnReloadAmmoGiven();
    
    UFUNCTION()
    void OnLoopingFireActionEnd(EGbxActionEndState EndState);
    
    UFUNCTION()
    void OnGivenTo();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFireRateAccelEnabled() const;
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* GetLockedTarget();
    
    UFUNCTION(BlueprintPure)
    float GetFireRatePercent() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientStopResetFireSequence();
    
};

