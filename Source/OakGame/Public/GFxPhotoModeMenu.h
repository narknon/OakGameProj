#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "PhotoModeViewInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxPhotoModeMenu.generated.h"

class UGbxGFxButton;
class UGbxGFxHintWidget;
class APhotoModeController;
class UPhotoModeGlobals;
class UGFxPhotoModeMenuSpinner;
class UGFxPhotoModeMenuSlider;
class UGbxGFxGridScrollingList;
class UGbxGFxListItemSpinner;
class UGbxGFxListItemNumber;

UCLASS()
class OAKGAME_API UGFxPhotoModeMenu : public UGbxGFxMenu, public IPhotoModeViewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PhotoModeCloseMenuSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeSwitchTabsSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeToggleSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeResetSettingSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeTakePhotoSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeSliderSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeSpinnerSound;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeNavigateSound;
    
    UPROPERTY(Transient)
    APhotoModeController* CachedPhotoModeController;
    
    UPROPERTY(Transient)
    UPhotoModeGlobals* CachedPhotoModeGlobals;
    
    UPROPERTY(EditAnywhere)
    bool bUseCurrentTimeOfDayAsDefault;
    
    UPROPERTY(Transient)
    float TimeOfDayWhenEnteringPhotoMode;
    
private:
    UPROPERTY(Transient)
    UGbxGFxButton* CameraButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* DepthOfFieldButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* ColorButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SceneButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* FilterButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* FrameButton;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxButton*> Buttons;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SelectedButton;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PhotoModePrevHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PhotoModeNextHint;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSpinner* FilterSpinner;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSlider* FilterIntensitySlider;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSlider* TimeOfDaySlider;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSpinner* HidePlayerSpinner;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSpinner* OverrideFocusSpinner;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSlider* FocusDistanceSlider;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSlider* FocusRegionSlider;
    
    UPROPERTY(Transient)
    UGFxPhotoModeMenuSlider* FocusIntensitySlider;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ItemList;
    
public:
    UGFxPhotoModeMenu();
private:
    UFUNCTION()
    void OnSpinnerItemChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnSliderItemChanged(UGbxGFxListItemNumber* Item) const;
    
    UFUNCTION()
    void OnOptionSetButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

