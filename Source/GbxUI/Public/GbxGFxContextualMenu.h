#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxGFxContextualMenuLocTableData.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxContextualMenu.generated.h"

class UGbxGFxButton;
class UGFxObject;
class UGbxGFxGridScrollingList;
class UGbxTextField;
class UGbxGFxListCell;

UCLASS(Config=Game)
class GBXUI_API UGbxGFxContextualMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGbxGFxContextualMenuLocTableData> LocTable;
    
private:
    UPROPERTY(Transient)
    UGFxObject* ContextualMenu;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* ToolTipsTextField;
    
    UPROPERTY(Config)
    FText RemoveFriendText;
    
    UPROPERTY(Config)
    FText AddShiftFriendText;
    
    UPROPERTY(Config)
    FText RemoveShiftFriendText;
    
    UPROPERTY(Config)
    FText BlockShiftUserText;
    
    UPROPERTY(Config)
    FText UnblockShiftUserText;
    
    UPROPERTY(Config)
    FText ReportShiftPlayerText;
    
public:
    UGbxGFxContextualMenu();
private:
    UFUNCTION()
    void OnSelectionChanged(UGbxGFxListCell* Item) const;
    
    UFUNCTION()
    void OnContextualMenuItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

