#pragma once
#include "CoreMinimal.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxFocusableWidget.h"
#include "GFxCurrencyCounterClip.h"
#include "GFxEditableCurrencyCounterClip.generated.h"

class UGbxGFxMenu;
class UGbxGFxEditableTextField;

UCLASS(NonTransient)
class UGFxEditableCurrencyCounterClip : public UGFxCurrencyCounterClip, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxMenu* OwningMenu;
    
    UPROPERTY()
    UGbxGFxEditableTextField* CurrencyInputTextField;
    
public:
    UGFxEditableCurrencyCounterClip();
    
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

