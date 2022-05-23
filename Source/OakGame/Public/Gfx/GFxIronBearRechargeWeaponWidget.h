#pragma once
#include "CoreMinimal.h"
#include "GFxIronbearWeaponWidget.h"
#include "GFxIronBearRechargeWeaponWidget.generated.h"

class UGbxGFxObject;
class UWeaponReloadComponent;
class UWeaponChargeComponent;
class UWeaponFireProjectileComponent;

UCLASS(NonTransient)
class UGFxIronBearRechargeWeaponWidget : public UGFxIronbearWeaponWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* OverheatClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TypeIconClip;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UWeaponChargeComponent> ChargeComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UWeaponFireProjectileComponent> FireProjectileComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UWeaponReloadComponent> ReloadComponent;
    
    UPROPERTY(Transient)
    float ReloadTime;
    
    UPROPERTY(Transient)
    float ReloadTimeProgress;
    
    UPROPERTY(Transient)
    bool bIsReloading;
    
    UPROPERTY(EditAnywhere)
    float ProgressBarOverchagePctBegin;
    
public:
    UGFxIronBearRechargeWeaponWidget();
private:
    UFUNCTION()
    void OnReloadStarted(bool bAutoReload);
    
    UFUNCTION()
    void OnReloadEnded(bool bCompleted);
    
    UFUNCTION()
    void AmmoChanged();
    
};

