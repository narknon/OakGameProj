#include "GFxControlsBasicOptions.h"

class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;
class UGbxGFxDialogBox;

void UGFxControlsBasicOptions::OnUseAdvancedZoomedAimSettingsChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControlsBasicOptions::OnUseAdvancedVehicleAimSettingsChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControlsBasicOptions::OnUseAdvancedHipAimSettingsChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControlsBasicOptions::OnMouseVehicleScaleChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnMouseScaleChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnMouseADSScaleChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnGlyphModeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxControlsBasicOptions::OnGamepadZoomedSensitivityLevelChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnGamepadVehicleSensitivityLevelChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnGamepadHipSensitivityLevelChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxControlsBasicOptions::OnEnableGamepadInputChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxControlsBasicOptions::OnEnableGamepadInputChanged(UGbxGFxListItemSpinner* Item) {
}

UGFxControlsBasicOptions::UGFxControlsBasicOptions() {
    this->PreviousSubmenuHint = NULL;
    this->NextSubmenuHint = NULL;
    this->UseAdvancedHipAimSettingsItem = NULL;
    this->UseAdvancedZoomedAimSettingsItem = NULL;
    this->UseAdvancedVehicleAimSettingsItem = NULL;
    this->EnableGamepadInputItem = NULL;
    this->GamepadHipSensitivityLevelItem = NULL;
    this->GamepadZoomedSensitivityLevelItem = NULL;
    this->GamepadVehicleSensitivityLevelItem = NULL;
    this->GamepadHipYawRateItem = NULL;
    this->GamepadHipPitchRateItem = NULL;
    this->GamepadHipExtraYawItem = NULL;
    this->GamepadHipExtraPitchItem = NULL;
    this->GamepadHipRampUpTimeItem = NULL;
    this->GamepadHipRampUpDelayItem = NULL;
    this->GamepadZoomedYawRateItem = NULL;
    this->GamepadZoomedPitchRateItem = NULL;
    this->GamepadZoomedExtraYawItem = NULL;
    this->GamepadZoomedExtraPitchItem = NULL;
    this->GamepadZoomedRampUpTimeItem = NULL;
    this->GamepadZoomedRampUpDelayItem = NULL;
    this->GamepadVehicleYawRateItem = NULL;
    this->GamepadVehiclePitchRateItem = NULL;
    this->GamepadVehicleExtraYawItem = NULL;
    this->GamepadVehicleExtraPitchItem = NULL;
    this->GamepadVehicleRampUpTimeItem = NULL;
    this->GamepadVehicleRampUpDelayItem = NULL;
}

