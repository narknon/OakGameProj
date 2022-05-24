#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSTileArray.h"
#include "GFxCSPuzzleGrid.generated.h"

class UGFxCSTokenTile;

UCLASS(NonTransient)
class OAKCS_API UGFxCSPuzzleGrid : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGFxCSTileArray> PuzzleTiles;
    
    UPROPERTY()
    TArray<FGFxCSTileArray> GridTiles;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GridMask;
    
    UPROPERTY(Transient)
    UGFxCSTokenTile* LooseToken;
    
public:
    UGFxCSPuzzleGrid();
};

