#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "EGFxFrontendMenuMode.h"
#include "EGFxFrontendMenuFocusAnim.h"
#include "GbxMenuInputEvent.h"
#include "GFxFrontendMenu.generated.h"

class UGFxNewsWidgetWrapper;
class UGFxNewsWidget;
class UGFxLobbyWidget;
class UTexture;
class USwfMovie;
class UGFxOakMainMenu;
class UGbxGFxObject;
class UGFxLobbyWidgetMatchmakingWidget;
class UObject;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxFrontendMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* NewsImageNotLoadedTexture;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* NewsWidgetImageMovie;
    
    UPROPERTY(EditAnywhere)
    float LobbyWidgetFocusInspectionDelay;
    
    UPROPERTY(EditAnywhere)
    float TintScale;
    
    UPROPERTY(EditAnywhere)
    float TintOffset;
    
    UPROPERTY(Transient)
    UGFxOakMainMenu* CachedMainMenu;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* LobbyWidgetFocusedClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LobbyWidgetTintClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LobbyWrapperClip;
    
    UPROPERTY(Transient)
    UGFxLobbyWidget* LobbyWidgetClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LastFocusedLobbyWidgetPlayerItem;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewsWidgetFadeClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewsWidgetVisibilityClip;
    
    UPROPERTY(Transient)
    UGFxNewsWidgetWrapper* NewsWrapperClip;
    
    UPROPERTY(Transient)
    UGFxNewsWidget* NewsWidgetClip;
    
    UPROPERTY(Transient)
    UGFxLobbyWidgetMatchmakingWidget* MatchmakingWidgetClip;
    
    UPROPERTY(Transient)
    bool bCurLobbyWidgetFocusedState;
    
    UPROPERTY(Transient)
    bool bLobbyWidgetVisibilityOverride;
    
    UPROPERTY(Transient)
    bool bNewsWidgetVisibilityOverride;
    
    UPROPERTY(Transient)
    EGFxFrontendMenuMode CurrentMenuMode;
    
    UPROPERTY(Transient)
    EGFxFrontendMenuFocusAnim CurrentFocusAnim;
    
    UPROPERTY(Transient)
    bool bChatNotificationIsOpen;
    
public:
    UGFxFrontendMenu();
private:
    UFUNCTION()
    void OnMenuStackChanged(UObject* ActiveMenu) const;
    
    UFUNCTION()
    void OnLobbyWidgetAddFriendsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

