#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "UObject/NoExportTypes.h"
#include "OakInventoryMenuPaperDollSlotInfo.h"
#include "OakInventoryMenuFilter.h"
#include "OakInventoryMenuItemGrouping.h"
#include "GFxMenuTutorialCollection.h"
#include "UObject/NoExportTypes.h"
#include "GFxBackpackWidgetConfig.h"
#include "GFxInventoryMenuConfig.generated.h"

class UInventoryCategoryData;
class UGbxAmmoTypeData;
class UGbxMenuData;
class USwfMovie;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxInventoryMenuConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* WeaponCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* GrenadeCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ShieldCategory;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* GoldenKeyResourceData;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ErediumResourceData;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* MoneyResourceData;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* VaultCoinResourceData;
    
    UPROPERTY(EditAnywhere)
    bool bReturnToBackpackWhenEquippingFromIt;
    
    UPROPERTY(EditAnywhere)
    bool bClearAllNewnessWhenLeavingMenu;
    
    UPROPERTY(EditAnywhere)
    bool bEnableInspect;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectionHighlightColorForItemCard;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SelectionComparisonColorForItemCard;
    
    UPROPERTY(EditAnywhere)
    float ItemCardLineThickness;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> PageFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByType;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuItemGrouping> ItemGroupingsByManufacturer;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_Drop;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_DropByHolding;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_TrashFavorite;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_Inspect;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_Unequip;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuPaperDollSlotInfo> PaperDollSlotSetup;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAmmoTypeData*> AmmoTypes;
    
    UPROPERTY(EditAnywhere)
    UGbxAmmoTypeData* GrenadeAmmoType;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* ItemInspectionMenuData;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    FVector2D ItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    float ItemCardScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D CompareItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    float CompareItemCardScale;
    
    UPROPERTY(EditAnywhere)
    FGFxBackpackWidgetConfig BackpackConfig;
    
    UPROPERTY(EditAnywhere)
    int32 TrinketIconsReserveCount;
    
    UPROPERTY(EditAnywhere)
    float TotalCurrencySpinnerHeightOverride;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetPauseOnNewValueTime;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetCostSpinTime;
    
    UPROPERTY(EditAnywhere)
    FText TrinketsText;
    
    UPROPERTY(EditAnywhere)
    FGFxMenuTutorialCollection Tutorials;
    
    UPROPERTY(EditAnywhere)
    FName FirstBootTutorial;
    
    UPROPERTY(EditAnywhere)
    FName GearUpModeTutorial;
    
    UPROPERTY(EditAnywhere)
    int32 LargeBackpackVisibleCells;
    
    UPROPERTY(EditAnywhere)
    int32 SmallBackpackVisibleCells;
    
    UPROPERTY(EditAnywhere)
    bool bResortBackpackWhenAddingAndRemovingItems;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeDragStart;
    
    FGFxInventoryMenuConfig();
};

