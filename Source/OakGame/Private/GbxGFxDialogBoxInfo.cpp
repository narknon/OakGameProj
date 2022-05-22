#include "GbxGFxDialogBoxInfo.h"

FGbxGFxDialogBoxInfo::FGbxGFxDialogBoxInfo() {
    this->bKeybindingAllowGamepadInputs = false;
    this->bKeybindingAllowMouseKeyboardInputs = false;
    this->DialogBoxStyle = EGbxGFxDialogBoxStyle::Default;
    this->bCanCloseWhenChoicesArrayIsEmpty = false;
    this->bInputTextField = false;
    this->bPasswordTextField = false;
    this->bAnyUserCanInteract = false;
    this->bCanCancel = false;
    this->bSuppressSpawnSound = false;
    this->InitialChoiceIndex = 0;
    this->ButtonType = EGbxGFxDialogBoxButtonType::ListButtons;
    this->TargetPC = NULL;
    this->bAllowCloseWhenAnotherLocalPlayerLeaves = false;
    this->OverrideDefaultTemplate = NULL;
}

