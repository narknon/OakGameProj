#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuPaperDollSlotInfo.h"
#include "GFxInventoryMenuEquipToSlot.generated.h"

class UGFxInventoryItemWidget;
class UGFxInventoryMenuTrinketButton;
class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxInventoryMenuEquipToSlot {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxInventoryItemWidget* ItemWidget;
    
    UPROPERTY(Transient)
    UGFxInventoryMenuTrinketButton* TrinketWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconWidget;
    
    UPROPERTY(Transient)
    bool bTrinketEnabled;
    
    UPROPERTY(Transient)
    FOakInventoryMenuPaperDollSlotInfo SlotInfo;
    
    FGFxInventoryMenuEquipToSlot();
};

