#include "DebugMenuCategoryCharacterSkills.h"
#include "Templates/SubclassOf.h"

class UOakPlayerAbilitySlotData;
class UGbxListItemText_CharacterDebugMenu;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;
class UOakPlayerAbilityTreeItemData;



void UDebugMenuCategoryCharacterSkills::OnPlayerAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) {
}

void UDebugMenuCategoryCharacterSkills::OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UDebugMenuCategoryCharacterSkills::OnCascadeListItemSelected(UGbxListItemText_CharacterDebugMenu* ListItem) {
}

void UDebugMenuCategoryCharacterSkills::OnCascadeListItemRefresh(UGbxListItemText_CharacterDebugMenu* ListItem) {
}

void UDebugMenuCategoryCharacterSkills::OnCascadeListItemClicked(UGbxListItemText_CharacterDebugMenu* ListItem) {
}

void UDebugMenuCategoryCharacterSkills::OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) {
}

void UDebugMenuCategoryCharacterSkills::OnAbilityTreeReset() {
}

void UDebugMenuCategoryCharacterSkills::OnAbilityPointsChanged(int32 RemainingAbilityPoints) {
}

void UDebugMenuCategoryCharacterSkills::OnAbilityItemChanged(UOakPlayerAbilityTreeItemData* ItemData) {
}

void UDebugMenuCategoryCharacterSkills::ConstructCharacterPage() {
}

UDebugMenuCategoryCharacterSkills::UDebugMenuCategoryCharacterSkills() {
    this->CascadingListRef = NULL;
    this->CharacterNameRef = NULL;
    this->DescriptionPanelRef = NULL;
    this->DescriptionRef = NULL;
    this->PrimaryPlayer = NULL;
    this->PrimaryPlayerAbilityManager = NULL;
    this->PrimaryPlayerCharacterCompoment = NULL;
    this->PlayerAbilityTree = NULL;
    this->BalanceState = NULL;
}

