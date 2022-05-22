#include "InventoryAspectData.h"

class AActor;
class UInventoryBalanceStateComponent;

void UInventoryAspectData::K2_OnBeginPlay_Implementation(AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const {
}

void UInventoryAspectData::K2_OnApplyAspect_Implementation(AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const {
}

FString UInventoryAspectData::K2_GetFriendlyDescription_Implementation() const {
    return TEXT("");
}

void UInventoryAspectData::K2_CloneAppearance_Implementation(AActor* CloneActor, AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const {
}

UInventoryAspectData::UInventoryAspectData() {
    this->Priority = EInventoryAspectUsagePriority::Default;
}

