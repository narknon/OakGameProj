#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GameResourcePoolReference.h"
#include "UsabilityInfo.h"
#include "UObject/NoExportTypes.h"
#include "GFxAmmoBar.generated.h"

class AOakHUD;
class AOakPlayerController;
class AWeapon;
class UGbxGFxObject;
class AOakCharacter;
class UInventorySlotData;
class UWeaponCOVHeatComponent;
class UWeaponAmmoComponent;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGbxGFxProgressBar;
class UUIStatData;
class UUsableComponent;

UCLASS(Blueprintable)
class UGFxAmmoBar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AOakHUD* OakHUD;
    
    UPROPERTY(Transient)
    AWeapon* CachedWeapon;
    
    UPROPERTY(Export, Transient)
    UWeaponCOVHeatComponent* CachedCOVHeatComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedAmmoComponent;
    
    UPROPERTY(Transient)
    AOakPlayerController* OakPCOwner;
    
    UPROPERTY(Transient)
    AOakCharacter* OakCharacterOwner;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AmmoCurrentValueContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* AmmoCurrentValueLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MaxValueContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* AmmoMaxValueLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponIconContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AmmoAndModeContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeSwitchWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeSwitchTextContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ElementalIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* ModeSwitchTextBox;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ModeSwitchHint;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* COVHeatBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* COVBrokenBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* COVRedliningMC;
    
    UPROPERTY(Transient)
    UGbxGFxObject* COVOverheatWarning;
    
    UPROPERTY(EditAnywhere)
    float MaxSwapWeaponModeTime;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* EridianFabricatorStat;
    
    UPROPERTY(EditAnywhere)
    UInventorySlotData* InventorySlotDataTop;
    
    UPROPERTY(EditAnywhere)
    UInventorySlotData* InventorySlotDataBottom;
    
    UPROPERTY(EditAnywhere)
    UInventorySlotData* InventorySlotDataLeft;
    
    UPROPERTY(EditAnywhere)
    UInventorySlotData* InventorySlotDataRight;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedWeaponSecondaryModeAmmoComponent;
    
public:
    UGFxAmmoBar();
private:
    UFUNCTION()
    void WeaponSecondaryModeAmmoChanged() const;
    
    UFUNCTION()
    void UpdateCachedAmmoCounts() const;
    
    UFUNCTION()
    void UpdateCachedAmmoComponent() const;
    
public:
    UFUNCTION()
    void UpdateAmmoCount(int32 LoadedCount, int32 SpareCount) const;
    
private:
    UFUNCTION()
    void UpdateAmmoBarExtrema(FGameResourcePoolReference& ResourcePoolReference, float MinNum, float MaxNum) const;
    
    UFUNCTION()
    void OnWeaponSwitchedMode() const;
    
    UFUNCTION()
    void OnWeaponEquipped() const;
    
    UFUNCTION()
    void OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const;
    
protected:
    UFUNCTION()
    void OnUpdatePreToggleWeaponMode(bool bPreToggleWeaponModeStarted) const;
    
    UFUNCTION()
    void OnResurrected() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaxAmmoEmpty() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLowClipAmmo() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
protected:
    UFUNCTION()
    void OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnClipAmmoEmpty() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAmmoReloaded() const;
    
};

