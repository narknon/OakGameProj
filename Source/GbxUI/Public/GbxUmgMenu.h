#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "GbxMenu.h"
#include "GbxFocusableWidgetAdjacencyInfo.h"
#include "EGbxMenuInputDevice.h"
#include "GbxUmgMenu.generated.h"

class UObject;
class UGbxUmgMenuData;
class AGbxPlayerController;
class UGbxWidgetFocusManager;
class UGbxHintBar;
class UGbxMenuStack;
class UWidget;
class UGbxHintBarWidgetContainer;
class IGbxHintBarWidgetContainer;
class UGbxHintWidget;
class IGbxHintWidget;
class UGbxMenuData;
class UGbxListItemFactory;

UCLASS(EditInlineNew)
class GBXUI_API UGbxUmgMenu : public UGbxUserWidget, public IGbxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UGbxUmgMenuData* MenuData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxPlayerController* PCOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGbxMenuStack* MenuStackOwner;
    
    UPROPERTY(Transient)
    UGbxWidgetFocusManager* FocusManager;
    
    UPROPERTY(Transient)
    UGbxHintBar* HintBar;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxFocusableWidgetMouseBehavior DefaultMouseFocusBehavior;
    
    UGbxUmgMenu();
    UFUNCTION(BlueprintCallable)
    void SetWidgetAdjacency(UObject* Widget, const FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSlateFocusedWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetHintBarContainer(const TScriptInterface<IGbxHintBarWidgetContainer>& InContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedWidget(UObject* Widget, bool bFromMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetAdjancency(UObject* Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStagePlacedHint(const TScriptInterface<IGbxHintWidget>& InHintWidget, const FName InInputAction);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFocusableWidgetWithAdjacency(UObject* Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFocusableWidget(UObject* Widget, FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo);
    
    UFUNCTION(BlueprintCallable)
    void PopulateHintBar();
    
    UFUNCTION(BlueprintCallable)
    void NavigateBack();
    
    UFUNCTION(BlueprintCallable)
    UObject* MenuStack_SwitchTo(UGbxMenuData* MenuDataIn);
    
    UFUNCTION(BlueprintCallable)
    UObject* MenuStack_Push(UGbxMenuData* MenuDataIn);
    
    UFUNCTION(BlueprintCallable)
    UObject* MenuStack_PopToSwitchTo(const UObject* Menu, UGbxMenuData* MenuDataIn);
    
    UFUNCTION(BlueprintCallable)
    void MenuStack_PopTo(const UObject* Menu);
    
    UFUNCTION(BlueprintCallable)
    void MenuStack_Pop();
    
    UFUNCTION(BlueprintCallable)
    void MenuStack_Clear();
    
    UFUNCTION(BlueprintPure)
    bool IsWidgetFocused(const UObject* WidgetInQuestion) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveMenuOnStack() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuInputDeviceChanged(EGbxMenuInputDevice NewInputDevice);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuInputAction(const FName& InputAction, int32 ControllerId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuDeinit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuAspectRatioChanged(float NewAspectRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMenuActivate();
    
    UFUNCTION(BlueprintPure)
    UGbxListItemFactory* GetListItemFactory() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetFocusedWidget() const;
    
    UFUNCTION(BlueprintPure)
    EGbxMenuInputDevice GetCurrentInputDevice() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

