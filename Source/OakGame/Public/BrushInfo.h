#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "BrushInfo.generated.h"

USTRUCT(BlueprintType)
struct FBrushInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSlateBrush SlateBrush;
    
    OAKGAME_API FBrushInfo();
};

