#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxFocusableWidget.h"
#include "GbxMenuInputEvent.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "EGbxGFxButtonLockedState.h"
#include "EGbxGFxButtonCheckedState.h"
#include "EGbxGFxButtonType.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxGFxButton.generated.h"

class UGbxGFxMenu;
class UGbxGFxButton;
class UGbxTextField;

UCLASS(Blueprintable, NonTransient)
class GBXUI_API UGbxGFxButton : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FGbxGFxButtonEvent, UGbxGFxButton*, BUTTON, const FGbxMenuInputEvent&, InputInfo);
    
    UPROPERTY(EditAnywhere)
    EGbxFocusableWidgetMouseBehavior MouseFocusBehavior;
    
    UPROPERTY(EditAnywhere)
    FName OnFocusedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName OnClickedAudioEventName;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnClicked;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnSecondaryClicked;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnFocused;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnUnfocused;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnPressed;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnReleased;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnHovered;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnUnhovered;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxButtonEvent OnHeld;
    
    UPROPERTY()
    TWeakObjectPtr<UGbxGFxMenu> OwningMenu;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UGbxTextField* Label;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* AppearanceFrameClip;
    
    UPROPERTY(Transient)
    float TimeButtonHeld;
    
    UPROPERTY(Transient)
    bool bHasSentHeldEvent;
    
    UPROPERTY(Transient)
    bool bWantsHeld;
    
    UPROPERTY(Transient)
    bool bIgnoreNextClick;
    
    UPROPERTY(Transient)
    bool bNewIndicatorUsesLabels;
    
public:
    UGbxGFxButton();
    UFUNCTION(BlueprintCallable)
    void SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelText(const FText& Text, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonType(EGbxGFxButtonType InButtonType);
    
    UFUNCTION(BlueprintCallable)
    void RefreshView(EGbxFocusableWidgetState PrevState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
    
    UFUNCTION(BlueprintPure)
    bool IsRegisteredAsFocusableWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateUp(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateDown(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    EGbxGFxButtonLockedState GetLockedState() const;
    
    UFUNCTION(BlueprintPure)
    EGbxGFxButtonCheckedState GetCheckedState() const;
    
    UFUNCTION(BlueprintPure)
    EGbxGFxButtonType GetButtonType() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

