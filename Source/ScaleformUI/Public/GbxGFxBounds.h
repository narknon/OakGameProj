#pragma once
#include "CoreMinimal.h"
#include "GbxGFxBounds.generated.h"

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FGbxGFxBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Top;
    
    UPROPERTY(BlueprintReadWrite)
    float Left;
    
    UPROPERTY(BlueprintReadWrite)
    float Bottom;
    
    UPROPERTY(BlueprintReadWrite)
    float Right;
    
    FGbxGFxBounds();
};

