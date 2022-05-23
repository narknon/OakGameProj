#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GbxMenuInputEvent.h"
#include "EBindingType.h"
#include "GFxControllerOptions.generated.h"

class UGbxGFxListCell;
class UGbxGFxHintWidget;
class UGbxInputRebindContext;
class UGbxGFxListItemSpinner;
class UOptionDescriptionItem;
class UGbxGFxButton;

UCLASS(EditInlineNew)
class UGFxControllerOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousControlSchemeHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextControlSchemeHint;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* WalkingRebindContext;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* DrivingRebindContext;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* CommonRebindContext;
    
    UPROPERTY(Transient)
    UOptionDescriptionItem* WalkingThumbstickSchemeDescription;
    
    UPROPERTY(Transient)
    UOptionDescriptionItem* WalkingButtonSchemeDescription;
    
    UPROPERTY(Transient)
    UOptionDescriptionItem* DrivingThumbstickSchemeDescription;
    
    UPROPERTY(Transient)
    UOptionDescriptionItem* DrivingButtonSchemeDescription;
    
public:
    UGFxControllerOptions();
private:
    UFUNCTION()
    void OnWalkingControlSchemeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnRevertToDefaultClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnJoystickWalkingSchemeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnJoystickDrivingSchemeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnDrivingControlSchemeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCustomizeControlsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnControlSchemeButtonFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem);
    
    UFUNCTION()
    void OnChangedColumnFocus(EBindingType BindingType);
    
};

