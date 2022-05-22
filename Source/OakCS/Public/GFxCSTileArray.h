#pragma once
#include "CoreMinimal.h"
#include "GFxCSTileArray.generated.h"

class UGFxCSPuzzleTile;

USTRUCT(BlueprintType)
struct OAKCS_API FGFxCSTileArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UGFxCSPuzzleTile*> Tiles;
    
    FGFxCSTileArray();
};

