#pragma once
#include "CoreMinimal.h"
#include "GFxStoreMenuWidget.h"
#include "EGFxStoreMenuTabType.h"
#include "GFxStoreMenuItemBrowserWidget.generated.h"

class UGFxStoreMenuItemBrowserNavBarWidget;
class UGFxStoreMenuItemBrowserPageWidget;
class UGbxGFxObject;
class UGbxTextField;
class UGFxStoreMenuBrowserWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuItemBrowserWidget : public UGFxStoreMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleTextClip;
    
    UPROPERTY(Transient)
    UGFxStoreMenuItemBrowserNavBarWidget* NavBarClip;
    
    UPROPERTY(Transient)
    UGbxTextField* SubTitleTextClip;
    
    UPROPERTY(Transient)
    UGFxStoreMenuBrowserWidget* ItemBrowserListClip;
    
    UPROPERTY(Transient)
    UGFxStoreMenuItemBrowserPageWidget* PageNavBarClip;
    
    UPROPERTY(Transient)
    EGFxStoreMenuTabType CurrentTab;
    
    UPROPERTY(Transient)
    int32 CurrentPageIndex;
    
public:
    UGFxStoreMenuItemBrowserWidget();
};

