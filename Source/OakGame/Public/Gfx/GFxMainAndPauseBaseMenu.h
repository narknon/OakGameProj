#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "EGFxMainAndPauseMenuType.h"
#include "MenuItemButton.h"
#include "EMenuTransition.h"
#include "GbxMenuInputEvent.h"
#include "GFxMainAndPauseBaseMenu.generated.h"

class UGbxMenuData;
class UGbxGFxMenuData;
class UGFxBehindTheScenesMenuData;
class UGbxGFxGridScrollingList;
class UGFxFrontendMenu;
class AMainMenuCameraController;
class AMenuMapMenuFlow;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxMainAndPauseBaseMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> NewGameSettingsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> LoadGameMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> PlaythroughSelectionMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> CreditsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> MultiplayerMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> OptionsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> TestMapMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> EchoNetMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> LANBrowserMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> StoreMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> NewsMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> DLCMenuData;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxMenuData* FrontendMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGFxBehindTheScenesMenuData> BehindTheScenesMenuData;
    
    UPROPERTY(Transient)
    UGFxBehindTheScenesMenuData* BehindTheScenesMenuDataReference;
    
    UPROPERTY(Transient)
    EGFxMainAndPauseMenuType MenuType;
    
    UPROPERTY(Transient)
    TArray<FMenuItemButton> MenuItems;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MenuList;
    
    UPROPERTY(Transient)
    UGFxFrontendMenu* FrontendMenu;
    
    UPROPERTY(Transient)
    EMenuTransition OnGoingMenuTransition;
    
    UPROPERTY(Transient)
    bool bIsMenuLevel;
    
    UPROPERTY(Transient)
    AMainMenuCameraController* CachedCameraController;
    
    UPROPERTY(Transient)
    AMenuMapMenuFlow* CachedMenuMapMenuFlow;
    
public:
    UGFxMainAndPauseBaseMenu();
protected:
    UFUNCTION()
    void OnSocialCoreClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNetworkClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnInvitesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnInviteListItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnInviteListClearClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnGraphicsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnGameplayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnControlsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnAudioClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnAccessibilityClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

