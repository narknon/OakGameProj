#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGFxVehicleWeaponType.h"
#include "GFxVehicleWeaponWidget.generated.h"

class UActiveWeaponsComponent;
class AWeapon;
class UWeaponAmmoComponent;
class UWeaponHeatComponent;
class UWeaponChargeComponent;
class UGbxGFxProgressBar;
class USwfMovie;

UCLASS(NonTransient)
class OAKGAME_API UGFxVehicleWeaponWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EGFxVehicleWeaponType WeaponType;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedAmmoComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponHeatComponent* CachedHeatComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponChargeComponent* CachedChargeComponent;
    
    UPROPERTY(Export, Transient)
    UActiveWeaponsComponent* ActiveWeaponsComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* VisibilityClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ResourceIconContainerClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DriverWeaponsClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DynamicWeaponIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponIconFrames;
    
    UPROPERTY(Transient)
    USwfMovie* CurrentlyLoadedWeaponIcons;
    
    UPROPERTY(Transient)
    FString DesiredWeaponIconFrame;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxProgressBar*> AmmoProgressBars;
    
    UPROPERTY(Transient)
    int32 CachedWeaponSlot;
    
    UPROPERTY(Transient)
    FString VisibilityClipID;
    
    UPROPERTY(Transient)
    FString ResourceIconContainerClipID;
    
    UPROPERTY(Transient)
    FString DriverWeaponsID;
    
    UPROPERTY(Transient)
    FString ResourceIconClipID;
    
    UPROPERTY(Transient)
    FString HeatMeterID;
    
    UPROPERTY(Transient)
    FString ChargeMeterID;
    
    UPROPERTY(Transient)
    FString MagazineMeterID;
    
    UPROPERTY(Transient)
    FString WeaponIconID;
    
    UPROPERTY(Transient)
    FString ResourceWeaponFrameName;
    
    UPROPERTY(Transient)
    FString DisabledBar;
    
public:
    UGFxVehicleWeaponWidget();
private:
    UFUNCTION()
    void UpdateWeaponDisplay();
    
public:
    UFUNCTION()
    void UpdateAmmoAmounts();
    
private:
    UFUNCTION()
    void OnWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon);
    
};

