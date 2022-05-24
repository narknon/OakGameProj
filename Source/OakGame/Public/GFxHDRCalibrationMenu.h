#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxHDRCalibrationMenu.generated.h"

class UGbxGFxButton;
class UGbxTextField;
class UGbxMenuData;
class UGbxGFxGridScrollingList;
class UGbxGFxObject;
class UGFxFrontendMenu;
class UGbxGFxListItemSpinner;
class UGbxGFxListItemNumber;

UCLASS()
class UGFxHDRCalibrationMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxMenuData* FrontendMenuData;
    
protected:
    UPROPERTY(EditAnywhere)
    FText HDRToggleTitle;
    
    UPROPERTY(EditAnywhere)
    FText HDRToggleDescription;
    
    UPROPERTY(EditAnywhere)
    FText HDRBrightnessTitle;
    
    UPROPERTY(EditAnywhere)
    FText HDRBrightnessDescription;
    
    UPROPERTY(EditAnywhere)
    FText HDRMenuBrightnessTitle;
    
    UPROPERTY(EditAnywhere)
    FText HDRMenuBrightnessDescription;
    
    UPROPERTY(EditAnywhere)
    float HDRBrightnessStep;
    
    UPROPERTY(EditAnywhere)
    float HDRBrightnessDefault;
    
    UPROPERTY(EditAnywhere)
    float HDRMenuBrightnessDefault;
    
    UPROPERTY(EditAnywhere)
    FText BrightnessTitle;
    
    UPROPERTY(EditAnywhere)
    FText BrightnessDescription;
    
    UPROPERTY(EditAnywhere)
    float BrightnessStep;
    
    UPROPERTY(EditAnywhere)
    float BrightnessDefault;
    
    UPROPERTY(EditAnywhere)
    FText BlackLevelTitle;
    
    UPROPERTY(EditAnywhere)
    FText BlackLevelDescription;
    
    UPROPERTY(EditAnywhere)
    float BlackLevelStep;
    
    UPROPERTY(EditAnywhere)
    float BlackLevelDefault;
    
    UPROPERTY(EditAnywhere)
    FText GraphicsPreferenceTitle;
    
    UPROPERTY(EditAnywhere)
    FText GraphicsPreferenceDescription;
    
    UPROPERTY(EditAnywhere)
    FText SubtitlesTitle;
    
    UPROPERTY(EditAnywhere)
    FText SubtitlesDescription;
    
    UPROPERTY(EditAnywhere)
    FText ClosedCaptionsTitle;
    
    UPROPERTY(EditAnywhere)
    FText ClosedCaptionsDescription;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionText;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* OptionList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Background;
    
    UPROPERTY(Transient)
    UGFxFrontendMenu* CachedFrontendMenu;
    
public:
    UGFxHDRCalibrationMenu();
protected:
    UFUNCTION()
    void OnSubtitlesSettingFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSubtitlesSettingChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnHDROptionChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnHDROptionButtonFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnHDRMenuBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnHDRMenuBrightnessChanged(UGbxGFxListItemNumber* Item) const;
    
    UFUNCTION()
    void OnHDRBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnHDRBrightnessChanged(UGbxGFxListItemNumber* Item) const;
    
    UFUNCTION()
    void OnGraphicsPreferenceFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnGraphicsPreferenceChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnClosedCaptionsSettingFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnClosedCaptionsSettingChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBrightnessChanged(UGbxGFxListItemNumber* Item) const;
    
    UFUNCTION()
    void OnBlackLevelFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBlackLevelChanged(UGbxGFxListItemNumber* Item) const;
    
};

