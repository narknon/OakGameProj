#pragma once
#include "CoreMinimal.h"
#include "GFxBackpackWidgetItem.h"
#include "OakThumbnailManagerIcon.h"
#include "EOakInventoryItemWidgetDisabledReason.h"
#include "UObject/NoExportTypes.h"
#include "GFxInventoryItemWidget.generated.h"

class UGbxGFxHintWidget;
class UInventorySlotData;

UCLASS(NonTransient)
class OAKGAME_API UGFxInventoryItemWidget : public UGFxBackpackWidgetItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bIsNewItemWidgetContent;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ButtonHelpClip;
    
    UPROPERTY(Transient)
    EOakInventoryItemWidgetDisabledReason DisabledReason;
    
    UPROPERTY(Transient)
    bool bEquippingToThis;
    
    UPROPERTY(Transient)
    UInventorySlotData* SlotData;
    
    UPROPERTY(Transient)
    FName FilterTypeId;
    
    UPROPERTY(Transient)
    FVector2D WidgetLineAnchorLocationAbsolute;
    
    UPROPERTY(Transient)
    FVector2D WidgetLineAnchorLocationViewport;
    
    UPROPERTY(Transient)
    bool bAnchorLocationValid;
    
    UPROPERTY(Transient)
    FOakThumbnailManagerIcon IconData;
    
    UPROPERTY(Transient)
    bool bUseCosmeticLabel;
    
    UPROPERTY(Transient)
    bool bAppearsDisabled;
    
    UPROPERTY(Transient)
    bool bUseTrashButtonStates;
    
    UPROPERTY(Transient)
    FString LastFavoriteTrashFrame;
    
public:
    UGFxInventoryItemWidget();
};

