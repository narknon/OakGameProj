#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceStateInitializationData.h"
#include "InventorySaveGameData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventorySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> EncryptedSerialNumber;
    
    UPROPERTY(VisibleAnywhere)
    FInventoryBalanceStateInitializationData DevelopmentSaveData;
    
    FInventorySaveGameData();
};

