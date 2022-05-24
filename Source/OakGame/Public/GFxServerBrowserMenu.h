#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxServerBrowserMenu.generated.h"

class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class UGbxGFxListCell;
class UGbxGFxButton;
class UGbxGFxDialogBox;

UCLASS()
class UGFxServerBrowserMenu : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsLanBrowser;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* GamesFoundLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SearchResultPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* SearchResultPanelLabel;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* SortCriteriaLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* HintSortCriteria;
    
    UPROPERTY(Transient)
    UGbxTextField* HintSortingOrder;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* FilterHint;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuPagerTextClip;
    
public:
    UGFxServerBrowserMenu();
private:
    UFUNCTION()
    void OnSessionCellSelected(UGbxGFxListCell* Item) const;
    
    UFUNCTION()
    void OnServerSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRefreshSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

