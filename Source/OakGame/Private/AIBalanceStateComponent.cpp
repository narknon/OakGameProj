#include "AIBalanceStateComponent.h"

class UItemPoolListInterface;

void UAIBalanceStateComponent::SuppressDropOnDeathItemPools(bool bSuppress) {
}

void UAIBalanceStateComponent::ShatterFrozenAnointed() {
}

void UAIBalanceStateComponent::SetCustomDropsOnDeath(UItemPoolListInterface* ExtraPoolToDropOnDeath, bool AddedToBalanceDropItems, EItemDropOnDeathType ItemPoolDropRule) {
}

void UAIBalanceStateComponent::ManuallyTriggerAnointedDeath() {
}

void UAIBalanceStateComponent::ForceDropLoot() {
}

void UAIBalanceStateComponent::FinalizeAnointedFreeze() {
}

void UAIBalanceStateComponent::EnableDropLootSocket(FName SocketName) {
}

void UAIBalanceStateComponent::ApplyNameForCurrentPlayThrough() {
}

UAIBalanceStateComponent::UAIBalanceStateComponent() {
    this->bUseExperienceLevelFormula = false;
    this->BaseItemGameStageSource = EBalanceValueType::GameStage;
    this->DropLootPattern = NULL;
    this->bWaitForNotifyToSpawnLoot = false;
    this->DelayedSpawnLootFailSafeTimer = 10.00f;
    this->TimeToSpawnLootOver = 0.00f;
    this->bIsAnointed = false;
    this->ExtraItemPoolToDropOnDeath = NULL;
    this->ExtraItemPoolDropRule = EItemDropOnDeathType::DropOnDeath_All;
    this->bSuppressDropOnDeathItemPools = false;
    this->AnointedUsableComponent = NULL;
    this->AnointedDeathState = EAnointedDeathState::PreFreeze;
}

