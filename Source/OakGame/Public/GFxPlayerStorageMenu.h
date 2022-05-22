#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "EGFxPlayerStorageMenuState.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "OakInventoryMenuFilter.h"
#include "UObject/NoExportTypes.h"
#include "EchoDeviceUIController.h"
#include "GFxPlayerStorageBag.h"
#include "GbxMenuInputEvent.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "InventoryListEntryHandle.h"
#include "GFxPlayerStorageMenu.generated.h"

class UOakInventoryListComponent;
class UGbxMenuData;
class USwfMovie;
class UOakThumbnailManager;
class UGbxGFxObject;
class UGFxPlayerStorageListCapacityObject;
class UGFxPlayerStorageNavObject;
class UGFxPlayerStorageHeader;
class UGFxLoadedItemCardBase;
class AActor;

UCLASS()
class UGFxPlayerStorageMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText BackpackLabel;
    
    UPROPERTY(EditAnywhere)
    FText BankLabel;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* ItemInspectionMenuData;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> SortFilters;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuFilter> CurrentFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceDepositIdleScreenName;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBackpackSize;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBankSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellBounds;
    
    UPROPERTY(EditAnywhere)
    FVector2D CompareBackpackCellBounds;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSpacing;
    
    UPROPERTY(EditAnywhere)
    int32 NumBigBagCellsFullScreen;
    
    UPROPERTY(EditAnywhere)
    int32 NumBigBagCellsSplitScreen;
    
    UPROPERTY(EditAnywhere)
    int32 NumCompareBagCellsFullScreen;
    
    UPROPERTY(EditAnywhere)
    int32 NumCompareBagCellsSplitScreen;
    
    UPROPERTY(EditAnywhere)
    int32 NumBigBagColumns;
    
    UPROPERTY(EditAnywhere)
    float MaxDelayTimeToLoadThumbnails;
    
private:
    UPROPERTY(Transient)
    EGFxPlayerStorageMenuState MenuState;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakInventoryListComponent> BankInventory;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakInventoryListComponent> CharacterInventory;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StorageContainerClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CompareContainerLeftClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CompareContainerRightClip;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageListCapacityObject* ListCapacityPanelClip;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageListCapacityObject* ListCapacityPanelLeftClip;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageNavObject* NavClip;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageHeader* StorageHeader;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* ItemCard1Clip;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* ItemCard2Clip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxLoadedItemCardBase> BigBagItemCard;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxLoadedItemCardBase> CompareItemCards[2];
    
    UPROPERTY(Transient)
    bool bWaitingForUpdateFromServer;
    
    UPROPERTY(Transient)
    bool bRefreshBagsNextTick;
    
    UPROPERTY(Transient)
    int32 SortIndex;
    
    UPROPERTY(Transient)
    int32 NumItemCardsLoading;
    
    UPROPERTY(Transient)
    bool bMenuHasStarted;
    
    UPROPERTY(Transient)
    bool bNeedsIconsRefreshed;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CompareSourceItem;
    
    UPROPERTY(Transient)
    EGFxPlayerStorageMenuState StateBeforeCompare;
    
    UPROPERTY(Transient)
    FGFxPlayerStorageBag PagedBigBag;
    
    UPROPERTY(Transient)
    FGFxPlayerStorageBag PagedCompareBankBag;
    
    UPROPERTY(Transient)
    FGFxPlayerStorageBag PagedCompareInventoryBag;
    
public:
    UGFxPlayerStorageMenu();
protected:
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnInventoryCompareItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnCompareInventoryBagScrollBarUpdated(float SliderPercentage) const;
    
    UFUNCTION()
    void OnCompareBankBagScrollBarUpdated(float SliderPercentage) const;
    
    UFUNCTION()
    void OnCharacterItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnCharacterItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnCharacterItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnBigBagScrollBarUpdated(float SliderPercentage) const;
    
    UFUNCTION()
    void OnBigBagItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnBigBagItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBankItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnBankItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnBankItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnBankCompareItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void extOnCompareIntroComplete() const;
    
};

