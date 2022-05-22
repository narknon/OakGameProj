#pragma once
#include "CoreMinimal.h"
#include "GbxReplicatorProxyData.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponHeatEventNotify.h"
#include "EWeaponEffectType.h"
#include "HeatChangedDelegateDelegate.h"
#include "WeaponHeatComponent.generated.h"

class UCurveFloat;
class AWeapon;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponHeatComponent : public UActorComponent, public IWeaponDebugInterface, public IGbxReplicatorProxyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat HeatCoolDownRate;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat HeatCoolDownDelay;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat UseHeatImpulse;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat ActiveHeatRate;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bSimulateOnClients;
    
    UPROPERTY(EditAnywhere)
    uint8 bSimulateOnAI: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bVisibleInHUD: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStartCoolDownEffectOnEndUse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanOverheat: 1;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bCanUseWhenOverheated;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat OverheatTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat OverheatCoolDownDelay;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponHeatEventNotify> HeatEvents;
    
    UPROPERTY(EditAnywhere)
    FName HeatMaterialParamName;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HeatMaterialParamCurve;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> CoolDownEffectType;
    
    UPROPERTY(EditAnywhere)
    float CoolDownEffectOnThreshold;
    
    UPROPERTY(EditAnywhere)
    float CoolDownEffectOffThreshold;
    
    UPROPERTY(BlueprintAssignable)
    FHeatChangedDelegate NotifyHeatChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Heat;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedHeat)
    uint8 ReplicatedHeat;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Overheated)
    uint8 bOverheated: 1;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponHeatComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCanUseWhenOverheated(bool bEnabled);
    
protected:
    UFUNCTION()
    void OnUseFinished();
    
    UFUNCTION()
    void OnUsed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopOverheat();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartOverheat();
    
    UFUNCTION()
    void OnRep_ReplicatedHeat();
    
    UFUNCTION()
    void OnRep_Overheated(bool bWasOverheated);
    
    UFUNCTION()
    void OnPutDown();
    
    UFUNCTION()
    void OnEquipped();
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnAttached();
    
    
    // Fix for true pure virtual functions not being implemented
};

