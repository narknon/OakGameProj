#include "OakPlayerAbilityManagerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "OakPlayerAbilityTree.h"

class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;
class UOakPlayerAbilityTreeItemData;
class UOakPlayerAbility;

void UOakPlayerAbilityManagerComponent::SetSlotAugment_Implementation(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* AugmentSlot, UOakActionAbilityAugmentData* Augment) {
}
bool UOakPlayerAbilityManagerComponent::SetSlotAugment_Validate(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* AugmentSlot, UOakActionAbilityAugmentData* Augment) {
    return true;
}

void UOakPlayerAbilityManagerComponent::SetSlotAbilityClass_Implementation(UOakPlayerAbilitySlotData* AbilitySlot, TSubclassOf<UOakPlayerAbility> AbilityClass) {
}
bool UOakPlayerAbilityManagerComponent::SetSlotAbilityClass_Validate(UOakPlayerAbilitySlotData* AbilitySlot, TSubclassOf<UOakPlayerAbility> AbilityClass) {
    return true;
}

void UOakPlayerAbilityManagerComponent::PurchaseAbilityRespec_Implementation() {
}
bool UOakPlayerAbilityManagerComponent::PurchaseAbilityRespec_Validate() {
    return true;
}

void UOakPlayerAbilityManagerComponent::OnRep_AbilityDataForSaveGameSet() {
}

void UOakPlayerAbilityManagerComponent::OnPlayerLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UOakPlayerAbilityManagerComponent::OnPlayerAbilityTreeReset() {
}

void UOakPlayerAbilityManagerComponent::OnPlayerAbilityTreePointsChanged(int32 NewPoints) {
}

void UOakPlayerAbilityManagerComponent::OnPlayerAbilityTreeGradeChanged(int32 NewGrade) {
}

bool UOakPlayerAbilityManagerComponent::IsAbilitySlotted(TSubclassOf<UOakPlayerAbility> AbilityClass) const {
    return false;
}

bool UOakPlayerAbilityManagerComponent::IsAbilityAugmentSlotted(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentData* Augment) const {
    return false;
}

bool UOakPlayerAbilityManagerComponent::IsAbilityAugmentInSlot(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentData* Augment, UOakActionAbilityAugmentSlotData* AugmentSlot) const {
    return false;
}

bool UOakPlayerAbilityManagerComponent::HasPurchasedPlayerAbility(TSubclassOf<UOakPlayerAbility> AbilityClass) const {
    return false;
}

TSubclassOf<UOakPlayerAbility> UOakPlayerAbilityManagerComponent::GetSlotAbilityClass(UOakPlayerAbilitySlotData* AbilitySlot) const {
    return NULL;
}

UOakPlayerAbility* UOakPlayerAbilityManagerComponent::GetSlotAbility(UOakPlayerAbilitySlotData* AbilitySlot) const {
    return NULL;
}

UOakPlayerAbilitySlotData* UOakPlayerAbilityManagerComponent::GetAbilitySlot(TSubclassOf<UOakPlayerAbility> AbilityClass) const {
    return NULL;
}

UOakActionAbilityAugmentData* UOakPlayerAbilityManagerComponent::GetAbilityAugmentInSlot(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* AugmentSlot) const {
    return NULL;
}

UOakActionAbility* UOakPlayerAbilityManagerComponent::FindActionAbility(TSubclassOf<UOakActionAbility> ActionAbilityClass) const {
    return NULL;
}

void UOakPlayerAbilityManagerComponent::ClientUpgradeAbilityTreeItem_Implementation(UOakPlayerAbilityTreeItemData* ItemData) {
}

void UOakPlayerAbilityManagerComponent::ClientResetAbilities_Implementation() {
}

void UOakPlayerAbilityManagerComponent::ClientRecordModSlotChange_Implementation(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* ModSlotData, UOakActionAbilityAugmentData* ModAugmentData, UOakActionAbilityAugmentData* AugmentData) {
}

bool UOakPlayerAbilityManagerComponent::CanAugmentBeUsed(UOakActionAbilityAugmentData* InAugmentData) const {
    return false;
}

void UOakPlayerAbilityManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakPlayerAbilityManagerComponent, AbilitySlotList);
    DOREPLIFETIME(UOakPlayerAbilityManagerComponent, AugmentSlotList);
    DOREPLIFETIME(UOakPlayerAbilityManagerComponent, PlayerAbilityHUDItemList);
    DOREPLIFETIME(UOakPlayerAbilityManagerComponent, bAbilityDataForSaveGameSet);
}

UOakPlayerAbilityManagerComponent::UOakPlayerAbilityManagerComponent() {
    this->BaseOakPlayerAbilities = NULL;
    this->PlayerAbilityEventHubClass = NULL;
    this->FirstAbilityPointLevel = 0;
    this->PlayerAbilityTree = CreateDefaultSubobject<UOakPlayerAbilityTree>(TEXT("DefaultAbilityTree"));
    this->PlayerAbilityEventHub = NULL;
    this->bAbilityDataForSaveGameSet = false;
    this->OriginalSavedGrade = 0;
    this->OriginalSavedAbilityPoints = 0;
}

