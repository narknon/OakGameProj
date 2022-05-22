#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "EGbxSpinnerWidgetGoToMethod.h"
#include "GbxUISpinnerWidget.generated.h"

class UCanvasPanel;

UCLASS(EditInlineNew)
class GBXUI_API UGbxUISpinnerWidget : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* SpinnerDisplayStrip;
    
    UPROPERTY(EditAnywhere)
    uint8 TotalDigitsDisplayed;
    
    UPROPERTY(EditAnywhere)
    float AnimationTime;
    
private:
    UPROPERTY(Transient)
    uint8 CurrentValue;
    
    UPROPERTY(Transient)
    bool bTransitionUpwards;
    
    UPROPERTY(Transient)
    float CurrentDistanceRemaining;
    
    UPROPERTY(Transient)
    float CurrentAnimSpeed;
    
    UPROPERTY(Transient)
    uint8 NewValueToGoTo;
    
    UPROPERTY(Transient)
    EGbxSpinnerWidgetGoToMethod AnimationType;
    
public:
    UGbxUISpinnerWidget();
    UFUNCTION()
    float MoveToNumber(uint8 NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod);
    
};

