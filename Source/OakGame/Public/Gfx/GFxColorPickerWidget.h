#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxFocusableWidget.h"
#include "EColorPickerMode.h"
#include "UObject/NoExportTypes.h"
#include "GbxMenuInputEvent.h"
#include "EGbxFocusableWidgetState.h"
#include "GFxColorPickerWidget.generated.h"

class UGbxGFxMenu;
class UGbxGFxButton;
class UGbxGFxGridScrollingList;
class UGFxColorPickerSwatch;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGbxGFxListCell;

UCLASS(NonTransient)
class OAKGAME_API UGFxColorPickerWidget : public UGbxGFxObject, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ColorList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SelectionsWrapper;
    
    UPROPERTY(Transient)
    UGFxColorPickerSwatch* PrimarySwatch;
    
    UPROPERTY(Transient)
    UGbxTextField* PrimaryLabel;
    
    UPROPERTY(Transient)
    UGFxColorPickerSwatch* SecondarySwatch;
    
    UPROPERTY(Transient)
    UGbxTextField* SecondaryLabel;
    
    UPROPERTY(Transient)
    UGFxColorPickerSwatch* TertiarySwatch;
    
    UPROPERTY(Transient)
    UGbxTextField* TertiaryLabel;
    
    UPROPERTY(Transient)
    UGFxColorPickerSwatch* CurrentSwatch;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LeftSwatchArrow;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftSwatchArrowHint;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RightSwatchArrow;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightSwatchArrowHint;
    
    UPROPERTY(Transient)
    UGbxGFxMenu* OwningMenu;
    
    UPROPERTY(Transient)
    EColorPickerMode CurrentMode;
    
    UPROPERTY(Transient)
    TArray<FColor> AvailableColors;
    
    UPROPERTY(Transient)
    TArray<FColor> PrimarySwatchDefaults;
    
    UPROPERTY(Transient)
    TArray<FColor> SecondarySwatchDefaults;
    
    UPROPERTY(Transient)
    TArray<FColor> TertiarySwatchDefaults;
    
public:
    UGFxColorPickerWidget();
protected:
    UFUNCTION()
    void OnTopColorSelected(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnTertiaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSwatchFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSecondaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnPrimaryColorSwatchSelected(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnColorFocused(UGbxGFxListCell* ClickedItem);
    
    UFUNCTION()
    void OnBottomColorSelected(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
    
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

