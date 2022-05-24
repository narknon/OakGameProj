#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GbxMenuInputEvent.h"
#include "GFxControlsBasicOptions.generated.h"

class UGbxGFxDialogBox;
class UGbxGFxHintWidget;
class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;

UCLASS(EditInlineNew)
class UGFxControlsBasicOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* UseAdvancedHipAimSettingsItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* UseAdvancedZoomedAimSettingsItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* UseAdvancedVehicleAimSettingsItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* EnableGamepadInputItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipSensitivityLevelItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedSensitivityLevelItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleSensitivityLevelItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipYawRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipPitchRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipExtraYawItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipExtraPitchItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipRampUpTimeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadHipRampUpDelayItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedYawRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedPitchRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedExtraYawItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedExtraPitchItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedRampUpTimeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadZoomedRampUpDelayItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleYawRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehiclePitchRateItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleExtraYawItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleExtraPitchItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleRampUpTimeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* GamepadVehicleRampUpDelayItem;
    
public:
    UGFxControlsBasicOptions();
private:
    UFUNCTION()
    void OnUseAdvancedZoomedAimSettingsChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnUseAdvancedVehicleAimSettingsChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnUseAdvancedHipAimSettingsChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMouseVehicleScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnMouseScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnMouseADSScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGlyphModeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnGamepadZoomedSensitivityLevelChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadVehicleSensitivityLevelChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadHipSensitivityLevelChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnEnableGamepadInputChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnEnableGamepadInputChanged(UGbxGFxListItemSpinner* Item);
    
};

