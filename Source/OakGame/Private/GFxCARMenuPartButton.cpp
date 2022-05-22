#include "GFxCARMenuPartButton.h"

class UGbxGFxButton;

void UGFxCARMenuPartButton::OnThisFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxCARMenuPartButton::OnThisClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxCARMenuPartButton::UGFxCARMenuPartButton() {
    this->CellType = EGFxCARMenuPartCellType::None;
    this->bIsEmptyItem = false;
    this->LabelText = NULL;
    this->LabelBackground = NULL;
    this->LoadingCircleClip = NULL;
    this->ImageRenderClip = NULL;
    this->ImageRenderShadowClip = NULL;
    this->EquipmentNameClip = NULL;
    this->EquipmentNameText = NULL;
    this->EmptyLabelText = NULL;
    this->ButtonHelpHintClip = NULL;
    this->EquippedFlourishAnimClip = NULL;
    this->LockIconClip = NULL;
    this->InvalidSlot = NULL;
    this->NewIndicatorWrapperClip = NULL;
    this->PrimaryColorClip = NULL;
    this->SecondaryColorClip = NULL;
    this->TertiaryColorClip = NULL;
    this->CategoryIconClip = NULL;
    this->CategoryIconInnerClip = NULL;
}

