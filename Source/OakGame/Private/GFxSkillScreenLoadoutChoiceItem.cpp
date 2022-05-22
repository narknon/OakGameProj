#include "GFxSkillScreenLoadoutChoiceItem.h"

class UGbxGFxButton;

FString UGFxSkillScreenLoadoutChoiceItem::GetButtonState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState State) {
    return TEXT("");
}

UGFxSkillScreenLoadoutChoiceItem::UGFxSkillScreenLoadoutChoiceItem() {
    this->IconGray = NULL;
    this->IconColored = NULL;
    this->IconSelected = NULL;
    this->BackgroundGray = NULL;
    this->BackgroundColored = NULL;
    this->BackgroundSelected = NULL;
    this->EquipState = EGFxSkillScreenLoadoutChoiceEquipState::Locked;
    this->ItemData = NULL;
}

