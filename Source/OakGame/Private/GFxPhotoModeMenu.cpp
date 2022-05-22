#include "GFxPhotoModeMenu.h"

class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;
class UGbxGFxButton;

void UGFxPhotoModeMenu::OnSpinnerItemChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxPhotoModeMenu::OnSliderItemChanged(UGbxGFxListItemNumber* Item) const {
}

void UGFxPhotoModeMenu::OnOptionSetButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxPhotoModeMenu::UGFxPhotoModeMenu() {
    this->PhotoModeCloseMenuSound = TEXT("Select_Close");
    this->PhotoModeSwitchTabsSound = TEXT("MainMenu_Option_SubCategory_Open");
    this->PhotoModeToggleSound = TEXT("MainMenu_Confirm");
    this->PhotoModeResetSettingSound = TEXT("MainMenu_Confirm");
    this->PhotoModeTakePhotoSound = TEXT("PhotoMode_TakePhoto");
    this->PhotoModeSliderSound = TEXT("Numeric_Slider");
    this->PhotoModeSpinnerSound = TEXT("Numeric_Slider");
    this->PhotoModeNavigateSound = TEXT("Navigate");
    this->CachedPhotoModeController = NULL;
    this->CachedPhotoModeGlobals = NULL;
    this->bUseCurrentTimeOfDayAsDefault = true;
    this->TimeOfDayWhenEnteringPhotoMode = 0.50f;
    this->CameraButton = NULL;
    this->DepthOfFieldButton = NULL;
    this->ColorButton = NULL;
    this->SceneButton = NULL;
    this->FilterButton = NULL;
    this->FrameButton = NULL;
    this->SelectedButton = NULL;
    this->PhotoModePrevHint = NULL;
    this->PhotoModeNextHint = NULL;
    this->FilterSpinner = NULL;
    this->FilterIntensitySlider = NULL;
    this->TimeOfDaySlider = NULL;
    this->HidePlayerSpinner = NULL;
    this->OverrideFocusSpinner = NULL;
    this->FocusDistanceSlider = NULL;
    this->FocusRegionSlider = NULL;
    this->FocusIntensitySlider = NULL;
    this->ItemList = NULL;
}

