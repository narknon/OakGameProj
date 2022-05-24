#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSTileArray.h"
#include "GFxCSPuzzleGuide.generated.h"

UCLASS(NonTransient)
class OAKCS_API UGFxCSPuzzleGuide : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGFxCSTileArray> GuideTiles;
    
public:
    UGFxCSPuzzleGuide();
};

