#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "Engine/EngineTypes.h"
#include "GbxFocusableWidget.h"
#include "GbxGFxListConfig.h"
#include "RecommendedFriendInviteStatus.h"
#include "EGbxFocusableWidgetState.h"
#include "ContextMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxLobbyWidget.generated.h"

class UGFxLobbyWidgetPlayerList;
class UGbxGFxButton;
class UGbxGFxHintWidget;
class AOakPlayerController;
class UGFxLobbyWidgetSettingsButton;
class UGFxLobbyWidgetSettingsPanel;
class UGbxWidgetFocusManager;
class UGbxGFxMenu;
class UGbxGFxListCell;
class UGbxGFxDialogBox;
class UObject;

UCLASS(NonTransient)
class UGFxLobbyWidget : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RecommendedFriendsPopupTimeout;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxListConfig ContextMenuConfig;
    
    UPROPERTY(EditAnywhere)
    float TimeRequiredToReinvite;
    
private:
    UPROPERTY(Transient)
    FTimerHandle HideRecommendedFriendsTimer;
    
    UPROPERTY(Transient)
    TArray<FRecommendedFriendInviteStatus> CurrentFriendInvites;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> OverridePrimaryPlayer;
    
    UPROPERTY(Transient)
    UGFxLobbyWidgetPlayerList* PlayerList;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LobbyWidgetHint;
    
    UPROPERTY(Transient)
    UGbxGFxButton* AddFriendsButton;
    
    UPROPERTY(Transient)
    UGFxLobbyWidgetSettingsButton* SettingsButton;
    
    UPROPERTY(Transient)
    UGFxLobbyWidgetSettingsPanel* SettingsPanel;
    
    UPROPERTY(Transient)
    UGbxWidgetFocusManager* FocusManager;
    
    UPROPERTY(Transient)
    FContextMenu ContextMenu;
    
    UPROPERTY()
    TWeakObjectPtr<UGbxGFxMenu> OwningMenu;
    
public:
    UGFxLobbyWidget();
private:
    UFUNCTION()
    void OnSettingsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSelectionChanged(UGbxGFxListCell* Item);
    
    UFUNCTION()
    void OnRecommendedFriendUnhovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnRecommendedFriendHovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnRecommendedFriendClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnQuitChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnPlayerOptionSelected(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnPlayerItemChanged(UGbxGFxListCell* Item);
    
    UFUNCTION()
    void OnMenuStackMenuActivated(UObject* ActiveMenu);
    
    UFUNCTION()
    void OnLobbyWidgetHovered(UGbxGFxObject* HoveredObject, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnContextMenuSelectionChanged(UGbxGFxListCell* Item);
    
    UFUNCTION()
    void OnAddFriendsUnhovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAddFriendsHovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAddFriendsFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAddFriendsButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

