#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxFocusableWidget.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuPage.generated.h"

class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuPage : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    UGFxSHiFTMenuPage();
protected:
    UFUNCTION()
    void OnEditableTextFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnEditableTextClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    
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

