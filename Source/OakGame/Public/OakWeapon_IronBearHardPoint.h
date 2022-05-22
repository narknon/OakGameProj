#pragma once
#include "CoreMinimal.h"
#include "OakWeapon.h"
#include "EIronBearUIHardpointType.h"
#include "IronBearHardPointData.h"
#include "AttributeInitializationData.h"
#include "GameResourcePoolReference.h"
#include "EIronBearModType.h"
#include "OakWeapon_IronBearHardPoint.generated.h"

class AOakCharacter_IronBear;
class UGFxIronbearWeaponWidget;
class UOakActionAbilityAugmentData_IronBear;
class UOakCustomizationComponent;
class UOakActionAbilityAugmentData;

UCLASS()
class AOakWeapon_IronBearHardPoint : public AOakWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIronBearUIHardpointType UIHardpointType;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UOakActionAbilityAugmentData_IronBear* HardPointAugment;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOakCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CoreStrengthReductionCoefficientData;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IronBear, meta=(AllowPrivateAccess=true))
    AOakCharacter_IronBear* IronBear;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HardPointData, meta=(AllowPrivateAccess=true))
    FIronBearHardPointData HardPointData;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HardPointAugmentMod, meta=(AllowPrivateAccess=true))
    UOakActionAbilityAugmentData_IronBear* HardPointAugmentMod;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UGFxIronbearWeaponWidget* HUDWidget;
    
    UPROPERTY(Transient)
    FGameResourcePoolReference IronBearDurationPoolReference;
    
public:
    AOakWeapon_IronBearHardPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetHUDWidget(UGFxIronbearWeaponWidget* InHUDWidget);
    
private:
    UFUNCTION()
    void OnWeaponUsed();
    
    UFUNCTION()
    void OnRep_IronBear();
    
    UFUNCTION()
    void OnRep_HardPointData();
    
    UFUNCTION()
    void OnRep_HardPointAugmentMod();
    
    UFUNCTION()
    void OnFirstPersonCreated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyPlayerLeaving();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBubbleShieldEnabledChanged(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_InitializeMod1P();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_InitializeMod();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Initialize1P();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Initialize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeAugments(UOakActionAbilityAugmentData* InAugmentMod);
    
    UFUNCTION(BlueprintPure)
    bool HasMod(EIronBearModType ModType) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FGameResourcePoolReference GetWeaponAmmoPool() const;
    
    UFUNCTION(BlueprintPure)
    EIronBearModType GetMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndHardPointAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginHardPointAction();
    
};

