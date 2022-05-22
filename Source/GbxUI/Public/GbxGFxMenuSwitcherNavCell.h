#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GbxGFxMenuSwitcherNavCell.generated.h"

UCLASS(NonTransient)
class GBXUI_API UGbxGFxMenuSwitcherNavCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bOuterFocusedState;
    
public:
    UGbxGFxMenuSwitcherNavCell();
};

