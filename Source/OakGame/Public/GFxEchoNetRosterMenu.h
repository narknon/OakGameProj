#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetRosterMenu_Adjustment.h"
#include "GFxEchoNetSubMenu.h"
#include "UObject/NoExportTypes.h"
#include "EGFxVaultHunterProfileCardView.h"
#include "OakOnlineLobbyPlayerInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxEchoNetRosterMenu.generated.h"

class AOakPlayerController;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class UGbxGFxObject;
class UGFxVaultHunterProfileCard;
class UGbxMenuData;
class UGbxGFxListCell;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxEchoNetRosterMenu : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ItemsPerpageFullScreen;
    
    UPROPERTY(EditAnywhere)
    int32 ItemsPerpageSplitScreen;
    
    UPROPERTY(EditAnywhere)
    int32 SplitScreenFirstExternalIndex;
    
    UPROPERTY(EditAnywhere)
    float CellVertSpacing;
    
    UPROPERTY(EditAnywhere)
    float CellHorzSpacing;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    UPROPERTY(EditAnywhere)
    float ContextMenuQuadraticFactor;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuScale;
    
    UPROPERTY(EditAnywhere)
    FGFxEchoNetRosterMenu_Adjustment ContextMenuAdjustmentHorizontalSplitScreen;
    
    UPROPERTY(EditAnywhere)
    FString InGameRosterCellName;
    
    UPROPERTY(EditAnywhere)
    FString OnlineRosterCellName;
    
    UPROPERTY(EditAnywhere)
    FString OfflineRosterCellName;
    
    UPROPERTY(EditAnywhere)
    FString EmptyRosterCellName;
    
    UPROPERTY(EditAnywhere)
    FName InputAction_ToggleVaultHunterView;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* RosterGrid;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuPagerTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InternalWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* ScreenTitle;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendsNum;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuFilter;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftTabHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightTabHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftPageHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightPageHint;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuDescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* VaultHunterStatusClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ChangeVaultHunterViewHintClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCard* ViewedPlayerVaultHunterProfileCard;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCard* MyVaultHunterProfileCard;
    
    UPROPERTY(Transient)
    FOakOnlineLobbyPlayerInfo SelectedPlayerInfo;
    
    UPROPERTY(Transient)
    int32 CurrentPage;
    
    UPROPERTY(Transient)
    int32 LastPageIndex;
    
    UPROPERTY(Transient)
    bool bPendingPopulateFriends;
    
    UPROPERTY(Transient)
    bool bPendingPopulateRecentPlayers;
    
    UPROPERTY(Transient)
    int32 SavedSelectedIndex;
    
    UPROPERTY(Transient)
    int32 SavedCurrentPage;
    
    UPROPERTY(Transient)
    AOakPlayerController* TargetPC;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* PlayerDetailsMenuData;
    
    UPROPERTY(Transient)
    EGFxVaultHunterProfileCardView CurrentProfileView;
    
public:
    UGFxEchoNetRosterMenu();
protected:
    UFUNCTION()
    void OnSelectedPlayerChanged(UGbxGFxListCell* Item) const;
    
public:
    UFUNCTION()
    void OnRecentPlayerSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFriendSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFriendFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

