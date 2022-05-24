#pragma once
#include "CoreMinimal.h"
#include "WeaponChargeEventDelegate.h"
#include "WeaponChargeEventNotify.h"
#include "WeaponPreUseComponent.h"
#include "EWeaponChargeState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponChargeAttributeEffect.h"
#include "EGbxActionEndState.h"
#include "WeaponChargeComponent.generated.h"

class UFeedbackData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponChargeComponent : public UWeaponPreUseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat DischargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat CancelChargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredUseChargePct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CommitUseChargePct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat OverchargeHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseWhenCharged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bChargeBeforeEachUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopChargingEffectsOnCharged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopChargedEffectsOnOvercharged: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUpdateChargeActionBlendSpace: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bZoomModifiesBlendSpaceY: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ChargePercentParamName;
    
    UPROPERTY(EditAnywhere)
    float ZoomChargeActionBlendSpaceScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponChargeAttributeEffect> AttributeEffects;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ChargeFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* OverchargeFeedback;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayFeedbackAtLocation: 1;
    
    UPROPERTY(EditAnywhere)
    FName FeedbackSocket;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponChargeEventNotify> ChargeEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponChargeEventNotify> DischargeEvents;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyChargeStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyChargeStopped;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyFullyCharged;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyChargeCanceled;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyOvercharged;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyDischargeStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyDischargeStopped;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponChargeEvent NotifyFullyDischarged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ChargeState)
    EWeaponChargeState ChargeState;
    
public:
    UWeaponChargeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void StopEffects();
    
    UFUNCTION()
    void Overcharged();
    
    UFUNCTION()
    void OnRep_ChargeState(EWeaponChargeState PrevChargeState);
    
    UFUNCTION()
    void OnChargeActionEnd(EGbxActionEndState EndState);
    
public:
    UFUNCTION(BlueprintPure)
    float GetDischargeDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeDuration() const;
    
protected:
    UFUNCTION()
    void FullyDischarged();
    
    UFUNCTION()
    void FullyCharged();
    
    UFUNCTION()
    void DelayChargeFinished();
    
};

