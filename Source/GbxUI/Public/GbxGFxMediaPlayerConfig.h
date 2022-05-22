#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxMediaPlayerConfig.generated.h"

class UMediaPlayer;
class UGbxMediaData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxMediaPlayerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(EditAnywhere)
    UGbxMediaData* MediaData;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* MediaMaterial;
    
    UPROPERTY(EditAnywhere)
    FVector2D MediaDimensions;
    
    UPROPERTY(EditAnywhere)
    FString ExternalTextureName;
    
    FGbxGFxMediaPlayerConfig();
};

