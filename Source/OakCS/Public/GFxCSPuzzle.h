#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSPuzzle.generated.h"

class UGFxCSPuzzleGrid;
class UGFxCSTokenPool;
class UGFxCSPuzzleGuide;

UCLASS(NonTransient)
class OAKCS_API UGFxCSPuzzle : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxCSPuzzleGrid* PuzzleGrid;
    
    UPROPERTY(Transient)
    UGFxCSPuzzleGuide* PuzzleGuide;
    
    UPROPERTY(Transient)
    UGFxCSTokenPool* TokenPool;
    
public:
    UGFxCSPuzzle();
};

