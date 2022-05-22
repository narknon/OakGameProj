#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "UObject/NoExportTypes.h"
#include "GFxFriendsInAreaListMenu_Adjustment.h"
#include "GbxMenuInputEvent.h"
#include "GFxFriendsInAreaListMenu.generated.h"

class UGbxGFxGridScrollingList;
class UGbxTextField;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxFriendsInAreaListMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuScale;
    
    UPROPERTY(EditAnywhere)
    FGFxFriendsInAreaListMenu_Adjustment ContextMenuAdjustmentHorizontalSplitScreen;
    
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* FriendList;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* LocationLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderFriendCount;
    
    UPROPERTY(Transient)
    FString CachedMapName;
    
public:
    UGFxFriendsInAreaListMenu();
protected:
    UFUNCTION()
    void OnFriendSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnFriendClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
};

