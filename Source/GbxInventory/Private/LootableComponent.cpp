#include "LootableComponent.h"

class AActor;
class ULootableBalanceData;
class ADroppedInventoryItemPickup;

void ULootableComponent::SpawnAndDropLoot(FName& SelectedConfigurationName) {
}

void ULootableComponent::SpawnAndAttachLoot(FName& SelectedConfigurationName) {
}

void ULootableComponent::SetBalanceContextOverride(AActor* NewOverrideContext, bool bOnlyUseForGameStage) {
}

void ULootableComponent::InitializeLootConfigurations(ULootableBalanceData* LootableBalanceData) {
}

TArray<ADroppedInventoryItemPickup*> ULootableComponent::GetAttachedPickups() {
    return TArray<ADroppedInventoryItemPickup*>();
}

void ULootableComponent::ActivateAttachedLoot() {
}

ULootableComponent::ULootableComponent() {
    this->BalanceData = NULL;
    this->InitialDropLootMassScale = 1.00f;
    this->LootAttachmentMode = EPickupLootAttachmentMode::Origin;
    this->bForceSpawnedLootToHaveInfiniteLifespan = false;
    this->bOverrideUseWithBox = false;
    this->LootableBalanceDataOverride = NULL;
    this->BalanceContextOverride = NULL;
}

