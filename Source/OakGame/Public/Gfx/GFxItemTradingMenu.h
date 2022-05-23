#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuItemGrouping.h"
#include "GbxGFxMenu.h"
#include "UObject/NoExportTypes.h"
#include "GFxInventoryMenuConfig.h"
#include "OakInventoryMenuFilter.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "GFxBackpackWidget.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxItemTradingMenu.generated.h"

class USwfMovie;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UGFxLoadedItemCard;
class UGFxItemTradingMenuOffer;
class UGbxTextField;
class UGFxCurrencyCounterClip;
class UGFxItemTradingBackpackItem;
class UGbxGFxButton;
class UOakThumbnailManager;

UCLASS()
class UGFxItemTradingMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGFxInventoryMenuConfig Config;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuFilter> CurrentFilters;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    int32 NumNonBackpackThumbnails;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByType;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByManufacturer;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSizeTwoColumn;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSpacingTwoColumn;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* CountdownOverlay;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CountdownCancelHint;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* ItemCard;
    
    UPROPERTY(Transient)
    UGFxItemTradingMenuOffer* OfferingPanel;
    
    UPROPERTY(Transient)
    UGFxItemTradingMenuOffer* UnfocusedOfferingPanel;
    
    UPROPERTY(Transient)
    UGFxItemTradingMenuOffer* ReceivingPanel;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget BackpackWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* FilterTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* SortTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackNextHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackPrevHintClip;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* HeldCashCounter;
    
    UPROPERTY(Transient)
    FOakInventoryMenuFilter CurrentBackpackFilter;
    
    UPROPERTY(Transient)
    UGFxItemTradingBackpackItem* CurrentlyPopulatingOfferSlot;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
public:
    UGFxItemTradingMenu();
    UFUNCTION()
    void OnTradeButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
private:
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
public:
    UFUNCTION()
    void OnDuelButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
private:
    UFUNCTION()
    void OnBackpackGridItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnBackpackGridItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extOnCountdownFinished() const;
    
};

