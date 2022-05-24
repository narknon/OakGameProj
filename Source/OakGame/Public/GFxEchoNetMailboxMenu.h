#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GFxEchoNetSubMenu.h"
#include "GbxGFxPooledGridListFullConfig.h"
#include "GFxBackpackWidgetConfig.h"
#include "OakInventoryMenuFilter.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxEchoNetMailboxMenu_Adjustment.h"
#include "UObject/NoExportTypes.h"
#include "GFxBackpackWidget.h"
#include "GbxGFxListCellUpdateInfo.h"
#include "GbxMenuInputEvent.h"
#include "OakThumbnailManagerIcon.h"
#include "GFxEchoNetMailboxMenu.generated.h"

class UGbxGFxPooledGridList;
class UInventoryCategoryData;
class UGFxEchoNetMailboxListCell;
class USwfMovie;
class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxSlider;
class UGFxLoadedItemCard;
class UGbxGFxHintWidget;
class UOakThumbnailManager;
class UOakInventoryBalanceStateComponent;
class AActor;
class UInventoryBalanceStateComponent;
class UGFxEchoNetMailboxFriendCell;
class UGameStatData;
class UOakInventoryListComponent;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxEchoNetMailboxMenu : public UGFxEchoNetSubMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    FGFxBackpackWidgetConfig BackpackWidgetConfig;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* GoldenKeyResourceData;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> SortFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig FriendsListConfig;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig FriendsListConfigSplit;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig MailListConfig;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig MailListConfigSplit;
    
    UPROPERTY(EditAnywhere)
    FGFxEchoNetMailboxMenu_Adjustment InspectRecipientContextAdjustment;
    
    UPROPERTY(EditAnywhere)
    FGFxEchoNetMailboxMenu_Adjustment InspectSenderContextAdjustment;
    
    UPROPERTY(EditAnywhere)
    FGFxEchoNetMailboxMenu_Adjustment SplitScreenInspectRecipientContextAdjustment;
    
    UPROPERTY(EditAnywhere)
    FGFxEchoNetMailboxMenu_Adjustment SplitScreenInspectSenderContextAdjustment;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuScale;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* MailboxRoot;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Mailbox;
    
    UPROPERTY(Transient)
    UGbxTextField* MailListHeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MailListCountClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MailListSortTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxPooledGridList* MailList;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* MailScrollBar;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* ReceiveMailItemCard;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* SendMailItemCard;
    
    UPROPERTY(Transient)
    UGbxGFxObject* FriendListContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendsListHeader;
    
    UPROPERTY(Transient)
    UGbxGFxPooledGridList* FriendList;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* FriendScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MessagePanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MessagePanelSenderIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MessagePanelPlatformIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* MessagePanelSubject;
    
    UPROPERTY(Transient)
    UGbxTextField* MessagePanelSender;
    
    UPROPERTY(Transient)
    UGbxTextField* MessagePanelBody;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* MessagePanelBodyScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MessagePanelBodyMask;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MessagePanelItem;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BackpackHeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BackpackFilterTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BackpackSortTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BackpackCapacityHeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BackpackCapacityCountTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* GoldenKeyCountTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CenterScreenNotification;
    
    UPROPERTY(Transient)
    UGbxTextField* CenterScreenHeaderTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* CenterScreenBodyTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* NoMailTextField;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CenterScreenConfirmHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CenterScreenCancelHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MailListPrevSortHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MailListNextSortHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackPrevSortHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BackpackNextSortHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MessagePanelAcceptHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MessagePanelDeclineHint;
    
    UPROPERTY(Transient)
    UGFxEchoNetMailboxListCell* CurrentlyProcessingMailItem;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget BackpackWidget;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* FriendThumbnailManager;
    
    UPROPERTY(Transient)
    AActor* ReceivedMailGearItem;
    
    UPROPERTY(Transient)
    UInventoryCategoryData* ReceivedMailItemCategory;
    
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* ReceiveItemCardDisplayedBalanceState;
    
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* SendItemCardDisplayedBalanceState;
    
    UPROPERTY(Transient)
    TMap<FString, AActor*> SpawnedInventoryItems;
    
    UPROPERTY(Export, Transient)
    UOakInventoryBalanceStateComponent* ItemToSend;
    
    UPROPERTY(Transient)
    UGFxEchoNetMailboxFriendCell* ItemRecipient;
    
    UPROPERTY(EditAnywhere)
    FText HintAccept;
    
    UPROPERTY(EditAnywhere)
    FText HintChoose;
    
    UPROPERTY(EditAnywhere)
    FText HintDecline;
    
    UPROPERTY(EditAnywhere)
    FText HintSendConfirm;
    
    UPROPERTY(EditAnywhere)
    FText HintSendCancel;
    
    UPROPERTY(EditAnywhere)
    FText HintClose;
    
    UPROPERTY(EditAnywhere)
    FText HintBack;
    
    UPROPERTY(EditAnywhere)
    FText HintInbox;
    
    UPROPERTY(EditAnywhere)
    FText HintSendMail;
    
    UPROPERTY(EditAnywhere)
    FText HintExamineFriend;
    
    UPROPERTY(EditAnywhere)
    FText BackpackCapacityHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText BackpackHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText BackpackAllItemsText;
    
    UPROPERTY(EditAnywhere)
    FText BackpackSortByText;
    
    UPROPERTY(EditAnywhere)
    FText MailListHeader;
    
    UPROPERTY(EditAnywhere)
    FText MailListSortByDateText;
    
    UPROPERTY(EditAnywhere)
    FText MailListSortByUnreadText;
    
    UPROPERTY(EditAnywhere)
    FText MailListSortByFriendText;
    
    UPROPERTY(EditAnywhere)
    FText MailListSortBySystemText;
    
    UPROPERTY(EditAnywhere)
    FText FriendsListHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText CenterScreenConfirmationHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText CenterScreenConfirmationBodyText;
    
    UPROPERTY(EditAnywhere)
    FText NoMailText;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* MailSentStatData;
    
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakInventoryListComponent> PlayerInventory;
    
public:
    UGFxEchoNetMailboxMenu();
    UFUNCTION()
    void OnUpdateMailCell(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnUpdateFriendCell(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
protected:
    UFUNCTION()
    void OnSendItemCardReady() const;
    
    UFUNCTION()
    void OnReceiveItemCardReady() const;
    
public:
    UFUNCTION()
    void OnMailCellSelected(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnMailCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
protected:
    UFUNCTION()
    void OnItemThumbnailLoaded() const;
    
    UFUNCTION()
    void OnInventoryListChanged() const;
    
    UFUNCTION()
    void OnFriendThumbnailLoaded() const;
    
public:
    UFUNCTION()
    void OnFriendCellSelected(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnFriendCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
protected:
    UFUNCTION()
    void OnDialogDismissed(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackpackItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    FOakThumbnailManagerIcon GetItemRenderBitmapData(AActor* ItemActor, const UInventoryCategoryData* ItemCategory) const;
    
    UFUNCTION()
    void extOnHideItemComplete() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

