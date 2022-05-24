#pragma once
#include "CoreMinimal.h"
#include "MenuTransitionOutCompletedDelegate.h"
#include "GbxGFxMovie.h"
#include "GbxMenu.h"
#include "EGbxGFxListAlignment.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "MenuInputChangedDelegate.h"
#include "GbxFocusableWidgetAdjacencyInfo.h"
#include "GbxGFxMenu.generated.h"

class UGbxGFxObject;
class UGbxGFxMenuData;
class UGbxUIGlobals;
class UGbxHintBar;
class AGbxCharacter;
class UGbxGFxContextualMenu;
class UGbxGFxMenu;
class AGbxPlayerController;
class UGbxMenuStack;
class UGbxWidgetFocusManager;
class UGbxGFxHintBarContainer;
class UGbxGFxMouseBlocker;
class UGbxGameInstance;
class UGbxGFxButton;
class UGbxFocusableWidget;
class IGbxFocusableWidget;
class UObject;

UCLASS()
class GBXUI_API UGbxGFxMenu : public UGbxGFxMovie, public IGbxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EGbxFocusableWidgetMouseBehavior DefaultMouseFocusBehavior;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGbxGFxMenuData* MenuData;
    
    UPROPERTY(EditDefaultsOnly)
    FString ButtonFocusedAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ButtonClickedAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString SliderAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString SpinnerAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString NavigateBackAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FName OpenMenuAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FName CloseMenuAudioEventName;
    
    UPROPERTY(BlueprintAssignable)
    FMenuTransitionOutCompleted OnMenuTransitionOutCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FMenuInputChanged OnMenuInputChanged;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxGFxListAlignment HintBarAlignment;
    
    UPROPERTY(EditAnywhere)
    bool bCallMenuTickOnlyIfMenuIsStarted;
    
    UPROPERTY(EditDefaultsOnly)
    float SplitscreenRootOffset;
    
    UPROPERTY(Transient)
    UGbxGFxContextualMenu* OwnedContextualMenu;
    
    UPROPERTY(Transient)
    UGbxGFxMenu* ActiveDialog;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AGbxPlayerController> PCOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AGbxCharacter> PrimaryCharacterOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UGbxMenuStack> MenuStackOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 DrawPriority;
    
    UPROPERTY(Transient)
    UGbxWidgetFocusManager* FocusManager;
    
    UPROPERTY(Transient)
    UGbxHintBar* HintBar;
    
    UPROPERTY(Transient)
    UGbxGFxHintBarContainer* HintBarContainer;
    
    UPROPERTY(Transient)
    UGbxGFxMouseBlocker* MouseBlockerClip;
    
    UPROPERTY(Transient)
    bool bWantsDismiss;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGameInstance> GameInstanceRef;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxUIGlobals> UIGlobalsRef;
    
    UPROPERTY(Transient)
    bool bCachedLastInputFromMouse;
    
    UPROPERTY(Transient)
    bool bReceiveMouseEvenIfNotActive;
    
    UPROPERTY(Transient)
    bool bIsInitedFromStash;
    
    UPROPERTY(Transient)
    bool bMouseHitsAllowedYet;
    
    UPROPERTY(Transient)
    bool bGotFirstMouseMove;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MenuContentClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MenuLayoutsClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MenuLayoutClip;
    
    UPROPERTY(Transient)
    bool bIsSplitScreenLayout;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bBlockPauseMenu;
    
    UPROPERTY(Transient)
    bool bGFxMenuWasStarted;
    
    UPROPERTY(Transient)
    UGbxGFxButton* LastFocusedButton;
    
public:
    UGbxGFxMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWidgetAdjacency(TScriptInterface<IGbxFocusableWidget> Widget, const FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFocusedWidget(TScriptInterface<IGbxFocusableWidget> WidgetToFocus, bool bFromMouse) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFocusableWidgetAdjancency(TScriptInterface<IGbxFocusableWidget> Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RegisterFocusableWidgetWithAdjacency(TScriptInterface<IGbxFocusableWidget> Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RegisterFocusableWidget(TScriptInterface<IGbxFocusableWidget> Widget, const FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MenuStack_Clear() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWidgetFocused(const UObject* WidgetInQuestion) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetFocusedWidget() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

