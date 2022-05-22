#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxFocusableWidget.h"
#include "GbxGFxListItemDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GbxScrollingListCellInfo.h"
#include "GbxGFxListItemDelegateWithControllerDelegate.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxUIScroller.h"
#include "GbxGFxListConfig.h"
#include "GbxGFxGridScrollingList.generated.h"

class UGbxGFxSlider;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxGridScrollingList : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxGFxListItemDelegate SelectionChangedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListItemDelegateWithController ItemPressedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListItemDelegateWithController ItemClickedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListItemDelegateWithController ItemSecondaryClickedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListConfig Config;
    
    UPROPERTY(Transient)
    int32 SelectedIndex;
    
    UPROPERTY(Transient)
    int32 SelectedIndexWhenFocusWasLost;
    
    UPROPERTY(Transient)
    TArray<FGbxScrollingListCellInfo> AllCells;
    
    UPROPERTY(Transient)
    TArray<FGbxScrollingListCellInfo> UnusedCellPool;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GridArea;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GridMask;
    
    UPROPERTY(Transient)
    FVector2D PositionOfFirstItem;
    
    UPROPERTY(Transient)
    int32 NextUniqueId;
    
    UPROPERTY(Transient)
    float ViewWindowSize;
    
    UPROPERTY(Transient)
    FGbxUIScroller UiScroller;
    
    UPROPERTY(Transient)
    bool bIsContentDirty;
    
    UPROPERTY(Transient)
    FVector2D AverageItemDims;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBar;
    
    UPROPERTY(Transient)
    bool bScrollbarIsChildOfThis;
    
    UGbxGFxGridScrollingList();
protected:
    UFUNCTION()
    void OnScrollBarPositionUpdated(float SliderPercentage);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

