#include "OakPlayerAbilityTree.h"
#include "Net/UnrealNetwork.h"

class UOakPlayerAbilityTreeItemData;

void UOakPlayerAbilityTree::OnRep_AbilityPoints() {
}

void UOakPlayerAbilityTree::GiveAbilityPoints_Implementation(int32 Points) {
}
bool UOakPlayerAbilityTree::GiveAbilityPoints_Validate(int32 Points) {
    return true;
}

void UOakPlayerAbilityTree::DEBUG_AddPointToAbilityTreeItem_Implementation(UOakPlayerAbilityTreeItemData* ItemData) {
}
bool UOakPlayerAbilityTree::DEBUG_AddPointToAbilityTreeItem_Validate(UOakPlayerAbilityTreeItemData* ItemData) {
    return true;
}

void UOakPlayerAbilityTree::ClientSetTreeGrade_Implementation(int32 NewTreeGrade) {
}

void UOakPlayerAbilityTree::ClientAddItemPoint_Implementation(UOakPlayerAbilityTreeItemData* ItemData) {
}

void UOakPlayerAbilityTree::AddPointToAbilityTreeItem_Implementation(UOakPlayerAbilityTreeItemData* ItemData) {
}
bool UOakPlayerAbilityTree::AddPointToAbilityTreeItem_Validate(UOakPlayerAbilityTreeItemData* ItemData) {
    return true;
}

void UOakPlayerAbilityTree::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakPlayerAbilityTree, AbilityPoints);
}

UOakPlayerAbilityTree::UOakPlayerAbilityTree() {
    this->Owner = NULL;
    this->TreeActionAbilityClass = NULL;
    this->TreeData = NULL;
    this->AbilityPoints = 0;
}

