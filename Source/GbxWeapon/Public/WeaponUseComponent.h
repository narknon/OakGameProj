#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GbxAttributeModifierHandle.h"
#include "WeaponDebugInterface.h"
#include "WeaponUsedEventDelegate.h"
#include "AttributeEffectData.h"
#include "WeaponUseComponent.generated.h"

class UGbxCrosshairDataAsset;
class UTexture2D;
class UWeaponPreUseComponent;
class AWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponUseComponent : public UActorComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 UseMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoSwitchModeWhenOutOfAmmo: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClearUseInputWhenSwitchingModes: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bActivateModeWhenZoomed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAnimationSwitchModeTime: 1;
    
    UPROPERTY(EditAnywhere)
    UGbxCrosshairDataAsset* CrosshairData;
    
    UPROPERTY(EditAnywhere)
    UGbxCrosshairDataAsset* ZoomedCrosshairData;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(EditAnywhere)
    FString ModeName;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> InstigatorAttributeEffects;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponUsedEvent NotifyUseStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponUsedEvent NotifyUseFinished;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponUsedEvent NotifyUsed;
    
protected:
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> InstigatorAttributeModifiers;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWeaponPreUseComponent* PreUseComponent;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponUseComponent();
    UFUNCTION(BlueprintNativeEvent)
    bool ToggleMode();
    
protected:
    UFUNCTION()
    void SwitchToZoomedMode(uint8 ZoomLevel);
    
    UFUNCTION()
    void SwitchFromZoomedMode(uint8 ZoomLevel);
    
    UFUNCTION()
    void OnPreUseFinished(bool bInterrupted);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnActivated();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanActivateMode() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

