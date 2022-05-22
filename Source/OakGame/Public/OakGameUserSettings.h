#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "EResolutionScale.h"
#include "EGraphicsQuality.h"
#include "EFrameRateLimit.h"
#include "EMaterialQuality.h"
#include "ETextureStreamingQuality.h"
#include "EShadowQuality.h"
#include "EEnvironmentTextureDetail.h"
#include "EAnisotropicFilteringType.h"
#include "ETerrainType.h"
#include "EDrawDistance.h"
#include "EEnvironmentDetail.h"
#include "EFoliageDensity.h"
#include "EVolumetricFogType.h"
#include "ECharacterDetail.h"
#include "EScreenSpaceReflections.h"
#include "ECharacterTextureDetail.h"
#include "EAmbientOcclusionQuality.h"
#include "EBenchmarkDataOutputMode.h"
#include "GameMapsSettings.h"
#include "OakGameUserSettings.generated.h"

UCLASS()
class UOakGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    EResolutionScale ResolutionScale;
    
    UPROPERTY(Config)
    EFrameRateLimit FrameRateLimitMode;
    
    UPROPERTY(Config)
    int32 CustomFrameRateLimit;
    
    UPROPERTY(Config)
    bool bEnableCameraMotionBlur;
    
    UPROPERTY(Config)
    bool bEnablePerObjectMotionBlur;
    
    UPROPERTY(Config)
    bool bEnableCAS;
    
    UPROPERTY(Config)
    EGraphicsQuality GraphicsQualityMode;
    
    UPROPERTY(Config)
    EGraphicsQuality RecommendedGraphicsQualityMode;
    
    UPROPERTY(Config)
    ETextureStreamingQuality TextureStreamingQuality;
    
    UPROPERTY(Config)
    EMaterialQuality MaterialQuality;
    
    UPROPERTY(Config)
    int32 AntiAliasingModeIndex;
    
    UPROPERTY(Config)
    EAnisotropicFilteringType AnisotropicFilteringMode;
    
    UPROPERTY(Config)
    EShadowQuality ShadowQualityMode;
    
    UPROPERTY(Config)
    int32 PerformanceStatsLevel;
    
    UPROPERTY(Config)
    EEnvironmentTextureDetail EnvironmentTextureDetailMode;
    
    UPROPERTY(Config)
    EDrawDistance DrawDistanceMode;
    
    UPROPERTY(Config)
    EEnvironmentDetail EnvironmentDetailMode;
    
    UPROPERTY(Config)
    ETerrainType TerrainMode;
    
    UPROPERTY(Config)
    EFoliageDensity FoliageMode;
    
    UPROPERTY(Config)
    EVolumetricFogType VolumetricFogMode;
    
    UPROPERTY(Config)
    EScreenSpaceReflections ScreenSpaceReflectionsMode;
    
    UPROPERTY(Config)
    ECharacterTextureDetail CharacterTextureDetailMode;
    
    UPROPERTY(Config)
    ECharacterDetail CharacterDetailMode;
    
    UPROPERTY(Config)
    EAmbientOcclusionQuality AmbientOcclusionQualityMode;
    
    UPROPERTY(Config)
    float EdgeDetectionTexelOffset;
    
    UPROPERTY(Config)
    EBenchmarkDataOutputMode BenchmarkDataOutputMode;
    
    UPROPERTY(Config)
    float UISafeFrameScaling;
    
    UPROPERTY(Config)
    float HDRBrightness;
    
    UPROPERTY(Config)
    float Brightness;
    
    UPROPERTY(Config)
    float BlackLevel;
    
    UPROPERTY(Config)
    float HdrUIBrightness;
    
    UPROPERTY(Config)
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;
    
public:
    UPROPERTY(Config)
    FString LastBenchmarkDateTime;
    
    UPROPERTY(Config)
    FString LastBenchmarkDataOutputPath;
    
    UPROPERTY(Config)
    float LastBenchmarkAvgFPS;
    
    UPROPERTY(Config)
    float LastBenchmarkAvgFrameTime;
    
    UPROPERTY(Config)
    float LastBenchmarkAvgCPU;
    
    UPROPERTY(Config)
    float LastBenchmarkAvgGPU;
    
    UPROPERTY(Config)
    float LastBenchmarkLoadTimeSeconds;
    
    UPROPERTY(Config)
    FString AnalyticsTag;
    
    UPROPERTY(Transient)
    EGraphicsQuality OverrideGraphicsQualityMode;
    
    UPROPERTY(Config)
    float TextureStreamingViewBoostScale;
    
    UPROPERTY(Config)
    float TextureStreamingViewBoostScaleOverride;
    
    UPROPERTY(Config)
    float TextureStreamingAdaptiveBoostScale;
    
    UPROPERTY(Config)
    float TextureStreamingAdaptiveBoostScaleOverride;
    
    UPROPERTY(Config)
    int32 TextureStreamingPoolSizeMB;
    
    UPROPERTY(Config)
    int32 TextureStreamingPoolSizeMBOverride;
    
    UPROPERTY(Config)
    bool bHasPerformedDirectXBetaUpgrade;
    
    UOakGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogMode(EVolumetricFogType NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureStreamingQuality(ETextureStreamingQuality NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTerrainDetailMode(ETerrainType NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQualityMode(EShadowQuality NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenSpaceReflectionsMode(EScreenSpaceReflections NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScalePercentage(EResolutionScale NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialQuality(EMaterialQuality NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsQualityMode(EGraphicsQuality NewMode, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimitMode(EFrameRateLimit NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageMode(EFoliageDensity NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentDetailMode(EEnvironmentDetail NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePerObjectMotionBlur(bool NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCAS(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraMotionBlur(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgeDetectionTexelOffset(float NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawDistanceMode(EDrawDistance NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayPerformanceStatsMode(int32 NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFrameRateLimit(int32 NewLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterDetailMode(ECharacterDetail NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBenchmarkDataOutputMode(EBenchmarkDataOutputMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingMode(int32 bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAnisotropicFilteringMode(EAnisotropicFilteringType NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbientOcclusionQualityMode(EAmbientOcclusionQuality NewMode);
    
    UFUNCTION(BlueprintPure)
    EVolumetricFogType GetVolumetricFogMode() const;
    
    UFUNCTION(BlueprintPure)
    ETextureStreamingQuality GetTextureStreamingQuality() const;
    
    UFUNCTION(BlueprintPure)
    ETerrainType GetTerrainDetailMode() const;
    
    UFUNCTION(BlueprintPure)
    EShadowQuality GetShadowQualityMode() const;
    
    UFUNCTION(BlueprintPure)
    EScreenSpaceReflections GetScreenSpaceReflectionsMode() const;
    
    UFUNCTION(BlueprintPure)
    EResolutionScale GetResolutionScalePercentage() const;
    
    UFUNCTION(BlueprintPure)
    EGraphicsQuality GetRecommendedGraphicsQualityMode() const;
    
    UFUNCTION(BlueprintPure)
    EGraphicsQuality GetOverrideGraphicsQualityMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumAntiAliasingModes() const;
    
    UFUNCTION(BlueprintPure)
    EMaterialQuality GetMaterialQuality() const;
    
    UFUNCTION(BlueprintPure)
    EGraphicsQuality GetGraphicsQualityMode() const;
    
    UFUNCTION(BlueprintPure)
    EFrameRateLimit GetFrameRateLimitMode() const;
    
    UFUNCTION(BlueprintPure)
    EFoliageDensity GetFoliageMode() const;
    
    UFUNCTION(BlueprintPure)
    EEnvironmentDetail GetEnvironmentDetailMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnablePerObjectMotionBlur() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableCAS() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableCameraMotionBlur() const;
    
    UFUNCTION(BlueprintPure)
    float GetEdgeDetectionTexelOffset() const;
    
    UFUNCTION(BlueprintPure)
    EDrawDistance GetDrawDistanceMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayPerformanceStatsMode() const;
    
    UFUNCTION(BlueprintCallable)
    EVolumetricFogType GetDefaultVolumetricFogMode();
    
    UFUNCTION(BlueprintCallable)
    ETextureStreamingQuality GetDefaultTextureStreamingQuality();
    
    UFUNCTION(BlueprintCallable)
    ETerrainType GetDefaultTerrainDetailLevel();
    
    UFUNCTION(BlueprintCallable)
    EShadowQuality GetDefaultShadowQualityMode();
    
    UFUNCTION(BlueprintCallable)
    EScreenSpaceReflections GetDefaultScreenSpaceReflectionsMode();
    
    UFUNCTION(BlueprintCallable)
    static EResolutionScale GetDefaultResolutionScalePercentage();
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultPerObjectMotionBlurEnabled();
    
    UFUNCTION(BlueprintCallable)
    EMaterialQuality GetDefaultMaterialQuality();
    
    UFUNCTION(BlueprintCallable)
    EGraphicsQuality GetDefaultGraphicsQualityMode();
    
    UFUNCTION(BlueprintCallable)
    static EFrameRateLimit GetDefaultFrameRateLimitMode();
    
    UFUNCTION(BlueprintCallable)
    EFoliageDensity GetDefaultFoliageMode();
    
    UFUNCTION(BlueprintCallable)
    EEnvironmentDetail GetDefaultEnvironmentDetailMode();
    
    UFUNCTION(BlueprintCallable)
    static float GetDefaultEdgeDetectionTexelOffset();
    
    UFUNCTION(BlueprintCallable)
    EDrawDistance GetDefaultDrawDistanceMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDefaultDisplayPerformanceStatsMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDefaultCustomFrameRateLimit();
    
    UFUNCTION(BlueprintCallable)
    ECharacterDetail GetDefaultCharacterDetailMode();
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultCAS();
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultCameraMotionBlurEnabled();
    
    UFUNCTION(BlueprintCallable)
    static EBenchmarkDataOutputMode GetDefaultBenchmarkDataOutputMode();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDefaultAntiAliasingMode();
    
    UFUNCTION(BlueprintCallable)
    EAnisotropicFilteringType GetDefaultAnisotropicFilteringMode();
    
    UFUNCTION(BlueprintCallable)
    EAmbientOcclusionQuality GetDefaultAmbientOcclusionQualityMode();
    
    UFUNCTION(BlueprintPure)
    int32 GetCustomFrameRateLimit() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterDetail GetCharacterDetailMode() const;
    
    UFUNCTION(BlueprintPure)
    EBenchmarkDataOutputMode GetBenchmarkDataOutputMode() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAntiAliasingModeName(int32 Mode) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAntiAliasingMode() const;
    
    UFUNCTION(BlueprintPure)
    EAnisotropicFilteringType GetAnisotropicFilteringMode() const;
    
    UFUNCTION(BlueprintPure)
    EAmbientOcclusionQuality GetAmbientOcclusionQualityMode() const;
    
};

