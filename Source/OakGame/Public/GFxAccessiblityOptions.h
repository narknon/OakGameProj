#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GFxAccessiblityOptions.generated.h"

class UCrosshairColorListItemSpinner;
class UGbxGFxListItemSpinner;
class UGbxGFxListItemNumber;

UCLASS(EditInlineNew)
class UGFxAccessiblityOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCrosshairColorListItemSpinner* CrosshairNeutralColorItem;
    
    UPROPERTY(Transient)
    UCrosshairColorListItemSpinner* CrosshairEnemyColorItem;
    
    UPROPERTY(Transient)
    UCrosshairColorListItemSpinner* CrosshairAllyColorItem;
    
public:
    UGFxAccessiblityOptions();
private:
    UFUNCTION()
    void OnSubsAndCCTextSizeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnSubsAndCCBackgroundOpacityChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnHeadBobScaleChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnCrosshairNeutralColorFrameChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCrosshairEnemyColorFrameChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCrosshairAllyColorFrameChanged(UGbxGFxListItemSpinner* Item);
    
};

