#include "InventoryBlueprintLibrary.h"

class UInventoryBalanceStateComponent;
class UInventoryGenericPartData;
class AActor;
class UObject;

TArray<UInventoryGenericPartData*> UInventoryBlueprintLibrary::GetPossibleGenericParts(UInventoryBalanceStateComponent* InventoryBalanceState, const FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts) {
    return TArray<UInventoryGenericPartData*>();
}

UInventoryBalanceStateComponent* UInventoryBlueprintLibrary::GetInventoryBalanceState(AActor* Inventory) {
    return NULL;
}

AActor* UInventoryBlueprintLibrary::CreateInventory(UObject* WorldContextObject, bool bCreatePickup, FVector SpawnLocation, const FInventoryBalanceStateInitializationData& InitData) {
    return NULL;
}

AActor* UInventoryBlueprintLibrary::CloneInventory(AActor* SourceInventory) {
    return NULL;
}

AActor* UInventoryBlueprintLibrary::BuildInventory(UObject* WorldContextObject, bool bCreatePickup, FVector SpawnLocation, FInventoryBalanceStateInitializationData InitData) {
    return NULL;
}

UInventoryBlueprintLibrary::UInventoryBlueprintLibrary() {
}

