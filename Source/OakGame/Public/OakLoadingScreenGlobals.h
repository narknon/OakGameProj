#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakLoadingScreenGlobals.generated.h"

class UFont;
class UMaterialInterface;
class UStaticMesh;
class UTexture2D;
class ULocalizedOverlays;

UCLASS()
class OAKGAME_API UOakLoadingScreenGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> VaultLogoMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MeshScale;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator MeshRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator MeshRotationRate;
    
    UPROPERTY(EditDefaultsOnly)
    float CameraDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float FOVAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> BackgroundMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> PerMapBackgrounds;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> PerMapBackgrounds_4K;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> FallbackBackground;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMaterialInterface> FallbackBackground_4K;
    
    UPROPERTY(EditDefaultsOnly)
    float BackgroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UFont> LoadingScreenFont;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, TSoftObjectPtr<UFont>> LocaleToLoadingScreenFont;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TooltipSize;
    
    UPROPERTY(EditDefaultsOnly)
    float TooltipDistanceFromEdge;
    
    UPROPERTY(EditDefaultsOnly)
    float TooltipDuration;
    
    UPROPERTY(EditAnywhere)
    FText LoadingText;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> LoadingTooltips;
    
    UPROPERTY(EditAnywhere)
    bool bAppendGearUpModeTooltipsInsteadOfReplacing;
    
    UPROPERTY(EditAnywhere)
    float GearUpModeTooltipWeight;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> GearUpLoadingTooltips;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> VoiceIcon;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, TSoftObjectPtr<UTexture2D>> VoicePlatformIcons;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor VoiceTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VoiceTextSize;
    
    UPROPERTY(EditDefaultsOnly)
    float VoiceWidthMarginPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    float VoiceHeightPositionPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<ULocalizedOverlays>> MovieSubtitlesMap;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SubtitlesSize;
    
    UPROPERTY(EditDefaultsOnly)
    float SubtitlesDistanceFromEdge;
    
    UPROPERTY(EditDefaultsOnly)
    float HideLoadingScreenDelay;
    
    UOakLoadingScreenGlobals();
};

