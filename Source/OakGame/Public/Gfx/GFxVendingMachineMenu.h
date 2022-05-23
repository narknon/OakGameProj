#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameResourcePoolReference.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "GFxBackpackWidgetConfig.h"
#include "UObject/NoExportTypes.h"
#include "EchoDeviceUIController.h"
#include "UObject/NoExportTypes.h"
#include "VendingTabOrder.h"
#include "GFxCurrencyCounterCategoryData.h"
#include "VendingIDToSocketNameMap.h"
#include "VendingObjectToSocketLocationMap.h"
#include "EGFxVendingMachineMenuBackpackState.h"
#include "InventoryListEntryHandle.h"
#include "GFxVendingMenuConfig.h"
#include "OakInventoryMenuFilter.h"
#include "GFxVendingMachineDisplayMode.h"
#include "GFxBackpackWidget.h"
#include "EVendingMachineScrollDirection.h"
#include "EVendingMachineBuyType.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxVendingMachineMenu.generated.h"

class USwfMovie;
class UGFxItemCard;
class UGbxMenuData;
class UGFxBillboardComponent;
class UGbxGFxButton;
class UOakThumbnailManager;
class UGbxAmmoTypeData;
class UGameResourceData;
class AVendingMachine;
class UInventoryCategoryData;
class AOakPlayerController;
class AOakCharacter;
class UInventoryListComponent;
class UGbxGFxObject;
class UGFxLoadedItemCardBase;
class AActor;
class UGFxVendingMachineBackpackItemWidget;
class UInventoryShopComponent;
class AVendingMachineProxy;
class UPlayerShopManagerComponent;
class UGFxVendingMachinePlayerWidget;
class UInventorySlotData;

UCLASS()
class UGFxVendingMachineMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGFxBackpackWidgetConfig BackpackWidgetConfig;
    
    UPROPERTY(EditAnywhere)
    int32 BackpackVisibleCells;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSpacing;
    
    UPROPERTY(EditAnywhere)
    FVector2D ItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    FName BuyCameraState;
    
    UPROPERTY(EditAnywhere)
    FName SellCameraState;
    
    UPROPERTY(EditAnywhere)
    FName CompareFromMachineCameraState;
    
    UPROPERTY(EditAnywhere)
    FName CompareFromInventoryCameraState;
    
    UPROPERTY(EditAnywhere)
    FName BuyEchoOrientation;
    
    UPROPERTY(EditAnywhere)
    FName SellEchoOrientation;
    
    UPROPERTY(EditAnywhere)
    FName CompareFromMachineEchoOrientation;
    
    UPROPERTY(EditAnywhere)
    FName CompareFromInventoryEchoOrientation;
    
    UPROPERTY(EditAnywhere)
    FName DefaultProjectionFXWidgetName;
    
    UPROPERTY(EditAnywhere)
    float ItemCardScale;
    
    UPROPERTY(EditAnywhere)
    float ItemCardCurrencyWidgetTime;
    
    UPROPERTY(EditAnywhere)
    float ItemCardScaleSplitScreen;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxItemCard> ItemCardClass;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardSwf;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* ItemInspectionMenuData;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UGFxBillboardComponent* GFxItemInfoDisplayComponent;
    
    UPROPERTY(EditAnywhere)
    float RadiusDebug;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> ShouldUseVec;
    
    UPROPERTY(EditAnywhere)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> ShelfScorecardOffsets;
    
    UPROPERTY(EditAnywhere)
    float AmountToModify;
    
    UPROPERTY(EditAnywhere)
    FVendingTabOrder NavigationTabOrder;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxCurrencyCounterCategoryData> CounterCategories;
    
    UPROPERTY(EditAnywhere)
    FName AddedToInventorySoundFX;
    
    UPROPERTY(EditAnywhere)
    FName RemovedFromInventorySoundFX;
    
    UPROPERTY(EditAnywhere)
    FName WarningSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName OpenBackpackFX;
    
    UPROPERTY(EditAnywhere)
    FName BuyItemSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName SellItemSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName HealthFilledFX;
    
    UPROPERTY(EditAnywhere)
    FName AmmoFilledFX;
    
    UPROPERTY(EditAnywhere)
    FName IODDisplayedFX;
    
    UPROPERTY(EditAnywhere)
    FName SoldAllJunkFX;
    
    UPROPERTY(EditAnywhere)
    TArray<FVendingIDToSocketNameMap> IdToSockets;
    
    UPROPERTY(Transient)
    TArray<FVendingObjectToSocketLocationMap> ObjectToSocketLocations;
    
    UPROPERTY(Transient)
    int32 CurrentSocketMap;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetSpinnerHeightOverride;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetCostSpinTime;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetPauseOnNewValueTime;
    
    UPROPERTY(EditAnywhere)
    int32 MaxThumbnails;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxAmmoTypeData> GrenadeAmmoType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGameResourceData> GrenadePool;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UGameResourceData>> AmmoTypesToTrack;
    
private:
    UPROPERTY(Transient)
    bool bQueueRefreshThumbnails;
    
    UPROPERTY(Transient)
    bool bBackpackHidden;
    
    UPROPERTY(Transient)
    TArray<FInventoryListEntryHandle> CurrentInventory;
    
    UPROPERTY(Transient)
    int32 CurrentInventoryMaxSize;
    
    UPROPERTY(Transient)
    bool bNeedsBackpackUpdateOnTick;
    
    UPROPERTY(Transient)
    bool bSetIndexToZeroForBackpackRefresh;
    
    UPROPERTY(Transient)
    EGFxVendingMachineMenuBackpackState CurrentBackpackState;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInventoryCategoryData> CurrentPlayerWidgetCategory;
    
    UPROPERTY(Transient)
    AOakPlayerController* CachedPlayerController;
    
    UPROPERTY(Transient)
    AOakCharacter* CachedOakCharacter;
    
    UPROPERTY(Export, Transient)
    UInventoryListComponent* InventoryList;
    
    UPROPERTY(Transient)
    TMap<UGbxGFxObject*, FVector> ObjectToSocketLocationMap;
    
    UPROPERTY(Export, Transient)
    TArray<UGFxBillboardComponent*> SavedBillboards;
    
    UPROPERTY(EditAnywhere)
    FGFxVendingMenuConfig Config;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* BackpackItemCardLoader;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* VendingItemCardLoader;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CachedCompareInventoryActor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxVendingMachineBackpackItemWidget> CachedComparedBackpackItem;
    
    UPROPERTY()
    TArray<UGbxGFxButton*> NavButtons;
    
    UPROPERTY(Transient)
    int32 CurrentFilterIndex;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuFilter> CurrentFilters;
    
    UPROPERTY(EditAnywhere)
    float BackpackDoubleClickTimeLimit;
    
    UPROPERTY(Transient)
    int32 CurrentNavIndex;
    
    UPROPERTY(Transient)
    bool bWantUpdateEverythingOnNextBagUpdate;
    
    UPROPERTY(Transient)
    AVendingMachineProxy* CachedVendingMachineProxy;
    
    UPROPERTY(Transient)
    AVendingMachine* CachedVendingMachine;
    
    UPROPERTY(Export, Transient)
    UPlayerShopManagerComponent* PlayerShopManager;
    
    UPROPERTY(Export, Transient)
    UInventoryShopComponent* CurrentShopComponent;
    
    UPROPERTY(Transient)
    UGbxGFxButton* VendingMachineFocusWidget;
    
    UPROPERTY(Transient)
    GFxVendingMachineDisplayMode CurrentDisplayMode;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NavBarContainerClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavBuyButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavBuyBackButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavSellButton;
    
    UPROPERTY(Transient)
    UGFxItemCard* InspectionItemCard;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget Backpack;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MarcusTipContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemOfTheDayClip;
    
    UPROPERTY(Transient)
    UGFxVendingMachinePlayerWidget* VendingPlayerWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackOuterContainerClip;
    
    UPROPERTY(EditAnywhere)
    float MaxDelayTimeToLoadThumbnails;
    
    UPROPERTY(EditAnywhere)
    FString VendingPlayerWidgetString;
    
    UPROPERTY(EditAnywhere)
    FString MarcusHeadClipString;
    
    UPROPERTY(EditAnywhere)
    FString MarcusTooltipContainerString;
    
    UPROPERTY(EditAnywhere)
    FString ItemOfTheDayShelfString;
    
    UPROPERTY(EditAnywhere)
    FString VendingMachineListBoxID;
    
    UPROPERTY(EditAnywhere)
    FString BuyStateNavID;
    
    UPROPERTY(EditAnywhere)
    FString BuyBackStateNavID;
    
    UPROPERTY(EditAnywhere)
    FString SellStateNavID;
    
    UPROPERTY(EditAnywhere)
    FString StateTextID;
    
    UPROPERTY(EditAnywhere)
    FString iodTimerTextID;
    
    UPROPERTY(EditAnywhere)
    FString ItemOfTheDayTextID;
    
    UPROPERTY(EditAnywhere)
    FString NavMenuID;
    
    UPROPERTY(EditAnywhere)
    FString NavBuyButtonID;
    
    UPROPERTY(EditAnywhere)
    FString NavBuyBackButtonID;
    
    UPROPERTY(EditAnywhere)
    FString NavSellButtonID;
    
    UPROPERTY(EditAnywhere)
    FString NavMenuLeftGlyphID;
    
    UPROPERTY(EditAnywhere)
    FString NavMenuRightGlyphID;
    
    UPROPERTY(EditAnywhere)
    FString MarcusHeadSlotBaseID;
    
    UPROPERTY(EditAnywhere)
    FString BackpackSortID;
    
    UPROPERTY(EditAnywhere)
    FString BackpackHeaderID;
    
    UPROPERTY(EditAnywhere)
    FString BackpackID;
    
    UPROPERTY(EditAnywhere)
    FString PreviousButtonTextClipID;
    
    UPROPERTY(EditAnywhere)
    FString NextButtonTextClipID;
    
    UPROPERTY(EditAnywhere)
    FString MarcusTipContainerID;
    
    UPROPERTY(EditAnywhere)
    FString SmallPlayerHeadID;
    
    UPROPERTY(EditAnywhere)
    FString VendingItemClass;
    
    UPROPERTY(EditAnywhere)
    FText LimitedTimeString;
    
    UPROPERTY(EditAnywhere)
    FText ItemOfTheDayString;
    
    UPROPERTY(EditAnywhere)
    FText CantSellFavoriteText;
    
    UPROPERTY(EditAnywhere)
    FText CantSellItemGenericText;
    
    UPROPERTY(EditAnywhere)
    FText CloseString;
    
    UPROPERTY(EditAnywhere)
    FText BackString;
    
    UPROPERTY(EditAnywhere)
    FText CompareString;
    
    UPROPERTY(EditAnywhere)
    FText BuyString;
    
    UPROPERTY(EditAnywhere)
    FText BuyBackString;
    
    UPROPERTY(EditAnywhere)
    FText SellString;
    
    UPROPERTY(EditAnywhere)
    FText SellJunkString;
    
    UPROPERTY(EditAnywhere)
    FText InspectString;
    
public:
    UGFxVendingMachineMenu();
private:
    UFUNCTION()
    void OnVendingSelectionChanged() const;
    
    UFUNCTION()
    void OnVendingMachineScroll(EVendingMachineScrollDirection ScrollDirection) const;
    
    UFUNCTION()
    void OnVendingMachineDirty() const;
    
    UFUNCTION()
    void OnVendingMachineBoughtItem(EVendingMachineBuyType BuyType, AActor* InventoryActor) const;
    
    UFUNCTION()
    void OnVendingItemClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnRigthItemCardReady() const;
    
    UFUNCTION()
    void OnNavMenuItemClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLeftItemCardReady() const;
    
    UFUNCTION()
    void OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
    UFUNCTION()
    void OnInventoryItemUpdated(const FInventoryListEntryHandle& ItemHandle) const;
    
    UFUNCTION()
    void OnInventoryItemUnequipped(AActor* ChangedActor, UInventorySlotData* SlotData) const;
    
    UFUNCTION()
    void OnInventoryItemRemoved(const FInventoryListEntryHandle& ItemHandle) const;
    
    UFUNCTION()
    void OnInventoryItemEquipped(AActor* ChangedActor, UInventorySlotData* SlotData) const;
    
    UFUNCTION()
    void OnInventoryItemAdded(const FInventoryListEntryHandle& ItemHandle) const;
    
    UFUNCTION()
    void OnBackpackGridItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnBackpackGridItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnAmmoMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const;
    
    UFUNCTION()
    void OnAmmoCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const;
    
};

