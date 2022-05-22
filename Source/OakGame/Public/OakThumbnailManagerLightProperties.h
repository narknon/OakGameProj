#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakThumbnailManagerLightProperties.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakThumbnailManagerLightProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator Direction;
    
    UPROPERTY(EditAnywhere)
    float Brightness;
    
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    FOakThumbnailManagerLightProperties();
};

