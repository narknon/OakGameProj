#include "OakGameUserSettings.h"

void UOakGameUserSettings::SetVolumetricFogMode(EVolumetricFogType NewMode) {
}

void UOakGameUserSettings::SetTextureStreamingQuality(ETextureStreamingQuality NewMode) {
}

void UOakGameUserSettings::SetTerrainDetailMode(ETerrainType NewMode) {
}

void UOakGameUserSettings::SetShadowQualityMode(EShadowQuality NewMode) {
}

void UOakGameUserSettings::SetScreenSpaceReflectionsMode(EScreenSpaceReflections NewMode) {
}

void UOakGameUserSettings::SetResolutionScalePercentage(EResolutionScale NewMode) {
}

void UOakGameUserSettings::SetMaterialQuality(EMaterialQuality NewMode) {
}

void UOakGameUserSettings::SetGraphicsQualityMode(EGraphicsQuality NewMode, bool bForce) {
}

void UOakGameUserSettings::SetFrameRateLimitMode(EFrameRateLimit NewMode) {
}

void UOakGameUserSettings::SetFoliageMode(EFoliageDensity NewMode) {
}

void UOakGameUserSettings::SetEnvironmentDetailMode(EEnvironmentDetail NewMode) {
}

void UOakGameUserSettings::SetEnablePerObjectMotionBlur(bool NewMode) {
}

void UOakGameUserSettings::SetEnableCAS(bool bNewValue) {
}

void UOakGameUserSettings::SetEnableCameraMotionBlur(bool bNewValue) {
}

void UOakGameUserSettings::SetEdgeDetectionTexelOffset(float NewOffset) {
}

void UOakGameUserSettings::SetDrawDistanceMode(EDrawDistance NewMode) {
}

void UOakGameUserSettings::SetDisplayPerformanceStatsMode(int32 NewMode) {
}

void UOakGameUserSettings::SetCustomFrameRateLimit(int32 NewLimit) {
}

void UOakGameUserSettings::SetCharacterDetailMode(ECharacterDetail NewMode) {
}

void UOakGameUserSettings::SetBenchmarkDataOutputMode(EBenchmarkDataOutputMode NewMode) {
}

void UOakGameUserSettings::SetAntiAliasingMode(int32 bNewValue) {
}

void UOakGameUserSettings::SetAnisotropicFilteringMode(EAnisotropicFilteringType NewMode) {
}

void UOakGameUserSettings::SetAmbientOcclusionQualityMode(EAmbientOcclusionQuality NewMode) {
}

EVolumetricFogType UOakGameUserSettings::GetVolumetricFogMode() const {
    return EVolumetricFogType::Off;
}

ETextureStreamingQuality UOakGameUserSettings::GetTextureStreamingQuality() const {
    return ETextureStreamingQuality::Low;
}

ETerrainType UOakGameUserSettings::GetTerrainDetailMode() const {
    return ETerrainType::Low;
}

EShadowQuality UOakGameUserSettings::GetShadowQualityMode() const {
    return EShadowQuality::Low;
}

EScreenSpaceReflections UOakGameUserSettings::GetScreenSpaceReflectionsMode() const {
    return EScreenSpaceReflections::Off;
}

EResolutionScale UOakGameUserSettings::GetResolutionScalePercentage() const {
    return EResolutionScale::Scale_50;
}

EGraphicsQuality UOakGameUserSettings::GetRecommendedGraphicsQualityMode() const {
    return EGraphicsQuality::VeryLow;
}

EGraphicsQuality UOakGameUserSettings::GetOverrideGraphicsQualityMode() const {
    return EGraphicsQuality::VeryLow;
}

int32 UOakGameUserSettings::GetNumAntiAliasingModes() const {
    return 0;
}

EMaterialQuality UOakGameUserSettings::GetMaterialQuality() const {
    return EMaterialQuality::Low;
}

EGraphicsQuality UOakGameUserSettings::GetGraphicsQualityMode() const {
    return EGraphicsQuality::VeryLow;
}

EFrameRateLimit UOakGameUserSettings::GetFrameRateLimitMode() const {
    return EFrameRateLimit::Smooth22_62FPS;
}

EFoliageDensity UOakGameUserSettings::GetFoliageMode() const {
    return EFoliageDensity::Low;
}

EEnvironmentDetail UOakGameUserSettings::GetEnvironmentDetailMode() const {
    return EEnvironmentDetail::Low;
}

bool UOakGameUserSettings::GetEnablePerObjectMotionBlur() const {
    return false;
}

bool UOakGameUserSettings::GetEnableCAS() const {
    return false;
}

bool UOakGameUserSettings::GetEnableCameraMotionBlur() const {
    return false;
}

float UOakGameUserSettings::GetEdgeDetectionTexelOffset() const {
    return 0.0f;
}

EDrawDistance UOakGameUserSettings::GetDrawDistanceMode() const {
    return EDrawDistance::Low;
}

int32 UOakGameUserSettings::GetDisplayPerformanceStatsMode() const {
    return 0;
}

EVolumetricFogType UOakGameUserSettings::GetDefaultVolumetricFogMode() {
    return EVolumetricFogType::Off;
}

ETextureStreamingQuality UOakGameUserSettings::GetDefaultTextureStreamingQuality() {
    return ETextureStreamingQuality::Low;
}

ETerrainType UOakGameUserSettings::GetDefaultTerrainDetailLevel() {
    return ETerrainType::Low;
}

EShadowQuality UOakGameUserSettings::GetDefaultShadowQualityMode() {
    return EShadowQuality::Low;
}

EScreenSpaceReflections UOakGameUserSettings::GetDefaultScreenSpaceReflectionsMode() {
    return EScreenSpaceReflections::Off;
}

EResolutionScale UOakGameUserSettings::GetDefaultResolutionScalePercentage() {
    return EResolutionScale::Scale_50;
}

bool UOakGameUserSettings::GetDefaultPerObjectMotionBlurEnabled() {
    return false;
}

EMaterialQuality UOakGameUserSettings::GetDefaultMaterialQuality() {
    return EMaterialQuality::Low;
}

EGraphicsQuality UOakGameUserSettings::GetDefaultGraphicsQualityMode() {
    return EGraphicsQuality::VeryLow;
}

EFrameRateLimit UOakGameUserSettings::GetDefaultFrameRateLimitMode() {
    return EFrameRateLimit::Smooth22_62FPS;
}

EFoliageDensity UOakGameUserSettings::GetDefaultFoliageMode() {
    return EFoliageDensity::Low;
}

EEnvironmentDetail UOakGameUserSettings::GetDefaultEnvironmentDetailMode() {
    return EEnvironmentDetail::Low;
}

float UOakGameUserSettings::GetDefaultEdgeDetectionTexelOffset() {
    return 0.0f;
}

EDrawDistance UOakGameUserSettings::GetDefaultDrawDistanceMode() {
    return EDrawDistance::Low;
}

int32 UOakGameUserSettings::GetDefaultDisplayPerformanceStatsMode() {
    return 0;
}

int32 UOakGameUserSettings::GetDefaultCustomFrameRateLimit() {
    return 0;
}

ECharacterDetail UOakGameUserSettings::GetDefaultCharacterDetailMode() {
    return ECharacterDetail::Low;
}

bool UOakGameUserSettings::GetDefaultCAS() {
    return false;
}

bool UOakGameUserSettings::GetDefaultCameraMotionBlurEnabled() {
    return false;
}

EBenchmarkDataOutputMode UOakGameUserSettings::GetDefaultBenchmarkDataOutputMode() {
    return EBenchmarkDataOutputMode::None;
}

int32 UOakGameUserSettings::GetDefaultAntiAliasingMode() {
    return 0;
}

EAnisotropicFilteringType UOakGameUserSettings::GetDefaultAnisotropicFilteringMode() {
    return EAnisotropicFilteringType::Trilinear;
}

EAmbientOcclusionQuality UOakGameUserSettings::GetDefaultAmbientOcclusionQualityMode() {
    return EAmbientOcclusionQuality::Off;
}

int32 UOakGameUserSettings::GetCustomFrameRateLimit() const {
    return 0;
}

ECharacterDetail UOakGameUserSettings::GetCharacterDetailMode() const {
    return ECharacterDetail::Low;
}

EBenchmarkDataOutputMode UOakGameUserSettings::GetBenchmarkDataOutputMode() const {
    return EBenchmarkDataOutputMode::None;
}

FText UOakGameUserSettings::GetAntiAliasingModeName(int32 Mode) const {
    return FText::GetEmpty();
}

int32 UOakGameUserSettings::GetAntiAliasingMode() const {
    return 0;
}

EAnisotropicFilteringType UOakGameUserSettings::GetAnisotropicFilteringMode() const {
    return EAnisotropicFilteringType::Trilinear;
}

EAmbientOcclusionQuality UOakGameUserSettings::GetAmbientOcclusionQualityMode() const {
    return EAmbientOcclusionQuality::Off;
}

UOakGameUserSettings::UOakGameUserSettings() {
    this->ResolutionScale = EResolutionScale::Scale_100;
    this->FrameRateLimitMode = EFrameRateLimit::Unlimited;
    this->CustomFrameRateLimit = 144;
    this->bEnableCameraMotionBlur = true;
    this->bEnablePerObjectMotionBlur = true;
    this->bEnableCAS = true;
    this->GraphicsQualityMode = EGraphicsQuality::Ultra;
    this->RecommendedGraphicsQualityMode = EGraphicsQuality::Ultra;
    this->TextureStreamingQuality = ETextureStreamingQuality::Ultra;
    this->MaterialQuality = EMaterialQuality::Ultra;
    this->AntiAliasingModeIndex = 2;
    this->AnisotropicFilteringMode = EAnisotropicFilteringType::SixteenX;
    this->ShadowQualityMode = EShadowQuality::Ultra;
    this->PerformanceStatsLevel = 0;
    this->EnvironmentTextureDetailMode = EEnvironmentTextureDetail::Deprecated;
    this->DrawDistanceMode = EDrawDistance::Ultra;
    this->EnvironmentDetailMode = EEnvironmentDetail::Ultra;
    this->TerrainMode = ETerrainType::Ultra;
    this->FoliageMode = EFoliageDensity::Ultra;
    this->VolumetricFogMode = EVolumetricFogType::High;
    this->ScreenSpaceReflectionsMode = EScreenSpaceReflections::High;
    this->CharacterTextureDetailMode = ECharacterTextureDetail::Deprecated;
    this->CharacterDetailMode = ECharacterDetail::Ultra;
    this->AmbientOcclusionQualityMode = EAmbientOcclusionQuality::Ultra;
    this->EdgeDetectionTexelOffset = -1.00f;
    this->BenchmarkDataOutputMode = EBenchmarkDataOutputMode::DetailedCSV;
    this->UISafeFrameScaling = 0.95f;
    this->HDRBrightness = 400.00f;
    this->Brightness = 50.00f;
    this->BlackLevel = 0.00f;
    this->HdrUIBrightness = 4.00f;
    this->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Horizontal;
    this->LastBenchmarkAvgFPS = 0.00f;
    this->LastBenchmarkAvgFrameTime = 0.00f;
    this->LastBenchmarkAvgCPU = 0.00f;
    this->LastBenchmarkAvgGPU = 0.00f;
    this->LastBenchmarkLoadTimeSeconds = 0.00f;
    this->OverrideGraphicsQualityMode = EGraphicsQuality::Undefined;
    this->TextureStreamingViewBoostScale = 0.00f;
    this->TextureStreamingViewBoostScaleOverride = -1.00f;
    this->TextureStreamingAdaptiveBoostScale = 0.75f;
    this->TextureStreamingAdaptiveBoostScaleOverride = -1.00f;
    this->TextureStreamingPoolSizeMB = 3000;
    this->TextureStreamingPoolSizeMBOverride = -1;
    this->bHasPerformedDirectXBetaUpgrade = true;
}

