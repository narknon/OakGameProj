#pragma once
#include "CoreMinimal.h"
#include "GbxGFxDialogBox.h"
#include "GbxGFxDirectXUpgradeDialogBox.generated.h"

class UGbxGFxSlider;

UCLASS()
class UGbxGFxDirectXUpgradeDialogBox : public UGbxGFxDialogBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxSlider* MsgScrollBar;
    
public:
    UGbxGFxDirectXUpgradeDialogBox();
};

