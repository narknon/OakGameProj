#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GFxControlsAdvancedOptions.generated.h"

class UGbxGFxHintWidget;
class UGbxGFxListItemNumber;

UCLASS(EditInlineNew)
class UGFxControlsAdvancedOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextSubmenuHint;
    
public:
    UGFxControlsAdvancedOptions();
protected:
    UFUNCTION()
    void OnGamepadRightDeadZoneOuterChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadRightDeadZoneInnerChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadMoveAxialDeadZoneScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadLookAxialDeadZoneScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadLeftDeadZoneOuterChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnGamepadLeftDeadZoneInnerChanged(UGbxGFxListItemNumber* Item);
    
};

