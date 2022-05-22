#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakThumbnailManagerConfig.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakThumbnailManagerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ThumbnailLoadFrequency;
    
    UPROPERTY(EditAnywhere)
    int32 MaxThumbnails;
    
    UPROPERTY(EditAnywhere)
    FIntPoint ThumbnailSize;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ThumbnailMaterial;
    
    FOakThumbnailManagerConfig();
};

