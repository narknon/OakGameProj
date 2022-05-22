#pragma once
#include "CoreMinimal.h"
#include "GFxInventoryMenuUnlockLookupItem.h"
#include "GbxDragDropContainerInterface.h"
#include "GFxStatusMenuSubmenu.h"
#include "UObject/NoExportTypes.h"
#include "GFxInventoryMenuConfig.h"
#include "GFxInventoryMenuSwapItem.h"
#include "GFxInventoryMenuEquipToSlot.h"
#include "EGFxInventoryMenuBackpackSize.h"
#include "OakInventoryMenuFilter.h"
#include "GFxBackpackWidget.h"
#include "EGFxInventoryMenuFocusSide.h"
#include "InventoryListEntryHandle.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxInventoryMenu.generated.h"

class UGFxInventoryItemWidget;
class UGbxInputRebindCategory;
class UGbxGFxDragDropManager;
class UGbxGFxHintWidget;
class UGFxInventoryMenuTrinketButton;
class UInventoryCategoryData;
class UInventorySlotData;
class UGbxGFxButton;
class UOakThumbnailManager;
class UGbxTextField;
class UGFxLoadedItemCardBase;
class UGFxInventoryFeedbackWidget;
class UGbxGFxObject;
class UGFxTutorialWidget;
class UGFxCurrencyCounterClip;
class UGFxInventoryMenuDragObject;
class UWeaponTrinketPartData;
class AActor;
class UOakInventoryCustomizationPartData;
class AWeapon;

UCLASS()
class OAKGAME_API UGFxInventoryMenu : public UGFxStatusMenuSubmenu, public IGbxDragDropContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGFxInventoryMenuConfig Config;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxInventoryMenuUnlockLookupItem> ManufacturerToUnlockTextLookupTable;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSizeTwoColumn;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSpacingTwoColumn;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSizeOneColumn;
    
    UPROPERTY(EditAnywhere)
    FVector2D BackpackCellSpacingOneColumn;
    
    UPROPERTY(EditAnywhere)
    FText AmmoLabelText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxInputRebindCategory> KeyBindCategory_Common;
    
    UPROPERTY(EditAnywhere)
    float MaxDelayTimeToLoadThumbnails;
    
    UPROPERTY(Transient)
    FGFxInventoryMenuSwapItem ItemSwapSource;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxInventoryItemWidget> LastFocusedPaperDollWidget;
    
    UPROPERTY()
    UGbxGFxDragDropManager* DragDropManager;
    
    UPROPERTY(Transient)
    int32 InventoryEventDisabledCount;
    
    UPROPERTY(Transient)
    TArray<FGFxInventoryMenuEquipToSlot> PaperDollSlots;
    
    UPROPERTY(Transient)
    UGFxInventoryMenuTrinketButton* EquippingToTrinketButton;
    
    UPROPERTY(Transient)
    int32 CurrentFilterIndex;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInventoryCategoryData> CurrentFilterCategory;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInventorySlotData> CurrentFilterSlotData;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuFilter> CurrentFilters;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* TrinketThumbnailManager;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* LeftItemCard;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* RightItemCard;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxInventoryItemWidget> LeftItemCardTargetWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxInventoryItemWidget> RightItemCardTargetWidget;
    
    UPROPERTY(Transient)
    UGFxInventoryFeedbackWidget* PaperDollFeedbackWidget;
    
    UPROPERTY(Transient)
    UGFxInventoryFeedbackWidget* BackpackFeedbackWidget;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget LargeBackpackWidget;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget SmallBackpackWidget;
    
    UPROPERTY(Transient)
    UGbxGFxButton* BackpackBrowseButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackNextHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackPrevHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EquippedSlotsClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SplitScreenPaperDollPageUpButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SplitScreenPaperDollPageDownButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SplitScreenPaperDollPageBackground;
    
    UPROPERTY(Transient)
    UGFxTutorialWidget* TutorialWidget;
    
    UPROPERTY(Transient)
    UGFxInventoryMenuDragObject* DragInventoryItem;
    
    UPROPERTY(Transient)
    EGFxInventoryMenuFocusSide FocusSide;
    
    UPROPERTY(Transient)
    EGFxInventoryMenuBackpackSize BackpackSize;
    
    UPROPERTY(Transient)
    bool bIsInspecting;
    
    UPROPERTY(Transient)
    bool bIsBeastmaster;
    
    UPROPERTY(Transient)
    bool bHasExtraArtifacts;
    
    UPROPERTY(Transient)
    bool bStandInHasBeenShown;
    
    UPROPERTY(Transient)
    TArray<UWeaponTrinketPartData*> UnlockedTrinkets;
    
    UPROPERTY(Transient)
    TArray<FInventoryListEntryHandle> CurrentInventory;
    
    UPROPERTY(Transient)
    int32 CurrentInventoryMaxSize;
    
    UPROPERTY(Transient)
    int32 UnequipToTargetIndex;
    
    UPROPERTY(Transient)
    int32 PaperDollElementalIndex;
    
    UPROPERTY(Transient)
    int32 BackpackElementalIndex;
    
    UPROPERTY(Transient)
    bool bBackpackIsTrinkets;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextClip;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* CashCounterClip;
    
public:
    UGFxInventoryMenu();
protected:
    UFUNCTION()
    void OnTrinketUnequipped(UWeaponTrinketPartData* Trinket, UInventorySlotData* SlotData) const;
    
    UFUNCTION()
    void OnTrinketEquipped(UWeaponTrinketPartData* Trinket, UInventorySlotData* SlotData) const;
    
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnSplitScreenPaperDollPageButtonClicked(UGbxGFxButton* UserWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRefreshEverything() const;
    
    UFUNCTION()
    void OnPaperDollTrinketClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPaperDollSlotPressed(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPaperDollSlotClicked(UGbxGFxButton* Widget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPaperDollItemCardReady() const;
    
    UFUNCTION()
    void OnPaperDollarItemCardElementalUpdated(const FString& NewElementalFrameName) const;
    
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
    void OnInventoryCustomizationUnlocked(UOakInventoryCustomizationPartData* CustomizationPart) const;
    
    UFUNCTION()
    void OnCurrentWeaponChanged(AWeapon* EquippedWeapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnCurrentWeaponAmmoCountChanged() const;
    
    UFUNCTION()
    void OnBrowseBackpackButtonClicked(UGbxGFxButton* UserWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackpackSelectionChanged(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnBackpackItemPressed(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackpackItemCardReady() const;
    
    UFUNCTION()
    void OnBackpackItemCardElementalUpdated(const FString& NewElementalFrameName) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

