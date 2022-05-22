#include "GFxGraphicsOptions.h"

class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;
class UGbxGFxButton;
class UGbxGFxListItemComboBox;
class UGbxGFxDialogBox;

void UGFxGraphicsOptions::OnWindowModeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnVSyncChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnVolumetricFogChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnTextureStreamingChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnTerrainChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnSplitScreenConfigChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnShadowQualityChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnScreenSpaceReflectionsChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnSafeAreaSetupPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnResolutionScaleChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnResolutionDropDownSelectionChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnResolutionClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnRefreshRateChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnObjectMotionBlurChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnMonitorDisplayTypeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnMaterialQualityChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnHudScaleMultiplierChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxGraphicsOptions::OnHDRSetupPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnGraphicsQualityChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnGraphicsModeTypeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnGraphicsAPIChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnFrameRateLimitCustomChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxGraphicsOptions::OnFrameRateLimitChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnFoliageChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnEnvironmentDetailChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnDrawDistanceChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnDisplayPerformanceStatsChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnConfirmNewSettings(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnCharacterDetailChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnCASChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnCameraMotionBlurChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBenchmarkTypeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBenchmarkRunClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnBenchmarkResultsDetailsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnBenchmarkResultPhaseChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBenchmarkResultNothingChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBenchmarkResultDateTimeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBenchmarkResultDataOutputPathClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnBenchmarkDataOutputChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnBaseVehicleFOVChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxGraphicsOptions::OnBaseFOVChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxGraphicsOptions::OnAspectRatioChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxGraphicsOptions::OnAnisotropicFilteringChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnAmbientOcclusionQualityChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxGraphicsOptions::OnAAChanged(UGbxGFxListItemSpinner* Item) {
}

UGFxGraphicsOptions::UGFxGraphicsOptions() {
    this->ResolutionComboBox = NULL;
    this->AspectRatioComboBox = NULL;
    this->RefreshRateComboBox = NULL;
    this->WindowsModeSpinner = NULL;
    this->PreferredMonitorSpinner = NULL;
    this->ResolutionScaleSpinner = NULL;
    this->VSyncSpinner = NULL;
    this->FrameRateLimitCustomSlider = NULL;
    this->DisplayPerformanceStatsSpinner = NULL;
    this->AntialiasingSpinner = NULL;
    this->CASSpinner = NULL;
    this->CameraMotionBlurSlider = NULL;
    this->ObjectMotionBlurSpinner = NULL;
    this->GraphicsQualitySpinner = NULL;
    this->TextureStreamingSpinner = NULL;
    this->MaterialQualitySpinner = NULL;
    this->AnisotropicFilteringSpinner = NULL;
    this->ShadowQualitySpinner = NULL;
    this->DrawDistanceSpinner = NULL;
    this->EnvironmentDetailSpinner = NULL;
    this->TerrainSpinner = NULL;
    this->FoliageSpinner = NULL;
    this->CharacterTextureDetailSpinner = NULL;
    this->CharacterDetailSpinner = NULL;
    this->AmbientOcclusionQualitySpinner = NULL;
    this->VolumetricFogSpinner = NULL;
    this->ScreenSpaceReflectionsSpinner = NULL;
    this->ApplySettingsDialog = NULL;
    this->PreviousSubmenuHint = NULL;
    this->NextSubmenuHint = NULL;
}

