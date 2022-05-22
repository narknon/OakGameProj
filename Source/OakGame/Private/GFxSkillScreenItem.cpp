#include "GFxSkillScreenItem.h"

class UGbxGFxButton;

FString UGFxSkillScreenItem::GetButtonState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState State) {
    return TEXT("");
}

UGFxSkillScreenItem::UGFxSkillScreenItem() {
    this->ItemData = NULL;
    this->AbilityTree = NULL;
    this->OwnerRowList = NULL;
}

