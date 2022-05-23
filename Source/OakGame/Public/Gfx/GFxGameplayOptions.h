#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GbxMenuInputEvent.h"
#include "GFxGameplayOptions.generated.h"

class UGbxGFxDialogBox;
class UGbxGFxListItemSpinner;
class UGbxGFxButton;

UCLASS(EditInlineNew)
class UGFxGameplayOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
    UGFxGameplayOptions();
protected:
    UFUNCTION()
    void OnShowMinimapLegendariesChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnResetTutorialsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnResetTutorialsChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnFixedMinimapRotationChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnDifficultyChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCenterCrosshairChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCensorContentChanged(UGbxGFxListItemSpinner* Item);
    
};

