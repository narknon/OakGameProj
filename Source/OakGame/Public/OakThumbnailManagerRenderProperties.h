#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakThumbnailManagerLightProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ThumbnailParameters -FallbackName=ThumbnailParameters
#include "Engine/Scene.h"
#include "OakThumbnailManagerRenderProperties.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakThumbnailManagerRenderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform ItemTransform;
    
    UPROPERTY(EditAnywhere)
    FOakThumbnailManagerLightProperties LightProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakThumbnailManagerLightProperties> AdditionalLights;
    
    UPROPERTY(EditAnywhere)
    FThumbnailParameters ThumbnailParameters;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    FOakThumbnailManagerRenderProperties();
};

