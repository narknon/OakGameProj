#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxListItemDelegateDelegate.h"
#include "UObject/Interface.h"
#include "GbxListItemDelegateWithControllerDelegate.h"
#include "GbxList.generated.h"

class UGbxListItem;
class UGbxListItemFactory;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGbxList : public UInterface {
    GENERATED_BODY()
};

class IGbxList : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void TryToAcquireMenuFocus(bool bFromMouse) PURE_VIRTUAL(TryToAcquireMenuFocus,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSelectionChangedDelegate(FGbxListItemDelegate InSelectionChangedDelegate) PURE_VIRTUAL(SetSelectionChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSelectedItem(UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll) PURE_VIRTUAL(SetSelectedItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSelectedIndex(int32 NewSelection, bool bScrollIntoView, bool bAnimateScroll) PURE_VIRTUAL(SetSelectedIndex,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetItemClickedDelegate(FGbxListItemDelegateWithController InItemClickedDelegate) PURE_VIRTUAL(SetItemClickedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveListItem(UGbxListItem* Item) PURE_VIRTUAL(RemoveListItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAllListItems() PURE_VIRTUAL(RemoveAllListItems,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnItemClicked(UGbxListItem* Item) PURE_VIRTUAL(OnItemClicked,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool MoveSelectionUp() PURE_VIRTUAL(MoveSelectionUp, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool MoveSelectionRight() PURE_VIRTUAL(MoveSelectionRight, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool MoveSelectionLeft() PURE_VIRTUAL(MoveSelectionLeft, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool MoveSelectionDown() PURE_VIRTUAL(MoveSelectionDown, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsListFocused() const PURE_VIRTUAL(IsListFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsListEnabled() const PURE_VIRTUAL(IsListEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void InsertListItem(UGbxListItem* Item) PURE_VIRTUAL(InsertListItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual UGbxListItem* GetSelectedItem() const PURE_VIRTUAL(GetSelectedItem, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetSelectedIndex() const PURE_VIRTUAL(GetSelectedIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumItemsInList() const PURE_VIRTUAL(GetNumItemsInList, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGbxListItemFactory* GetListItemFactory() const PURE_VIRTUAL(GetListItemFactory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGbxListItem* GetItemAtIndex(int32 Index) const PURE_VIRTUAL(GetItemAtIndex, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<UGbxListItem> GetDefaultItemClass() const PURE_VIRTUAL(GetDefaultItemClass, return NULL;);
    
};

