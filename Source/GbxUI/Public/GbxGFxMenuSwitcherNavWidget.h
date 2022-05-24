#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxGFxMenuSwitcherNavClickedDelegateDelegate.h"
#include "GbxGFxMenuSwitcherNavWidgetCustomItem.h"
#include "EGbxGFxMenuSwitchNavWidgetType.h"
#include "GbxGFxMenuSwitcherSubmenuInfo.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxMenuSwitcherNavWidget.generated.h"

class UGbxGFxButton;
class UGbxGFxGridScrollingList;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxMenuSwitcherNavWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxGFxMenuSwitcherNavClickedDelegate OnNavTabClickedDelegate;
    
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PrevTabHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextTabHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* NavListClip;
    
    UPROPERTY(Transient)
    EGbxGFxMenuSwitchNavWidgetType NavType;
    
    UPROPERTY(Transient)
    TArray<FGbxGFxMenuSwitcherSubmenuInfo> NavListSubmenuDatas;
    
    UPROPERTY(Transient)
    TArray<FGbxGFxMenuSwitcherNavWidgetCustomItem> NavListItemDatas;
    
public:
    UGbxGFxMenuSwitcherNavWidget();
    UFUNCTION()
    void OnTabClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

