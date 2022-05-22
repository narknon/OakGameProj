#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UsabilityInfo.h"
#include "UObject/NoExportTypes.h"
#include "GFxReloadWidget.generated.h"

class UWeaponReloadComponent;
class AWeapon;
class UGbxGFxObject;
class UWeaponCOVHeatComponent;
class UWeaponAmmoComponent;
class UGbxTextField;
class UUsableComponent;

UCLASS()
class UGFxReloadWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AWeapon* CachedWeapon;
    
    UPROPERTY(Export, Transient)
    UWeaponCOVHeatComponent* CachedCOVHeatComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedAmmoComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponReloadComponent* CachedReloadComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ReloadIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* KeybindingText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ReloadTextWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* ReloadText;
    
public:
    UGFxReloadWidget();
private:
    UFUNCTION()
    void UpdateCachedAmmoCounts() const;
    
    UFUNCTION()
    void UpdateCachedAmmoComponent() const;
    
    UFUNCTION()
    void OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnUsabilityChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo) const;
    
    UFUNCTION()
    void OnReloadStarted(bool bAuto) const;
    
    UFUNCTION()
    void OnReloadEnded(bool bCompleted) const;
    
    UFUNCTION()
    void OnLadderExit() const;
    
    UFUNCTION()
    void OnLadderEnter() const;
    
public:
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
private:
    UFUNCTION()
    void OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const;
    
};

