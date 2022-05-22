#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "Components/ScrollBox.h"
#include "GbxListItemDelegateDelegate.h"
#include "GbxList.h"
#include "GbxFocusableWidget.h"
#include "GbxListItemDelegateWithControllerDelegate.h"
#include "EGbxScrollBoxListWrapMode.h"
#include "EGbxScrollBoxListFocusChangedAction.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxScrollBoxList.generated.h"

class UGbxUmgMenu;
class UGbxListItemFactory;
class UGbxListItem;

UCLASS()
class GBXUI_API UGbxScrollBoxList : public UScrollBox, public IGbxList, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 SelectedIndex;
    
    UPROPERTY(Transient)
    int32 SelectedIndexWhenFocusWasLost;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UGbxUmgMenu> MenuThatOwnsFocus;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxListItemDelegate SelectionChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxListItemDelegateWithController ItemClickedDelegate;
    
    UPROPERTY(EditAnywhere)
    EGbxScrollBoxListWrapMode WrapMode;
    
    UPROPERTY(EditAnywhere)
    EGbxFocusableWidgetMouseBehavior DefaultItemSelectionBehavior;
    
    UPROPERTY(EditAnywhere)
    UGbxListItemFactory* ListItemFactory;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxListItem> DefaultListItemClass;
    
    UPROPERTY(EditAnywhere)
    EGbxScrollBoxListFocusChangedAction FocusChangeAction;
    
    UPROPERTY(EditInstanceOnly)
    bool bRegisterAsFocusableWidget;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavUp;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavDown;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavLeft;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavRight;
    
    UPROPERTY(EditInstanceOnly)
    bool bFocusOnMenuCreation;
    
    UGbxScrollBoxList();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void TryToAcquireMenuFocus(bool bFromMouse) override PURE_VIRTUAL(TryToAcquireMenuFocus,);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectionChangedDelegate(FGbxListItemDelegate InSelectionChangedDelegate) override PURE_VIRTUAL(SetSelectionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll) override PURE_VIRTUAL(SetSelectedItem,);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 NewSelection, bool bScrollIntoView, bool bAnimateScroll) override PURE_VIRTUAL(SetSelectedIndex,);
    
    UFUNCTION(BlueprintCallable)
    void SetItemClickedDelegate(FGbxListItemDelegateWithController InItemClickedDelegate) override PURE_VIRTUAL(SetItemClickedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveListItem(UGbxListItem* Item) override PURE_VIRTUAL(RemoveListItem,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllListItems() override PURE_VIRTUAL(RemoveAllListItems,);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(UGbxListItem* Item) override PURE_VIRTUAL(OnItemClicked,);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSelectionUp() override PURE_VIRTUAL(MoveSelectionUp, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSelectionRight() override PURE_VIRTUAL(MoveSelectionRight, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSelectionLeft() override PURE_VIRTUAL(MoveSelectionLeft, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool MoveSelectionDown() override PURE_VIRTUAL(MoveSelectionDown, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsListFocused() const override PURE_VIRTUAL(IsListFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsListEnabled() const override PURE_VIRTUAL(IsListEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    void InsertListItem(UGbxListItem* Item) override PURE_VIRTUAL(InsertListItem,);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItem* GetSelectedItem() const override PURE_VIRTUAL(GetSelectedItem, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedIndex() const override PURE_VIRTUAL(GetSelectedIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumItemsInList() const override PURE_VIRTUAL(GetNumItemsInList, return 0;);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItemFactory* GetListItemFactory() const override PURE_VIRTUAL(GetListItemFactory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItem* GetItemAtIndex(int32 Index) const override PURE_VIRTUAL(GetItemAtIndex, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGbxListItem> GetDefaultItemClass() const override PURE_VIRTUAL(GetDefaultItemClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

