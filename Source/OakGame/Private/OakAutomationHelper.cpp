#include "OakAutomationHelper.h"

class UInventoryPartData;
class UItemPoolListInterface;
class AActor;
class UManufacturerData;
class UObject;
class UInventoryData;
class AOakInventoryItemPickup;
class UInventoryBalanceData;
class UInventoryGenericPartData;
class UInventoryCustomizationPartData;

FString UOakAutomationHelper::SpawnSerialNumberFromPool(UItemPoolListInterface* Pool, int32 GameStage, AActor* Context) {
    return TEXT("");
}

AActor* UOakAutomationHelper::SpawnInventoryFromSerialNumber(const FString& SerialNumber, UObject* Context) {
    return NULL;
}

FString UOakAutomationHelper::GetPickupSerialNumber(AOakInventoryItemPickup* Pickup) {
    return TEXT("");
}

TArray<UClass*> UOakAutomationHelper::GetClassListFromGameConfig(const FString& Section, const FString& Key) {
    return TArray<UClass*>();
}

bool UOakAutomationHelper::DecodeSerialNumber(const FString& SerialNumber, UManufacturerData*& Manufacturer, UInventoryBalanceData*& BalanceData, UInventoryData*& InvData, int32& GameStage, TArray<UInventoryPartData*>& Parts, TArray<UInventoryGenericPartData*>& GenericParts, TArray<UInventoryCustomizationPartData*>& CustomParts) {
    return false;
}

UOakAutomationHelper::UOakAutomationHelper() {
}

