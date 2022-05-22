#pragma once
#include "CoreMinimal.h"
#include "GFxNewsMenuFullscreenData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FGFxNewsMenuFullscreenData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText NewsLabel;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> NewsImage;
    
    OAKGAME_API FGFxNewsMenuFullscreenData();
};

