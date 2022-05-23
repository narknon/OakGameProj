#pragma once
#include "CoreMinimal.h"
#include "EGFxInventoryMenuFocusSide.h"
#include "GFxInventoryMenuSwapItem.generated.h"

class UObject;
class UGFxInventoryItemWidget;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxInventoryMenuSwapItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EGFxInventoryMenuFocusSide Side;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxInventoryItemWidget> ItemWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> ItemObject;
    
public:
    FGFxInventoryMenuSwapItem();
};

