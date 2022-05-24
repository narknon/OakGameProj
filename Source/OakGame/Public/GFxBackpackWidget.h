#pragma once
#include "CoreMinimal.h"
#include "GFxBackpackWidgetItemDelegateDelegate.h"
#include "GFxBackpackWidgetItemWithInputDelegateDelegate.h"
#include "GFxBackpackWidgetConfig.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxBackpackWidget.generated.h"

class UGFxBackpackWidgetItem;
class UOakThumbnailManager;
class UGFxBackpackWidgetListener;
class UUIGlobals;
class UGbxGFxGridScrollingList;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxBackpackWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxBackpackWidgetItemDelegate ItemSelectedDelegate;
    
    UPROPERTY(Transient)
    FGFxBackpackWidgetItemWithInputDelegate ItemClickedDelegate;
    
    UPROPERTY(Transient)
    FGFxBackpackWidgetItemWithInputDelegate ItemPressedDelegate;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UOakThumbnailManager> ThumbnailManager;
    
    UPROPERTY(Transient)
    bool bThumbnailMangerIsExternal;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UUIGlobals> UIGlobals;
    
    UPROPERTY(Transient)
    FGFxBackpackWidgetConfig Config;
    
    UPROPERTY(Transient)
    TArray<FOakUIInventoryItemDisplayInfo> Items;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* GridWidget;
    
    UPROPERTY(Transient)
    UGFxBackpackWidgetListener* Listener;
    
    UPROPERTY(Transient)
    bool bIsInited;
    
    UPROPERTY(Transient)
    int32 FirstBackpackItemOfInterest;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxBackpackWidgetItem> LastSelectedBackpackItem;
    
    UPROPERTY(Transient)
    bool bNeedsThumbnailsRefreshed;
    
    UPROPERTY(Transient)
    bool bDoNotManageThumbnailSweeping;
    
    UPROPERTY(Transient)
    bool bNeedsSweep;
    
public:
    FGFxBackpackWidget();
};

