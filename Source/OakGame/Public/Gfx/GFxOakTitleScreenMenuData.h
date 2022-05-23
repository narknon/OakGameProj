#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuData.h"
#include "GFxOakTitleScreenMenuData.generated.h"

class UGbxMenuData;

UCLASS()
class UGFxOakTitleScreenMenuData : public UGbxGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* MenuToSwitchTo;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxGFxMenuData* FirstBootMenu;
    
    UGFxOakTitleScreenMenuData();
};

