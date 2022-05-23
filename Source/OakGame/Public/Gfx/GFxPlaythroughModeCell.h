#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "PlaythroughSelectionModeEntry.h"
#include "GFxPlaythroughModeCell.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient, Config=Game)
class OAKGAME_API UGFxPlaythroughModeCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ModeIcon;
    
    UPROPERTY(Transient)
    FPlaythroughSelectionModeEntry ModeData;
    
public:
    UGFxPlaythroughModeCell();
};

