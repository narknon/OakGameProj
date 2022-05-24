#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GbxGFxSliderAcceleration.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxSlider.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient, Config=GbxUI)
class GBXUI_API UGbxGFxSlider : public UGbxGFxButton {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxGFxSliderUpdateEvent, float, SliderPercent);
    
    UPROPERTY(Config)
    FGbxGFxSliderAcceleration SliderAcceleration;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxButton* UpOrLeftButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* DownOrRightButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SliderThumb;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SliderTrack;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SliderTrackButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MaskFill;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SliderDefaultThumb;
    
public:
    UGbxGFxSlider();
    UFUNCTION()
    void EndSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void BeginRightSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void BeginLeftSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

