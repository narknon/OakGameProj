#include "GFxSkillScreenBranch.h"

class UGbxGFxButton;
class UOakPlayerAbilityTreeTierData;
class UGFxSkillScreenItem;

void UGFxSkillScreenBranch::OnTreeItemUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSkillScreenBranch::OnTreeItemPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSkillScreenBranch::OnTreeItemFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSkillScreenBranch::OnItemUsableStateChanged(UGFxSkillScreenItem* UpdatedItem) {
}

void UGFxSkillScreenBranch::OnItemUnlockedAudioRequest() {
}

void UGFxSkillScreenBranch::OnItemSlotRequest(UGFxSkillScreenItem* ItemToSlot, int32 SlotIndex) {
}

void UGFxSkillScreenBranch::OnItemIncreasedAudioRequest(int32 AudioIndex) {
}

void UGFxSkillScreenBranch::OnAbilityTierChanged(UOakPlayerAbilityTreeTierData* TierData) {
}

void UGFxSkillScreenBranch::OnAbilityPointsChanged(int32 RemainingAbilityPoints) {
}

UGFxSkillScreenBranch::UGFxSkillScreenBranch() {
    this->LayoutBranch = NULL;
    this->SkillRowList = NULL;
    this->PlayerAbilityTree = NULL;
    this->BranchData = NULL;
    this->BackgroundFill = NULL;
    this->PreviousRow = NULL;
}

