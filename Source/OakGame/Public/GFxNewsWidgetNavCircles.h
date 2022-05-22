#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxNewsWidgetNavCircles.generated.h"

class UGFxNewsWidget;
class UGbxGFxButton;

UCLASS(NonTransient)
class UGFxNewsWidgetNavCircles : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGbxGFxButton*> CircleClipButtons;
    
    UPROPERTY(Transient)
    UGFxNewsWidget* NewsWidgetClip;
    
public:
    UGFxNewsWidgetNavCircles();
private:
    UFUNCTION()
    void OnCircleButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

