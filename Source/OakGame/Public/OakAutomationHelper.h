#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakAutomationHelper.generated.h"

class UManufacturerData;
class UInventoryPartData;
class UItemPoolListInterface;
class AActor;
class UInventoryData;
class AOakInventoryItemPickup;
class UInventoryBalanceData;
class UInventoryGenericPartData;
class UInventoryCustomizationPartData;

UCLASS(Abstract, BlueprintType)
class UOakAutomationHelper : public UObject {
    GENERATED_BODY()
public:
    UOakAutomationHelper();
protected:
    UFUNCTION(BlueprintCallable)
    static FString SpawnSerialNumberFromPool(UItemPoolListInterface* Pool, int32 GameStage, AActor* Context);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnInventoryFromSerialNumber(const FString& SerialNumber, UObject* Context);
    
    UFUNCTION(BlueprintPure)
    static FString GetPickupSerialNumber(AOakInventoryItemPickup* Pickup);
    
    UFUNCTION(BlueprintPure)
    static TArray<UClass*> GetClassListFromGameConfig(const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool DecodeSerialNumber(const FString& SerialNumber, UManufacturerData*& Manufacturer, UInventoryBalanceData*& BalanceData, UInventoryData*& InvData, int32& GameStage, TArray<UInventoryPartData*>& Parts, TArray<UInventoryGenericPartData*>& GenericParts, TArray<UInventoryCustomizationPartData*>& CustomParts);
    
};

