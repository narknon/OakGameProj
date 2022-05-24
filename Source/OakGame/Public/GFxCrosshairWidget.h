#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "ECrosshairType.h"
#include "ECrosshairColorsEnum.h"
#include "UObject/NoExportTypes.h"
#include "GFxCrosshairWidget.generated.h"

class UGbxWeaponUserInterface;
class IGbxWeaponUserInterface;
class UGbxCrosshairDataAsset;
class AActor;
class AWeapon;
class UWeaponZoomComponent;
class UOakReticleFeedbackWidget;

UCLASS()
class UGFxCrosshairWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxCrosshairDataAsset* DefaultCrosshairData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECrosshairType CrosshairEnumType;
    
private:
    UPROPERTY(Transient)
    AWeapon* CachedWeapon;
    
    UPROPERTY(Transient)
    TArray<AWeapon*> CachedWeapons;
    
    UPROPERTY(Export, Transient)
    UWeaponZoomComponent* CachedZoomComponent;
    
    UPROPERTY(Transient)
    AActor* CrosshairActor;
    
    UPROPERTY(Transient)
    AActor* CurrentTarget;
    
    UPROPERTY(Transient)
    TScriptInterface<IGbxWeaponUserInterface> CachedWeaponUser;
    
    UPROPERTY(EditAnywhere)
    FString CrosshairContainerInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString MeleeCrosshairInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString ActionSkillCrosshairInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString SprintCrosshairInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString DefaultCrosshairInstanceName;
    
    UPROPERTY(EditAnywhere)
    TMap<ECrosshairColorsEnum, FLinearColor> CrosshairColorMap;
    
    UPROPERTY(EditAnywhere)
    float MaxRepresentableAngle;
    
    UPROPERTY(Transient)
    UOakReticleFeedbackWidget* FeedbackWidget;
    
public:
    UGFxCrosshairWidget();
private:
    UFUNCTION()
    void UpdateWeaponSlot() const;
    
    UFUNCTION()
    void UpdateLightForDamageType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetLockedTargetClipsState(bool bIsEnabled) const;
    
private:
    UFUNCTION()
    void SetCrosshairColor(ECrosshairColorsEnum NewColor) const;
    
    UFUNCTION()
    void OnZoomed(uint8 ZoomLevel) const;
    
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnTargetLockChange(AWeapon* EventWeapon, bool bInLockedOn) const;
    
    UFUNCTION()
    void OnSwitchedWeaponMode() const;
    
    UFUNCTION()
    void OnNotZoomed() const;
    
    UFUNCTION()
    void OnMeleeStateChangeEvent(bool bMeleePossible) const;
    
    UFUNCTION()
    void HandleCrosshairSpread() const;
    
    UFUNCTION()
    ECrosshairColorsEnum FindCrosshairColor() const;
    
    UFUNCTION()
    void CheckForCrosshairVisibility() const;
    
public:
    UFUNCTION()
    void ChangeCrosshairType(const UGbxCrosshairDataAsset* NewCrosshairDataAsset) const;
    
private:
    UFUNCTION()
    void ChangeCrosshairByString(const FString& NewFrame) const;
    
};

