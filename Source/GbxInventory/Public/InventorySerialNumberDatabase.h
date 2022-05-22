#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventorySerialNumberDatabase.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GBXINVENTORY_API UInventorySerialNumberDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<UClass*> AssetClasses;
    
public:
    UInventorySerialNumberDatabase();
};

