#include "GbxGFxEditableTextField.h"

UGbxGFxEditableTextField::UGbxGFxEditableTextField() {
    this->bConfirmOnFocusOut = false;
    this->bMultiline = false;
    this->KeyboardType = GFxVirtualKeyboardType::Default;
    this->bLoseFocusOnConfirm = true;
}

