#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxNewsWidgetWrapper.generated.h"

class UGbxGFxButton;
class UGFxNewsWidget;

UCLASS(NonTransient)
class UGFxNewsWidgetWrapper : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxNewsWidget* NewsWidgetClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavLeftButtonClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavRightButtonClip;
    
public:
    UGFxNewsWidgetWrapper();
private:
    UFUNCTION()
    void OnNavigationButtonUnhovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnNavigationButtonHovered(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnNavigationButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

