#include "GFxSkillScreenTree.h"
#include "Templates/SubclassOf.h"

class UGFxSkillScreenItem;
class UGFxSkillScreenLoadoutSlot;
class UGbxGFxButton;
class UOakPlayerAbilitySlotData;
class UPlayerCharacterComponentSlotData;
class UGFxSkillScreenBranch;
class UOakPlayerAbilityTreeItemData;
class UOakActionAbility;
class UOakActionAbilityAugmentSlotData;

void UGFxSkillScreenTree::OnTutorialComplete() const {
}

void UGFxSkillScreenTree::OnTutorialAdvanced() const {
}

void UGFxSkillScreenTree::OnTreeItemPressed(UGFxSkillScreenItem* PressedItem) const {
}

void UGFxSkillScreenTree::OnSpinButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnSlotButtonHovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnSlotButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnSlotButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnItemUsableStateChanged(UGFxSkillScreenItem* UpdatedItem) const {
}

void UGFxSkillScreenTree::OnItemUnlockedAudioRequest() const {
}

void UGFxSkillScreenTree::OnItemSlotRequest(UGFxSkillScreenItem* ItemToSlot, int32 SlotIndex) const {
}

void UGFxSkillScreenTree::OnItemIncreasedAudioRequest(int32 AudioIndex) const {
}

void UGFxSkillScreenTree::OnInfoCardUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnInfoCardHovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnFocusedTreeItemChanged(UGFxSkillScreenItem* FocusedItem) const {
}

void UGFxSkillScreenTree::OnFocusedLoadoutItemChanged(UGFxSkillScreenLoadoutSlot* FocusedItem) const {
}

void UGFxSkillScreenTree::OnCharacterAugmentChanged(UPlayerCharacterComponentSlotData* SlotData) const {
}

void UGFxSkillScreenTree::OnBranchHovered(UGbxGFxButton* HoverededButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSkillScreenTree::OnBranchClicked(UGFxSkillScreenBranch* ClickedBranch) const {
}

void UGFxSkillScreenTree::OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const {
}

void UGFxSkillScreenTree::OnAbilityPointsChanged(int32 RemainingAbilityPoints) const {
}

void UGFxSkillScreenTree::OnAbilityItemChanged(UOakPlayerAbilityTreeItemData* ItemData) const {
}

void UGFxSkillScreenTree::OnAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const {
}

void UGFxSkillScreenTree::extSpinRightTransition() const {
}

void UGFxSkillScreenTree::extSpinLeftTransition() const {
}

void UGFxSkillScreenTree::ExtOnTutorialSpinComplete() const {
}

void UGFxSkillScreenTree::ExtOnScreenUnlockAnimationComplete() const {
}

UGFxSkillScreenTree::UGFxSkillScreenTree() {
    this->PlayerAbilityTree = NULL;
    this->PlayerAbilityData = NULL;
    this->EchoDeviceScreen_Unlocked = TEXT("Skills_Unlocked");
    this->TreeUnlockLevel = 0;
    this->TreeUnlockDelayForVO = 0.00f;
    this->TreeUnlockFirstSpinIndex = 1;
    this->TreeUnlockSecondSpinIndex = 2;
    this->TreeUnlockSlotPrimaryIndex = 0;
    this->TreeUnlockSlotPetIndex = 0;
    this->TreeUnlockSlotSecondaryHardpointIndex = -1;
    this->PurchasePassiveSpendPointIndex = -1;
    this->SkillTreeContainer = NULL;
    this->LeftArrow = NULL;
    this->LeftArrowHint = NULL;
    this->RightArrow = NULL;
    this->RightArrowHint = NULL;
    this->DragSkillItem = NULL;
    this->TutorialWidget = NULL;
    this->BranchSwfMovie = NULL;
    this->CurrentlyFocusedSkillItem = NULL;
    this->CachedDragTarget = NULL;
    this->CurrentlyFocusedLoadoutSlot = NULL;
    this->CharacterBalanceComponent = NULL;
    this->ScreenState = EGFxSkillScreenState::None;
    this->TransitionScreenState = EGFxSkillScreenState::None;
    this->EmptySlotText = FText::FromString(TEXT("Empty Slot"));
    this->TreeUnlockedAbility = FText::FromString(TEXT("Class Ability"));
    this->TreeUnlockedText = FText::FromString(TEXT("Unlocked"));
    this->ActionSkillName = FText::FromString(TEXT("Action Skill"));
    this->ModPrimaryName = FText::FromString(TEXT("Primary Mod"));
    this->ModSecondaryName = FText::FromString(TEXT("Secondary Mod"));
    this->PassiveSlotName = FText::FromString(TEXT("Passive Ability"));
    this->EqippedName = FText::FromString(TEXT("Equipped"));
    this->UnlocksAtLevelText = FText::FromString(TEXT("Unlocked At Level"));
    this->AbilityInUseString = FText::FromString(TEXT("Ability Currently In Use!"));
    this->SlotMustBeFilledString = FText::FromString(TEXT("Cannot Be Unequipped"));
    this->DragDropManager = NULL;
}

