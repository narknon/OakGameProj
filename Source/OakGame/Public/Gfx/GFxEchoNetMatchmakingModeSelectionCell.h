#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxEchoNetMatchmakingModeSelectionCell.generated.h"

class UGFxEchoNetMatchmakingModeBackgroundWidget;
class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxEchoNetMatchmakingModeSelectionCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingModeBackgroundWidget* StandardBgClip;
    
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingModeBackgroundWidget* FocusedBgClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeImageClip;
    
public:
    UGFxEchoNetMatchmakingModeSelectionCell();
};

