#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "OakInventoryMenuFilter.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "EchoDeviceUIController.h"
#include "InventoryListEntryHandle.h"
#include "GbxMenuInputEvent.h"
#include "GFxGearUpExtractionMenu.generated.h"

class UGbxGFxHintWidget;
class USwfMovie;
class UGFxGearUpExtractionMenuInfoPanel;
class UGbxGFxObject;
class UGFxGearUpExtractionMenuBackpack;
class UGbxGFxButton;
class UGFxCurrencyCounterClip;
class UGFxLoadedItemCard;
class UInventoryCategoryData;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxGearUpExtractionMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText TutorialText;
    
    UPROPERTY(EditAnywhere)
    FText ConfirmOfferingBodyText;
    
    UPROPERTY(EditAnywhere)
    FText DialogHeaderTitle;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    float MaxDelayTimeToLoadThumbnails;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> SortFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CountdownCancelHintClip;
    
    UPROPERTY(Transient)
    UGFxGearUpExtractionMenuInfoPanel* InfoPanelClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* OfferingBackpackClip;
    
    UPROPERTY(Transient)
    UGFxGearUpExtractionMenuBackpack* OfferingBackpack;
    
    UPROPERTY(Transient)
    UGbxGFxButton* OfferingButtonClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackBackpackClip;
    
    UPROPERTY(Transient)
    UGFxGearUpExtractionMenuBackpack* BackpackBackpack;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackPrevSortClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackNextSortClip;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* BackpackCurrencyWidgetClip;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* ItemCardClip;
    
    UPROPERTY(Transient)
    int32 AllowableBankOverfill;
    
public:
    UGFxGearUpExtractionMenu();
protected:
    UFUNCTION()
    void OnTargetInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
    UFUNCTION()
    void OnTargetInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnTargetInventoryItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnTargetInventoryItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnMakeOfferButtonUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMakeOfferButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
    UFUNCTION()
    void OnInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnInventoryItemRemoved(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnInventoryItemAdded(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnGearUpThumbnailLoaded() const;
    
    UFUNCTION()
    void OnConfirmExtraction(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extOnCountdownFinished() const;
    
};

