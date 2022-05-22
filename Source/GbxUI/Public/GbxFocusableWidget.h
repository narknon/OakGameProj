#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxFocusableWidget.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGbxFocusableWidget : public UInterface {
    GENERATED_BODY()
};

class IGbxFocusableWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetFocusableWidgetEnabled(bool bEnabled) PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFocusableWidgetFocused() const PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFocusableWidgetEnabled() const PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual EGbxFocusableWidgetState GetFocusableWidgetState() const PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

