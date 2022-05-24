#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxStatusMenuNavBar.generated.h"

class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class UGFxStatusMenuSubmenu;
class UGbxGFxListCell;

UCLASS(NonTransient)
class OAKGAME_API UGFxStatusMenuNavBar : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxGFxGridScrollingList* NavListClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PrevButtonHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextButtonHintClip;
    
    UPROPERTY()
    UGFxStatusMenuSubmenu* OwnerSubmenu;
    
    UGFxStatusMenuNavBar();
    UFUNCTION()
    void OnNavCellClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
};

