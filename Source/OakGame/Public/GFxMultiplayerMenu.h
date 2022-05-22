#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxMultiplayerMenu.generated.h"

class UGbxGFxButton;
class UGbxGFxGridScrollingList;
class UGbxGFxDialogBox;
class UGbxGFxListCell;
class UGbxMenuData;
class UGbxGFxObject;

UCLASS()
class UGFxMultiplayerMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* LANGamesItem;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* OnlineGamesItem;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* NetworkOptionsItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> NetworkOptionsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> LANBrowserMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> EchoNetMenuData;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AlternateBkg;
    
public:
    UGFxMultiplayerMenu();
private:
    UFUNCTION()
    void OnSwitchProfileClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSplitscreenControllerSelected(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSplitscreenClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnShiftClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNetworkOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnManagePartyClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLANBrowserClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

