#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoverBodySinusOutrunner.generated.h"

USTRUCT(BlueprintType)
struct FHoverBodySinusOutrunner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HoverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amplitude;
    
    OAKGAME_API FHoverBodySinusOutrunner();
};

