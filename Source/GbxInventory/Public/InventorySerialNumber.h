#pragma once
#include "CoreMinimal.h"
#include "EInventorySerialNumberState.h"
#include "InventorySerialNumber.generated.h"

USTRUCT()
struct GBXINVENTORY_API FInventorySerialNumber {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EInventorySerialNumberState State;
    
    UPROPERTY()
    TArray<uint8> Buffer;
    
    UPROPERTY()
    uint32 RunningCounter;
    
public:
    FInventorySerialNumber();
};

