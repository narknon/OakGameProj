#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GbxMenuInputEvent.h"
#include "GFxGraphicsOptions.generated.h"

class UGbxGFxDialogBox;
class UGbxGFxListItemComboBox;
class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;
class UGbxGFxHintWidget;
class UGbxGFxButton;

UCLASS(EditInlineNew)
class UGFxGraphicsOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGbxGFxListItemComboBox* ResolutionComboBox;
    
    UPROPERTY()
    UGbxGFxListItemComboBox* AspectRatioComboBox;
    
    UPROPERTY()
    UGbxGFxListItemComboBox* RefreshRateComboBox;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* WindowsModeSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* PreferredMonitorSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* ResolutionScaleSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* VSyncSpinner;
    
    UPROPERTY()
    UGbxGFxListItemNumber* FrameRateLimitCustomSlider;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* DisplayPerformanceStatsSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* AntialiasingSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* CASSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* CameraMotionBlurSlider;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* ObjectMotionBlurSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* GraphicsQualitySpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* TextureStreamingSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* MaterialQualitySpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* AnisotropicFilteringSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* ShadowQualitySpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* DrawDistanceSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* EnvironmentDetailSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* TerrainSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* FoliageSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* CharacterTextureDetailSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* CharacterDetailSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* AmbientOcclusionQualitySpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* VolumetricFogSpinner;
    
    UPROPERTY()
    UGbxGFxListItemSpinner* ScreenSpaceReflectionsSpinner;
    
    UPROPERTY()
    UGbxGFxDialogBox* ApplySettingsDialog;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextSubmenuHint;
    
public:
    UGFxGraphicsOptions();
private:
    UFUNCTION()
    void OnWindowModeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnVSyncChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnVolumetricFogChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnTextureStreamingChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnTerrainChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnSplitScreenConfigChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnShadowQualityChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnScreenSpaceReflectionsChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnSafeAreaSetupPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnResolutionScaleChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnResolutionDropDownSelectionChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnResolutionClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnRefreshRateChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnObjectMotionBlurChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMonitorDisplayTypeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMaterialQualityChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnHudScaleMultiplierChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnHDRSetupPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnGraphicsQualityChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnGraphicsModeTypeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnGraphicsAPIChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnFrameRateLimitCustomChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnFrameRateLimitChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnFoliageChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnEnvironmentDetailChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnDrawDistanceChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnDisplayPerformanceStatsChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnConfirmNewSettings(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnCharacterDetailChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCASChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCameraMotionBlurChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBenchmarkTypeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBenchmarkRunClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBenchmarkResultsDetailsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBenchmarkResultPhaseChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBenchmarkResultNothingChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBenchmarkResultDateTimeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBenchmarkResultDataOutputPathClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBenchmarkDataOutputChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBaseVehicleFOVChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnBaseFOVChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnAspectRatioChanged(UGbxGFxListItemComboBox* ComboBoxItem, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAnisotropicFilteringChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnAmbientOcclusionQualityChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnAAChanged(UGbxGFxListItemSpinner* Item);
    
};

