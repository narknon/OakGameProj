#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxBackpackWidgetItem.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxBackpackWidgetItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FOakUIInventoryItemDisplayInfo DisplayInfo;
    
public:
    UGFxBackpackWidgetItem();
};

