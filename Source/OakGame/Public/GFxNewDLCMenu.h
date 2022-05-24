#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxNewDLCMenu.generated.h"

class UGbxGFxButton;
class UGbxTextField;
class UGbxGFxGridScrollingList;
class UGbxGFxHintWidget;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxNewDLCMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* TitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* CategoryText;
    
    UPROPERTY(Transient)
    UGbxTextField* TipsText;
    
    UPROPERTY(Transient)
    UGbxGFxButton* StartButton;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* StartButtonHint;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* DLCList;
    
public:
    UGFxNewDLCMenu();
protected:
    UFUNCTION()
    void OnDLCListSelectionClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnDLCListSelectionChanged(UGbxGFxListCell* Item) const;
    
};

