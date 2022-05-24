#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EIronBearHardPointOrientation.h"
#include "GFxIronbearWeaponWidget.generated.h"

class AOakWeapon_IronBearHardPoint;
class UWeaponAmmoComponent;
class UGbxTextField;
class AOakPlayerController;
class UGbxGFxProgressBar;
class UGFxIronBearHUDWidgetContainer;
class UOakActionAbilityAugmentData_IronBear;

UCLASS(NonTransient)
class OAKGAME_API UGFxIronbearWeaponWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* ActionIcon;
    
    UPROPERTY(Transient)
    AOakWeapon_IronBearHardPoint* CachedWeapon;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedAmmoComponent;
    
    UPROPERTY(Transient)
    UGbxTextField* KeyBindingTextfield;
    
    UPROPERTY(Transient)
    AOakPlayerController* CachedPlayerController;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ElementalIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ElementalIconBG;
    
    UPROPERTY(Transient)
    UGbxTextField* BarTextField;
    
    UPROPERTY(Transient)
    UGFxIronBearHUDWidgetContainer* HUDContainer;
    
    UPROPERTY(Transient)
    UOakActionAbilityAugmentData_IronBear* AugmentData;
    
    UPROPERTY(Transient)
    EIronBearHardPointOrientation CachedBindingOrientation;
    
public:
    UGFxIronbearWeaponWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateProgressbar(float Amount);
    
    UFUNCTION()
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintCallable)
    void HardpointUseStop();
    
    UFUNCTION(BlueprintCallable)
    void HardpointUsed();
    
};

